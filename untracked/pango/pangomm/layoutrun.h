// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _PANGOMM_LAYOUTRUN_H
#define _PANGOMM_LAYOUTRUN_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* layoutrun.h
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

#include <pangomm/attributes.h> //For LogAttr.
#include <pango/pango-layout.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _PangoGlyphItem PangoGlyphItem; }
#endif

namespace Pango
{

class PANGOMM_API Item;
class PANGOMM_API GlyphString;
class PANGOMM_API LayoutRun;

/** A Pango::GlyphItem is a pair of a Pango::Items and the glyphs resulting from shaping the text corresponding to an item.
 * As an example of the usage of Pango::GlyphItem, the results of shaping text with Pango::Layout is a list of Pango::LayoutLine, 
 * each of which contains a list of Pango::GlyphItem. 
 */
typedef LayoutRun GlyphItem;

//TODO: Change this to just GlyphItem when we can break API/ABI.

/** A Pango::LayoutRun represents a single run within a LayoutLine.
 * It is simply an alternate name for GlyphItem.
 */
class PANGOMM_API LayoutRun
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = LayoutRun;
  using BaseObjectType = PangoGlyphItem;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;

  LayoutRun();

  explicit LayoutRun(PangoGlyphItem* gobject, bool make_a_copy = true);

  LayoutRun(const LayoutRun& other);
  LayoutRun& operator=(const LayoutRun& other);

  LayoutRun(LayoutRun&& other) noexcept;
  LayoutRun& operator=(LayoutRun&& other) noexcept;

  ~LayoutRun() noexcept;

  void swap(LayoutRun& other) noexcept;

  ///Provides access to the underlying C instance.
  PangoGlyphItem*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const PangoGlyphItem* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  PangoGlyphItem* gobj_copy() const;

protected:
  PangoGlyphItem* gobject_;

private:

  
public:
  // pango_glyph_item_split() returns a newly created PangoGlyphItem. Don't take a copy.
 

  /** Modifies @a orig to cover only the text after @a split_index, and
   * returns a new item that covers the text before @a split_index that
   * used to be in @a orig. You can think of @a split_index as the length of
   * the returned item. @a split_index may not be 0, and it may not be
   * greater than or equal to the length of @a orig (that is, there must
   * be at least one byte assigned to each item, you can't create a
   * zero-length item).
   * 
   * This function is similar in function to Pango::Item::split() (and uses
   * it internally.)
   * 
   * @newin{1,2}
   * 
   * @param text Text to which positions in @a orig apply.
   * @param split_index Byte index of position to split item, relative to the start of the item.
   * @return The newly allocated item representing text before
   *  @a split_index, which should be freed
   * with free().
   */
  GlyphItem split(const Glib::ustring& text, int split_index);

  //This takes ownership of the GlyphItem, which is strange:
  // _WRAP_METHOD(GSList* apply_attrs(const Glib::ustring& text, const AttrList& list), pango_glyph_item_apply_attrs)
  
  /** Adds spacing between the graphemes of @a glyph_item to
   * give the effect of typographic letter spacing.
   * 
   * @newin{1,6}
   * 
   * @param text Text that @a glyph_item corresponds to
   * (glyph_item->item->offset is an offset from the
   * start of @a text).
   * @param log_attrs Logical attributes for the item
   * (the first logical attribute refers to the position
   * before the first character in the item).
   * @param letter_spacing Amount of letter spacing to add
   * in Pango units. May be negative, though too large
   * negative values will give ugly results.
   */
  void letter_space(const Glib::ustring& text, const LogAttr& log_attrs, int letter_spacing =  0);

  /** Gets the Pango::Item object that provides information about the segment of text in this run.
   * @return A Pango::Item object.
   */
  Item get_item() const;

  /** Gets the string of glyphs obtained by shaping the text for this item.
   * @return A Pango::GlyphString object.
   */
  GlyphString get_glyphs() const;


};

} /* namespace Pango */


namespace Pango
{

/** @relates Pango::LayoutRun
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(LayoutRun& lhs, LayoutRun& rhs) noexcept
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
 * @relates Pango::LayoutRun
 */
PANGOMM_API
Pango::LayoutRun wrap(PangoGlyphItem* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class PANGOMM_API Value<Pango::LayoutRun> : public Glib::Value_Boxed<Pango::LayoutRun>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _PANGOMM_LAYOUTRUN_H */

