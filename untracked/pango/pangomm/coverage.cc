// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <pangomm/coverage.h>
#include <pangomm/private/coverage_p.h>

#include <pango/pango-enum-types.h>

/*
 * Copyright 1998-1999 The Gtk-- Development Team
 * Copyright 2001      Free Software Foundation
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

namespace Pango
{

#ifndef PANGOMM_DISABLE_DEPRECATED

G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ArrayHandle<unsigned char> Coverage::to_bytes() const
{
  guchar* bytes = 0;
  int n_bytes = 0;
  pango_coverage_to_bytes(const_cast<PangoCoverage*>(gobj()), &bytes, &n_bytes);
  return Glib::ArrayHandle<unsigned char>(bytes, n_bytes, Glib::OWNERSHIP_SHALLOW);
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // PANGOMM_DISABLE_DEPRECATED


} /* namespace Pango */

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Pango::CoverageLevel>::value_type()
{
  return pango_coverage_level_get_type();
}


/* Why reinterpret_cast<Coverage*>(gobject) is needed:
 *
 * A Coverage instance is in fact always a PangoCoverage instance.
 * Unfortunately, PangoCoverage cannot be a member of Coverage,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because Coverage does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Pango::Coverage> wrap(PangoCoverage* object, bool take_copy)
{
  if(take_copy && object)
    pango_coverage_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Pango::Coverage>(reinterpret_cast<Pango::Coverage*>(object));
}

} // namespace Glib


namespace Pango
{

// static
Glib::RefPtr<Coverage> Coverage::create()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Coverage>(reinterpret_cast<Coverage*>(pango_coverage_new()));
}

void Coverage::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  pango_coverage_ref(reinterpret_cast<PangoCoverage*>(const_cast<Coverage*>(this)));
}

void Coverage::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  pango_coverage_unref(reinterpret_cast<PangoCoverage*>(const_cast<Coverage*>(this)));
}

PangoCoverage* Coverage::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<PangoCoverage*>(this);
}

const PangoCoverage* Coverage::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const PangoCoverage*>(this);
}

PangoCoverage* Coverage::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<PangoCoverage*>(const_cast<Coverage*>(this));
  pango_coverage_ref(gobject);
  return gobject;
}


#ifndef PANGOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<Coverage> Coverage::create(const guchar* bytes, int n_bytes)
{
  return Glib::wrap(pango_coverage_from_bytes(const_cast<guchar*>(bytes), n_bytes));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // PANGOMM_DISABLE_DEPRECATED

CoverageLevel Coverage::get(int index) const
{
  return ((CoverageLevel)(pango_coverage_get(const_cast<PangoCoverage*>(gobj()), index)));
}

void Coverage::set(int index, CoverageLevel level)
{
  pango_coverage_set(gobj(), index, ((PangoCoverageLevel)(level)));
}

#ifndef PANGOMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Coverage::max(const Glib::RefPtr<Coverage>& other) const
{
  pango_coverage_max(const_cast<PangoCoverage*>(gobj()), Glib::unwrap(other));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // PANGOMM_DISABLE_DEPRECATED


} // namespace Pango

