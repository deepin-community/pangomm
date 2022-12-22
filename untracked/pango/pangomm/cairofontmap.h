// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _PANGOMM_CAIROFONTMAP_H
#define _PANGOMM_CAIROFONTMAP_H

#include <pangommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: cairofontmap.hg,v 1.1 2006/05/30 17:14:21 murrayc Exp $ */

/* fontmap.h
 *
 * Copyright 2001      The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <glibmm/interface.h>
#include <pangomm/context.h>
#include <pango/pangocairo.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _PangoCairoFontMapIface PangoCairoFontMapIface;
#endif

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using PangoCairoFontMap = struct _PangoCairoFontMap;
using PangoCairoFontMapClass = struct _PangoCairoFontMapClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Pango
{ class PANGOMM_API CairoFontMap_Class; } // namespace Pango
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Pango
{

class PANGOMM_API Context;

/** A Pango::CairoFontMap represents the set of fonts available for a particular rendering system.
 */

class PANGOMM_API CairoFontMap : public Glib::Interface
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = CairoFontMap;
  using CppClassType = CairoFontMap_Class;
  using BaseObjectType = PangoCairoFontMap;
  using BaseClassType = PangoCairoFontMapIface;

  // noncopyable
  CairoFontMap(const CairoFontMap&) = delete;
  CairoFontMap& operator=(const CairoFontMap&) = delete;

private:
  friend class CairoFontMap_Class;
  static CppClassType cairofontmap_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  CairoFontMap();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit CairoFontMap(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit CairoFontMap(PangoCairoFontMap* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  CairoFontMap(CairoFontMap&& src) noexcept;
  CairoFontMap& operator=(CairoFontMap&& src) noexcept;

  ~CairoFontMap() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  PangoCairoFontMap*       gobj()       { return reinterpret_cast<PangoCairoFontMap*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const PangoCairoFontMap* gobj() const { return reinterpret_cast<PangoCairoFontMap*>(gobject_); }

private:


public:
  //_WRAP_METHOD(static Glib::RefPtr<PangoFontMap> get_default(), pango_cairo_font_map_get_default) //TODO: ref this?
  
  /** Sets a default Pango::CairoFontMap to use with Cairo.
   * 
   * This can be used to change the Cairo font backend that the
   * default fontmap uses for example.  The old default font map
   * is unreffed and the new font map referenced.
   * 
   * Note that since Pango 1.32.6, the default fontmap is per-thread.
   * This function only changes the default fontmap for
   * the current thread.  Default fontmaps of existing threads
   * are not changed. Default fontmaps of any new threads will
   * still be created using new().
   * 
   * A value of <tt>nullptr</tt> for @a fontmap will cause the current default
   * font map to be released and a new default font
   * map to be created on demand, using new().
   * 
   * @newin{1,22}
   */
  void set_default();

 
  /** Gets the type of Cairo font backend that @a fontmap uses.  
   * 
   * @newin{1,18}
   * 
   * @return The #cairo_font_type_t cairo font backend type.
   */
  Cairo::FontType get_font_type() const;

  
  /** Sets the resolution for the fontmap. This is a scale factor between
   * points specified in a Pango::FontDescription and Cairo units. The
   * default value is 96, meaning that a 10 point font will be 13
   * units high. (10 * 96. / 72. = 13.3).
   * 
   * @newin{1,10}
   * 
   * @param dpi The resolution in "dots per inch". (Physical inches aren't actually
   * involved; the terminology is conventional.).
   */
  void set_resolution(double dpi);
  
  /** Gets the resolution for the fontmap. See set_resolution()
   * 
   * @newin{1,10}
   * 
   * @return The resolution in "dots per inch".
   */
  double get_resolution() const;

  // TODO: Remove this when we can break ABI.
  
  /** Create a Pango::Context for the given fontmap.
   * 
   * @newin{1,10}
   * 
   * Deprecated: 1.22: Use Pango::FontMap::create_context() instead.
   * 
   * @return The newly created context; free with Glib::object_unref().
   */

  Glib::RefPtr<Context> create_context();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Pango


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Pango::CairoFontMap
   */
  PANGOMM_API
  Glib::RefPtr<Pango::CairoFontMap> wrap(PangoCairoFontMap* object, bool take_copy = false);

} // namespace Glib


#endif /* _PANGOMM_CAIROFONTMAP_H */

