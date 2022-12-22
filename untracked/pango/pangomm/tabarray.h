// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _PANGOMM_TABARRAY_H
#define _PANGOMM_TABARRAY_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* tabarray.h
 *
 * Copyright (C) 1998-1999 The gtkmm Development Team
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

#include <pangomm/attrlist.h>
#include <pango/pango-tabs.h>
#include <pango/pango-break.h> /* For PangoLogAttrs */
#include <utility>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _PangoTabArray PangoTabArray; }
#endif

namespace Pango
{


/** @addtogroup pangommEnums pangomm Enums and Flags */

/** 
 *  @var TabAlign TAB_LEFT
 * The tab stop appears to the left of the text.
 * 
 *  @enum TabAlign
 * 
 * A Pango::TabAlign specifies where a tab stop appears relative to the text.
 *
 * @ingroup pangommEnums
 */
enum TabAlign
{
  TAB_LEFT
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::TabAlign> : public Glib::Value_Enum<Pango::TabAlign>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{


/** A Pango::TabArray contains an array of tab stops.
 * Each tab stop has an alignment and a position.
 */
class PANGOMM_API TabArray
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = TabArray;
  using BaseObjectType = PangoTabArray;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;

  TabArray();

  explicit TabArray(PangoTabArray* gobject, bool make_a_copy = true);

  TabArray(const TabArray& other);
  TabArray& operator=(const TabArray& other);

  TabArray(TabArray&& other) noexcept;
  TabArray& operator=(TabArray&& other) noexcept;

  ~TabArray() noexcept;

  void swap(TabArray& other) noexcept;

  ///Provides access to the underlying C instance.
  PangoTabArray*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const PangoTabArray* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  PangoTabArray* gobj_copy() const;

protected:
  PangoTabArray* gobject_;

private:

  
public:
  explicit TabArray(int initial_size, bool positions_in_pixels = true);

  
  /** Gets the number of tab stops in @a tab_array.
   * 
   * @return The number of tab stops in the array.
   */
  int get_size() const;
  
  /** Resizes a tab array. You must subsequently initialize any tabs that
   * were added as a result of growing the array.
   * 
   * @param new_size New size of the array.
   */
  void resize(int new_size);
  
  /** Sets the alignment and location of a tab stop.
   *  @a alignment must always be Pango::TAB_LEFT in the current
   * implementation.
   * 
   * @param tab_index The index of a tab stop.
   * @param alignment Tab alignment.
   * @param location Tab location in Pango units.
   */
  void set_tab(int tab_index, TabAlign alignment, int location);

  /** Gets the alignment and position of a tab stop.
   * @return An std::pair<TabAlign, int>. The first element represents the tab stop alignment, the second one is the tab position.
   */
  std::pair<TabAlign,int> get_tab(int tab_index) const;

  /** Gets an array of std::pairs containing the tab stop alignments and tab positions.
   * @return An array of std::pair<TabAlign, int>. The first element in each pair represents the tab stop alignment, the second one is the tab position.
   */
  Glib::ArrayHandle< std::pair<TabAlign,int> > get_tabs() const;

  
  /** Returns <tt>true</tt> if the tab positions are in pixels, <tt>false</tt> if they are
   * in Pango units.
   * 
   * @return Whether positions are in pixels.
   */
  bool get_positions_in_pixels() const;


};

} //namespace Pango


namespace Pango
{

/** @relates Pango::TabArray
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(TabArray& lhs, TabArray& rhs) noexcept
  { lhs.swap(rhs); }

} // namespace Pango

namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Pango::TabArray
 */
PANGOMM_API
Pango::TabArray wrap(PangoTabArray* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class PANGOMM_API Value<Pango::TabArray> : public Glib::Value_Boxed<Pango::TabArray>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _PANGOMM_TABARRAY_H */

