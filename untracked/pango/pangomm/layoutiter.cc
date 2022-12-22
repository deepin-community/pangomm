// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!


#include <glibmm.h>

#include <pangomm/layoutiter.h>
#include <pangomm/private/layoutiter_p.h>


// -*- c++ -*-
/* $Id: layoutiter.ccg,v 1.1 2003/01/21 13:41:06 murrayc Exp $ */

/*
 *
 * Copyright 2001-2002 The gtkmm Development Team
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

#include <pangomm/layout.h>

namespace Pango
{

void LayoutIter::assign_gobj(PangoLayoutIter* /* src */)
{
  //We don't actually use this anymore, and it was only ever for internal use.
  //We just have not removed it completely to avoid appearing to break the ABI.
}

Rectangle LayoutIter::get_char_extents() const
{
  Rectangle logical_rect;
  pango_layout_iter_get_char_extents(const_cast<PangoLayoutIter*>(gobj()), logical_rect.gobj());
  return logical_rect;
}

Rectangle LayoutIter::get_cluster_ink_extents() const
{
  Rectangle ink_rect;
  pango_layout_iter_get_cluster_extents(const_cast<PangoLayoutIter*>(gobj()), ink_rect.gobj(), 0);
  return ink_rect;
}

Rectangle LayoutIter::get_cluster_logical_extents() const
{
  Rectangle logical_rect;
  pango_layout_iter_get_cluster_extents(const_cast<PangoLayoutIter*>(gobj()), 0, logical_rect.gobj());
  return logical_rect;
}

Rectangle LayoutIter::get_run_ink_extents() const
{
  Rectangle ink_rect;
  pango_layout_iter_get_run_extents(const_cast<PangoLayoutIter*>(gobj()), ink_rect.gobj(), 0);
  return ink_rect;
}

Rectangle LayoutIter::get_run_logical_extents() const
{
  Rectangle logical_rect;
  pango_layout_iter_get_run_extents(const_cast<PangoLayoutIter*>(gobj()), 0, logical_rect.gobj());
  return logical_rect;
}

Rectangle LayoutIter::get_line_ink_extents() const
{
  Rectangle ink_rect;
  pango_layout_iter_get_line_extents(const_cast<PangoLayoutIter*>(gobj()), ink_rect.gobj(), 0);
  return ink_rect;
}

Rectangle LayoutIter::get_line_logical_extents() const
{
  Rectangle logical_rect;
  pango_layout_iter_get_line_extents(const_cast<PangoLayoutIter*>(gobj()), 0, logical_rect.gobj());
  return logical_rect;
}

Rectangle LayoutIter::get_layout_ink_extents() const
{
  Rectangle ink_rect;
  pango_layout_iter_get_layout_extents(const_cast<PangoLayoutIter*>(gobj()), ink_rect.gobj(), 0);
  return ink_rect;
}

Rectangle LayoutIter::get_layout_logical_extents() const
{
  Rectangle logical_rect;
  pango_layout_iter_get_layout_extents(const_cast<PangoLayoutIter*>(gobj()), 0, logical_rect.gobj());
  return logical_rect;
}

} // namespace Pango


namespace
{
} // anonymous namespace


namespace Glib
{

Pango::LayoutIter wrap(PangoLayoutIter* object, bool take_copy)
{
  return Pango::LayoutIter(object, take_copy);
}

} // namespace Glib


namespace Pango
{


// static
GType LayoutIter::get_type()
{
  return pango_layout_iter_get_type();
}

LayoutIter::LayoutIter()
:
  gobject_ (nullptr) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

LayoutIter::LayoutIter(const LayoutIter& other)
:
  gobject_ ((other.gobject_) ? pango_layout_iter_copy(other.gobject_) : nullptr)
{}

LayoutIter::LayoutIter(LayoutIter&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

LayoutIter& LayoutIter::operator=(LayoutIter&& other) noexcept
{
  LayoutIter temp (std::move(other));
  swap(temp);
  return *this;
}

LayoutIter::LayoutIter(PangoLayoutIter* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? pango_layout_iter_copy(gobject) : gobject)
{}

LayoutIter& LayoutIter::operator=(const LayoutIter& other)
{
  LayoutIter temp (other);
  swap(temp);
  return *this;
}

LayoutIter::~LayoutIter() noexcept
{
  if(gobject_)
    pango_layout_iter_free(gobject_);
}

void LayoutIter::swap(LayoutIter& other) noexcept
{
  std::swap(gobject_, other.gobject_);
}

PangoLayoutIter* LayoutIter::gobj_copy() const
{
  return pango_layout_iter_copy(gobject_);
}


int LayoutIter::get_index() const
{
  return pango_layout_iter_get_index(const_cast<PangoLayoutIter*>(gobj()));
}

LayoutRun LayoutIter::get_run() const
{
  return Glib::wrap(pango_layout_iter_get_run_readonly(const_cast<PangoLayoutIter*>(gobj())), true);
}

Glib::RefPtr<LayoutLine> LayoutIter::get_line() const
{
  Glib::RefPtr<LayoutLine> retvalue = Glib::wrap(pango_layout_iter_get_line(const_cast<PangoLayoutIter*>(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

bool LayoutIter::at_last_line() const
{
  return pango_layout_iter_at_last_line(const_cast<PangoLayoutIter*>(gobj()));
}

Glib::RefPtr<Layout> LayoutIter::get_layout()
{
  Glib::RefPtr<Layout> retvalue = Glib::wrap(pango_layout_iter_get_layout(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Layout> LayoutIter::get_layout() const
{
  return const_cast<LayoutIter*>(this)->get_layout();
}

bool LayoutIter::next_char()
{
  return pango_layout_iter_next_char(gobj());
}

bool LayoutIter::next_cluster()
{
  return pango_layout_iter_next_cluster(gobj());
}

bool LayoutIter::next_run()
{
  return pango_layout_iter_next_run(gobj());
}

bool LayoutIter::next_line()
{
  return pango_layout_iter_next_line(gobj());
}

void LayoutIter::get_cluster_extents(Rectangle& ink_rect, Rectangle& logical_rect) const
{
  pango_layout_iter_get_cluster_extents(const_cast<PangoLayoutIter*>(gobj()), (ink_rect).gobj(), (logical_rect).gobj());
}

void LayoutIter::get_run_extents(Rectangle& ink_rect, Rectangle& logical_rect) const
{
  pango_layout_iter_get_run_extents(const_cast<PangoLayoutIter*>(gobj()), (ink_rect).gobj(), (logical_rect).gobj());
}

void LayoutIter::get_line_extents(Rectangle& ink_rect, Rectangle& logical_rect) const
{
  pango_layout_iter_get_line_extents(const_cast<PangoLayoutIter*>(gobj()), (ink_rect).gobj(), (logical_rect).gobj());
}

void LayoutIter::get_line_yrange(int& y0, int& y1) const
{
  pango_layout_iter_get_line_yrange(const_cast<PangoLayoutIter*>(gobj()), &(y0), &(y1));
}

void LayoutIter::get_layout_extents(Rectangle& ink_rect, Rectangle& logical_rect) const
{
  pango_layout_iter_get_layout_extents(const_cast<PangoLayoutIter*>(gobj()), (ink_rect).gobj(), (logical_rect).gobj());
}

int LayoutIter::get_baseline() const
{
  return pango_layout_iter_get_baseline(const_cast<PangoLayoutIter*>(gobj()));
}


} // namespace Pango


