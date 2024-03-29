# This file is part of pangomm.

project('pangomm', 'cpp',
  version: '2.46.3',
  license: 'LGPLv2.1+',
  default_options: [
    'cpp_std=c++11',
    'warning_level=1',
  ],
  meson_version: '>= 0.55.0', # required for meson.add_dist_script(python3, ...)
                              # and meson.add_install_script(python3, ...)
)

pangomm_api_version = '1.4'
pangomm_pcname = meson.project_name() + '-' + pangomm_api_version

pangomm_version_array = meson.project_version().split('.')
pangomm_major_version = pangomm_version_array[0].to_int()
pangomm_minor_version = pangomm_version_array[1].to_int()
pangomm_micro_version = pangomm_version_array[2].to_int()

# http://www.gnu.org/software/libtool/manual/html_node/Updating-version-info.html
# The relation between libtool's current:revison:age interface versioning
# and the .so filename, .so.x.y.z, is
# x = current - age
# y = age
# z = revision
# If libtool_soversion is updated as described in libtool's documentation,
# x.y.z will usually *not* be equal to meson.project_version().
libtool_soversion = [1, 30, 0]
pangomm_libversion = '@0@.@1@.@2@'.format(
  libtool_soversion[0] - libtool_soversion[2],
  libtool_soversion[2],
  libtool_soversion[1]
)
macos_darwin_versions = [
  libtool_soversion[0] + 1,
  '@0@.@1@'.format(libtool_soversion[0] + 1, libtool_soversion[1])
]

# Use these instead of meson.source_root() and meson.build_root() in subdirectories.
# source_root() and build_root() are not useful, if this is a subproject.
project_source_root = meson.current_source_dir()
project_build_root = meson.current_build_dir()

cpp_compiler = meson.get_compiler('cpp')
is_msvc = cpp_compiler.get_id() == 'msvc'
python3 = import('python').find_installation()

python_version = python3.language_version()
python_version_req = '>= 3.5'
if not python_version.version_compare(python_version_req)
  error('Requires Python @0@, found @1@.'.format(python_version_req, python_version))
endif

# Do we build from a git repository?
# Suppose we do if and only if a '.git' directory or file exists.
cmd_py = '''
import os
import sys
sys.exit(os.path.isdir("@0@") or os.path.isfile("@0@"))
'''.format(project_source_root / '.git')
is_git_build = run_command(python3, '-c', cmd_py, check: false).returncode() != 0

# Are we testing a dist tarball while it's being built?
# There ought to be a better way. https://github.com/mesonbuild/meson/issues/6866
is_dist_check = project_source_root.contains('dist-unpack') and \
                project_build_root.contains('dist-build')

# Options.
maintainer_mode_opt = get_option('maintainer-mode')
maintainer_mode = maintainer_mode_opt == 'true' or \
                 (maintainer_mode_opt == 'if-git-build' and is_git_build)
if is_dist_check
  message('Looks like a tarball is being tested. ' + \
  'Option "dist-warnings" is used instead of "warnings".')
  cpp_warnings = get_option('dist-warnings')
else
  cpp_warnings = get_option('warnings')
endif
warning_level = get_option('warning_level').to_int()
werror = get_option('werror')
build_deprecated_api = get_option('build-deprecated-api')
build_documentation_opt = get_option('build-documentation')
build_documentation = build_documentation_opt == 'true' or \
                     (build_documentation_opt == 'if-maintainer-mode' and maintainer_mode)

# Installation directories are relative to {prefix}.
install_prefix = get_option('prefix')
install_includedir = get_option('includedir')
install_libdir = get_option('libdir')
install_datadir = get_option('datadir')
install_pkgconfigdir = install_libdir / 'pkgconfig'

# Dependencies.
# pangomm_build_dep: Dependencies when building the pangomm library.
# pangomm_dep (created in pango/pangomm/meson.build):
#   Dependencies when using the pangomm library.

# cairomm and glibmm recently gained Meson build support, so we look
# for their pkg-config files on Visual Studio, too
cairomm_req = '>= 1.2.2'
glibmm_req = '>= 2.48.0'

# Pango supported pkg-config files on MSVC files for a good while,
# so just use that
pangocairo_req = '>= 1.45.1'
pangocairo_dep = dependency('pangocairo', version: pangocairo_req)

glibmm_req_minor_ver = '4'
cairomm_req_minor_ver = '0'

cairomm_dep = dependency('cairomm-1.@0@'.format(cairomm_req_minor_ver), version: cairomm_req)
glibmm_dep = dependency('glibmm-2.@0@'.format(glibmm_req_minor_ver), version: glibmm_req)

# Where to find gmmproc and generate_wrap_init.pl.
gmmproc_dir = glibmm_dep.get_variable(pkgconfig: 'gmmprocdir', internal: 'gmmprocdir')

if is_msvc
  # Check later whether we compile pangomm without using gendef
  build_shared_libs_directly = false
else
  # not MSVC: gendef is not used at all
  build_shared_libs_directly = true
endif

pangomm_build_dep = [glibmm_dep, cairomm_dep, pangocairo_dep]
pangomm_requires = ' '.join([
  'glibmm-2.@0@'.format(glibmm_req_minor_ver), glibmm_req,
  'cairomm-1.@0@'.format(cairomm_req_minor_ver), cairomm_req,
  'pangocairo', pangocairo_req,
])

# Some dependencies are required only in maintainer mode and/or if
# reference documentation shall be built.
mm_common_get = find_program('mm-common-get', required: false)
if maintainer_mode and not mm_common_get.found()
  message('Maintainer mode requires the \'mm-common-get\' command. If it is not found,\n' +
          'install the \'mm-common\' package, version 1.0.0 or higher.')
  # If meson --wrap-mode != forcefallback, Meson falls back to the mm-common
  # subproject only if mm-common-get is required.
  mm_common_get = find_program('mm-common-get', required: true)
endif
m4 = find_program('m4', required: maintainer_mode) # Used by gmmproc (in glibmm)
doxygen = find_program('doxygen', required: build_documentation)
dot = find_program('dot', required: build_documentation) # Used by Doxygen
xsltproc = find_program('xsltproc', required: build_documentation)

# Script files copied to 'untracked' by mm-common-get.
script_dir = project_source_root / 'untracked' / 'build_scripts'
generate_binding_py = script_dir / 'generate-binding.py'
doc_reference_py = script_dir / 'doc-reference.py'
dist_changelog_py = script_dir / 'dist-changelog.py'
dist_build_scripts_py = script_dir / 'dist-build-scripts.py'
check_dllexport_usage_py = script_dir / 'check-dllexport-usage.py'

if maintainer_mode
  # Copy files to untracked/build_scripts and untracked/docs.
  run_command(mm_common_get, '--force', script_dir,
    project_source_root / 'untracked' / 'docs',
    check: true,
  )
else
  cmd_py = '''
import os
import sys
sys.exit(os.path.isfile("@0@"))
'''.format(generate_binding_py)
  file_exists = run_command(python3, '-c', cmd_py, check: false).returncode() != 0
  if not file_exists
    error('Missing files in untracked/. You must enable maintainer-mode.')
  endif
endif

# Check if perl is required and available.
doc_perl_prop = run_command(
  python3, doc_reference_py, 'get_script_property',
  '', # MMDOCTOOLDIR is not used
  'requires_perl',
  check: false,
)
doc_requires_perl = true
if doc_perl_prop.returncode() == 0 and doc_perl_prop.stdout() == 'false'
  doc_requires_perl = false
endif

perl = find_program('perl', required: maintainer_mode or \
  (build_documentation and doc_requires_perl))

# pangomm's own script files.
pangomm_script_dir = project_source_root / 'tools'
dummy_header_py = pangomm_script_dir / 'dummy-header.py'

# Whether to include toolset version in .lib and DLL file names
# on Visual Studio 2015 and later (default: yes)
use_msvc14x_toolset_ver = get_option('msvc14x-parallel-installable')

# Add toolset version in builds done with Visual Studio 2015 or later
msvc14x_toolset_ver = ''

if is_msvc
  # Check for the first line in a file generated with gmmproc,
  # to see which gmmproc version was used
  if maintainer_mode
    check_gmmproc_ver_cmd = [
      python3, check_dllexport_usage_py,
      '--gmmprocdir=@0@'.format(gmmproc_dir),
    ]
  else
    check_gmmproc_ver_cmd = [
      python3, check_dllexport_usage_py,
      '--file=@0@/untracked/pango/pangomm/attributes.h'.format('/'.join(project_source_root.split('\\')))
    ]
  endif

  # Enable __declspec(dllexport) if the pangomm headers generated from the .hg files
  # were generated using a recent enough gmmproc
  build_shared_libs_directly = run_command(check_gmmproc_ver_cmd, check: false).returncode() == 0
  message('Using __declspec(dllexport) to build pangomm: @0@'.format(build_shared_libs_directly ? 'YES' : 'NO'))

  # Put in the toolset version if the build is done with Visual Studio
  # 2015 or later, unless explicitly told not to
  if use_msvc14x_toolset_ver
    if cpp_compiler.version().version_compare('>=19.30')
      msvc14x_toolset_ver = '-vc143'
    elif cpp_compiler.version().version_compare('>=19.20')
      msvc14x_toolset_ver = '-vc142'
    elif cpp_compiler.version().version_compare('>=19.10')
      msvc14x_toolset_ver = '-vc141'
    elif cpp_compiler.version().version_compare('>=19.00')
      msvc14x_toolset_ver = '-vc140'
    else
      message('Visual Studio toolset version not applied for pre-Visual Studio 2015 builds')
    endif
  endif
endif

# Set compiler warnings.
# Meson warns if any of the /W1, /W2, /W3, /W4, /Wall, -Wall, -Wextra, -Werror
# compiler options are added with add_project_arguments().
# Avoid such warnings, when possible.
# See _warn_about_builtin_args() in meson/mesonbuild/interpreter/interpreter.py.
warning_flags = []
if cpp_warnings == 'min'
  if warning_level == 0
    warning_flags = is_msvc ? ['/W2'] : ['-Wall']
  endif
elif cpp_warnings == 'max' or cpp_warnings == 'fatal'
  if warning_level < 3
    warning_flags = is_msvc ? ['/W4'] : ['-pedantic', '-Wall', '-Wextra']
  endif
  if not is_msvc
    warning_flags += '-Wformat-security -Wsuggest-override -Wshadow -Wno-long-long'.split()
  endif
  if cpp_warnings == 'fatal'
    if not werror
      warning_flags += is_msvc ? ['/WX'] : ['-Werror']
    endif
    deprecations = 'G PANGO GLIBMM SIGCXX'.split()
    foreach d : deprecations
      warning_flags += '-D@0@_DISABLE_DEPRECATED'.format(d)
    endforeach
  endif
endif

warning_flags = cpp_compiler.get_supported_arguments(warning_flags)
add_project_arguments(warning_flags, language: 'cpp')

# MSVC: Ignore warnings that aren't really harmful, but make those
#       that should not be overlooked stand out.
if is_msvc
  disable_warnings_list = [
    '/FImsvc_recommended_pragmas.h', # Turn off harmless warnings but make potentially
                                     # dangerous ones glaring, distributed with GLib
    '/EHsc',  # avoid warnings caused by exception handling model used
    '/utf-8', # Avoid C4819 unicode conversion warnings when building on CJK locales
  ]
  if host_machine.cpu_family() == 'x86_64' or host_machine.cpu_family() == 'aarch64'
    # 'var' : conversion from 'size_t' to 'type', possible loss of data (applies on 64-bit builds)
    disable_warnings_list += '/wd4267'
  endif
  add_project_arguments(
    cpp_compiler.get_supported_arguments(disable_warnings_list),
    language: 'cpp'
  )
endif

# add_dist_script() is not allowed in a subproject if meson.version() < 0.58.0.
can_add_dist_script = not meson.is_subproject() or meson.version().version_compare('>= 0.58.0')

subdir('tools/extra_defs_gen')
subdir('MSVC_NMake/gendef')
subdir('pango')
subdir('MSVC_NMake/pangomm')
subdir('pango/pangomm')
subdir('docs/reference')

if can_add_dist_script
  # Add a ChangeLog file to the distribution directory.
  meson.add_dist_script(
    python3, dist_changelog_py,
    project_source_root,
  )
  # Add build scripts to the distribution directory, and delete .gitignore
  # files and an empty $MESON_PROJECT_DIST_ROOT/build/ directory.
  meson.add_dist_script(
    python3, dist_build_scripts_py,
    project_source_root,
    'untracked' / 'build_scripts',
  )
endif

if meson.is_subproject()
  pkgconfig_vars = {
    'gmmprocm4dir': project_source_root / 'tools' / 'm4',
    'htmlrefdir': install_prefix / install_docdir / 'reference' / 'html',
    'htmlrefpub': 'http://library.gnome.org/devel/' + pkg_conf_data.get_unquoted('PACKAGE_TARNAME') + '/2.46/'
  }
  if build_documentation
    pkgconfig_vars += {'doxytagfile': tag_file.full_path()}
    # May be used in a main project.
    global_tag_file_target = tag_file
  endif
  pangomm_dep = declare_dependency(
    dependencies: pangomm_own_dep,
    variables: pkgconfig_vars,
  )

  # A main project that looks for pangomm_pcname.pc shall find pangomm_dep.
  meson.override_dependency(pangomm_pcname, pangomm_dep)
endif

# Print a summary.
real_maintainer_mode = ''
if maintainer_mode_opt == 'if-git-build'
  real_maintainer_mode = ' (@0@)'.format(maintainer_mode)
endif

real_build_documentation = ''
if build_documentation_opt == 'if-maintainer-mode'
  real_build_documentation = ' (@0@)'.format(build_documentation)
endif

summary = [
  '',
  '------',
  meson.project_name() + ' ' + meson.project_version(),
  '',
  '         Maintainer mode: @0@@1@'.format(maintainer_mode_opt, real_maintainer_mode),
  '       Compiler warnings: @0@ (warning_level: @1@, werror: @2@)'. \
                             format(cpp_warnings, warning_level, werror),
  '    Build deprecated API: @0@'.format(build_deprecated_api),
  'Build HTML documentation: @0@@1@'.format(build_documentation_opt, real_build_documentation),
  'Directories:',
  '                  prefix: @0@'.format(install_prefix),
  '              includedir: @0@'.format(install_prefix / install_includedir),
  '       includepangommdir: @0@'.format(install_prefix / install_includedir / pangomm_pcname),
  '                  libdir: @0@'.format(install_prefix / install_libdir),
  '        includeconfigdir: @0@'.format(install_prefix / install_includeconfigdir),
  '                   m4dir: @0@'.format(install_prefix / install_m4dir),
  '            pkgconfigdir: @0@'.format(install_prefix / install_pkgconfigdir),
  '                 datadir: @0@'.format(install_prefix / install_datadir),
  '                  docdir: @0@'.format(install_prefix / install_docdir),
  '              devhelpdir: @0@'.format(install_prefix / install_devhelpdir),
]
if maintainer_mode
  summary += [
    '              gmmprocdir: @0@'.format(gmmproc_dir),
  ]
endif
summary += ['------']

message('\n'.join(summary))
