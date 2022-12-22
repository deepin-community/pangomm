// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _PANGOMM_FONTDESCRIPTION_H
#define _PANGOMM_FONTDESCRIPTION_H

#include <pangommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: fontdescription.hg,v 1.2 2006/06/08 20:39:39 murrayc Exp $ */

/* fontdescription.h
 *
 * Copyright (C) 1998-2002 The gtkmm Development Team
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


#include <glibmm/value.h>
#include <pango/pango-font.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _PangoFontDescription PangoFontDescription; }
#endif

namespace Pango
{


/** @addtogroup pangommEnums pangomm Enums and Flags */

/** 
 *  @var Style STYLE_NORMAL
 * The font is upright.
 * 
 *  @var Style STYLE_OBLIQUE
 * The font is slanted, but in a roman style.
 * 
 *  @var Style STYLE_ITALIC
 * The font is slanted in an italic style.
 * 
 *  @enum Style
 * 
 * An enumeration specifying the various slant styles possible for a font.
 *
 * @ingroup pangommEnums
 */
enum Style
{
  STYLE_NORMAL,
  STYLE_OBLIQUE,
  STYLE_ITALIC
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::Style> : public Glib::Value_Enum<Pango::Style>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{

/** 
 *  @var Variant VARIANT_NORMAL
 * A normal font.
 * 
 *  @var Variant VARIANT_SMALL_CAPS
 * A font with the lower case characters
 * replaced by smaller variants of the capital characters.
 * 
 *  @enum Variant
 * 
 * An enumeration specifying capitalization variant of the font.
 *
 * @ingroup pangommEnums
 */
enum Variant
{
  VARIANT_NORMAL,
  VARIANT_SMALL_CAPS
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::Variant> : public Glib::Value_Enum<Pango::Variant>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{

/** 
 *  @var Stretch STRETCH_ULTRA_CONDENSED
 * Ultra condensed width.
 * 
 *  @var Stretch STRETCH_EXTRA_CONDENSED
 * Extra condensed width.
 * 
 *  @var Stretch STRETCH_CONDENSED
 * Condensed width.
 * 
 *  @var Stretch STRETCH_SEMI_CONDENSED
 * Semi condensed width.
 * 
 *  @var Stretch STRETCH_NORMAL
 * The normal width.
 * 
 *  @var Stretch STRETCH_SEMI_EXPANDED
 * Semi expanded width.
 * 
 *  @var Stretch STRETCH_EXPANDED
 * Expanded width.
 * 
 *  @var Stretch STRETCH_EXTRA_EXPANDED
 * Extra expanded width.
 * 
 *  @var Stretch STRETCH_ULTRA_EXPANDED
 * Ultra expanded width.
 * 
 *  @enum Stretch
 * 
 * An enumeration specifying the width of the font relative to other designs
 * within a family.
 *
 * @ingroup pangommEnums
 */
enum Stretch
{
  STRETCH_ULTRA_CONDENSED,
  STRETCH_EXTRA_CONDENSED,
  STRETCH_CONDENSED,
  STRETCH_SEMI_CONDENSED,
  STRETCH_NORMAL,
  STRETCH_SEMI_EXPANDED,
  STRETCH_EXPANDED,
  STRETCH_EXTRA_EXPANDED,
  STRETCH_ULTRA_EXPANDED
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::Stretch> : public Glib::Value_Enum<Pango::Stretch>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{

/** 
 *  @var Weight WEIGHT_THIN
 * The thin weight (= 100; Since: 1.24).
 * 
 *  @var Weight WEIGHT_ULTRALIGHT
 * The ultralight weight (= 200).
 * 
 *  @var Weight WEIGHT_LIGHT
 * The light weight (= 300).
 * 
 *  @var Weight WEIGHT_SEMILIGHT
 * The semilight weight (= 350; Since: 1.36.7).
 * 
 *  @var Weight WEIGHT_BOOK
 * The book weight (= 380; Since: 1.24).
 * 
 *  @var Weight WEIGHT_NORMAL
 * The default weight (= 400).
 * 
 *  @var Weight WEIGHT_MEDIUM
 * The normal weight (= 500; Since: 1.24).
 * 
 *  @var Weight WEIGHT_SEMIBOLD
 * The semibold weight (= 600).
 * 
 *  @var Weight WEIGHT_BOLD
 * The bold weight (= 700).
 * 
 *  @var Weight WEIGHT_ULTRABOLD
 * The ultrabold weight (= 800).
 * 
 *  @var Weight WEIGHT_HEAVY
 * The heavy weight (= 900).
 * 
 *  @var Weight WEIGHT_ULTRAHEAVY
 * The ultraheavy weight (= 1000; Since: 1.24).
 * 
 *  @enum Weight
 * 
 * An enumeration specifying the weight (boldness) of a font. This is a numerical
 * value ranging from 100 to 1000, but there are some predefined values:
 *
 * @ingroup pangommEnums
 */
enum Weight
{
  WEIGHT_THIN = 100,
  WEIGHT_ULTRALIGHT = 200,
  WEIGHT_LIGHT = 300,
  WEIGHT_SEMILIGHT = 350,
  WEIGHT_BOOK = 380,
  WEIGHT_NORMAL = 400,
  WEIGHT_MEDIUM = 500,
  WEIGHT_SEMIBOLD = 600,
  WEIGHT_BOLD = 700,
  WEIGHT_ULTRABOLD = 800,
  WEIGHT_HEAVY = 900,
  WEIGHT_ULTRAHEAVY = 1000
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::Weight> : public Glib::Value_Enum<Pango::Weight>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{

/** 
 *  @var FontMask FONT_MASK_FAMILY
 * The font family is specified.
 * 
 *  @var FontMask FONT_MASK_STYLE
 * The font style is specified.
 * 
 *  @var FontMask FONT_MASK_VARIANT
 * The font variant is specified.
 * 
 *  @var FontMask FONT_MASK_WEIGHT
 * The font weight is specified.
 * 
 *  @var FontMask FONT_MASK_STRETCH
 * The font stretch is specified.
 * 
 *  @var FontMask FONT_MASK_SIZE
 * The font size is specified.
 * 
 *  @var FontMask FONT_MASK_GRAVITY
 * The font gravity is specified (Since: 1.16.).
 * 
 *  @var FontMask FONT_MASK_VARIATIONS
 * OpenType font variations are specified (Since: 1.42).
 * 
 *  @enum FontMask
 * 
 * The bits in a Pango::FontMask correspond to fields in a
 * Pango::FontDescription that have been set.
 *
 * @ingroup pangommEnums
 * @par Bitwise operators:
 * <tt>%FontMask operator|(FontMask, FontMask)</tt><br>
 * <tt>%FontMask operator&(FontMask, FontMask)</tt><br>
 * <tt>%FontMask operator^(FontMask, FontMask)</tt><br>
 * <tt>%FontMask operator~(FontMask)</tt><br>
 * <tt>%FontMask& operator|=(FontMask&, FontMask)</tt><br>
 * <tt>%FontMask& operator&=(FontMask&, FontMask)</tt><br>
 * <tt>%FontMask& operator^=(FontMask&, FontMask)</tt><br>
 */
enum FontMask
{
  FONT_MASK_FAMILY = 1 << 0,
  FONT_MASK_STYLE = 1 << 1,
  FONT_MASK_VARIANT = 1 << 2,
  FONT_MASK_WEIGHT = 1 << 3,
  FONT_MASK_STRETCH = 1 << 4,
  FONT_MASK_SIZE = 1 << 5,
  FONT_MASK_GRAVITY = 1 << 6,
  FONT_MASK_VARIATIONS = 1 << 7
};

/** @ingroup pangommEnums */
inline FontMask operator|(FontMask lhs, FontMask rhs)
  { return static_cast<FontMask>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup pangommEnums */
inline FontMask operator&(FontMask lhs, FontMask rhs)
  { return static_cast<FontMask>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup pangommEnums */
inline FontMask operator^(FontMask lhs, FontMask rhs)
  { return static_cast<FontMask>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup pangommEnums */
inline FontMask operator~(FontMask flags)
  { return static_cast<FontMask>(~static_cast<unsigned>(flags)); }

/** @ingroup pangommEnums */
inline FontMask& operator|=(FontMask& lhs, FontMask rhs)
  { return (lhs = static_cast<FontMask>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup pangommEnums */
inline FontMask& operator&=(FontMask& lhs, FontMask rhs)
  { return (lhs = static_cast<FontMask>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup pangommEnums */
inline FontMask& operator^=(FontMask& lhs, FontMask rhs)
  { return (lhs = static_cast<FontMask>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::FontMask> : public Glib::Value_Flags<Pango::FontMask>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{

/** 
 *  @var Gravity GRAVITY_SOUTH
 * Glyphs stand upright (default).
 * 
 *  @var Gravity GRAVITY_EAST
 * Glyphs are rotated 90 degrees clockwise.
 * 
 *  @var Gravity GRAVITY_NORTH
 * Glyphs are upside-down.
 * 
 *  @var Gravity GRAVITY_WEST
 * Glyphs are rotated 90 degrees counter-clockwise.
 * 
 *  @var Gravity GRAVITY_AUTO
 * Gravity is resolved from the context matrix.
 * 
 *  @enum Gravity
 * 
 * The Pango::Gravity type represents the orientation of glyphs in a segment
 * of text.  This is useful when rendering vertical text layouts.  In
 * those situations, the layout is rotated using a non-identity PangoMatrix,
 * and then glyph orientation is controlled using Pango::Gravity.
 * Not every value in this enumeration makes sense for every usage of
 * Pango::Gravity; for example, Pango::GRAVITY_AUTO only can be passed to
 * Pango::Context::set_base_gravity() and can only be returned by
 * Pango::Context::get_base_gravity().
 * 
 * See also: Pango::GravityHint
 * 
 * @newin{1,16}
 *
 * @ingroup pangommEnums
 */
enum Gravity
{
  GRAVITY_SOUTH,
  GRAVITY_EAST,
  GRAVITY_NORTH,
  GRAVITY_WEST,
  GRAVITY_AUTO
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::Gravity> : public Glib::Value_Enum<Pango::Gravity>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{


/** A Pango::FontDescription represents the description of an ideal font.
 * It is used both to list what fonts are available on the system and also for specifying the characteristics of a font to load.
 */
class PANGOMM_API FontDescription
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = FontDescription;
  using BaseObjectType = PangoFontDescription;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;

  FontDescription();

  explicit FontDescription(PangoFontDescription* gobject, bool make_a_copy = true);

  FontDescription(const FontDescription& other);
  FontDescription& operator=(const FontDescription& other);

  FontDescription(FontDescription&& other) noexcept;
  FontDescription& operator=(FontDescription&& other) noexcept;

  ~FontDescription() noexcept;

  void swap(FontDescription& other) noexcept;

  ///Provides access to the underlying C instance.
  PangoFontDescription*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const PangoFontDescription* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  PangoFontDescription* gobj_copy() const;

protected:
  PangoFontDescription* gobject_;

private:

  
  /* These functions are dangerous! The first casts the "const" from the parameter away
   * copying the pointer and keep it hanging around.
   * So desc.set_family_static("some_family") would lead to a segfault.
   * The latter makes a shallow copy of the parameter's "family" data member.
   * So if the FontDescription you passed in dies, a pointer to its (deleted)
   * family data member still hangs around!
   * This is why we can't wrap these functions!
   */
  

public:
  /** Constructs a font description from a string representation.
   * @a font_name must have the form
   * "[FAMILY-LIST] [STYLE-OPTIONS] [SIZE]", where FAMILY-LIST is a comma separated
   * list of families optionally terminated by a comma, STYLE_OPTIONS is a whitespace
   * separated list of words where each WORD describes one of style, variant, weight,
   * or stretch, and SIZE is an decimal number (size in points). Any one of the
   * options may be absent. If FAMILY-LIST is absent, then the family_name field
   * of the resulting font description will be initialized to 0. If STYLE-OPTIONS
   * is missing, then all style options will be set to the default values. If SIZE
   * is missing, the size in the resulting font description will be set to 0.
   * @param font_name String representation of a font description.
   */
  explicit FontDescription(const Glib::ustring& font_name);

  
  /** Computes a hash of a Pango::FontDescription structure suitable
   * to be used, for example, as an argument to Glib::hash_table_new().
   * The hash value is independent of @a desc->mask.
   * 
   * @return The hash value.
   */
  guint hash() const;
  
  /** Sets the family name field of a font description. The family
   * name represents a family of related font styles, and will
   * resolve to a particular Pango::FontFamily. In some uses of
   * Pango::FontDescription, it is also possible to use a comma
   * separated list of family names for this field.
   * 
   * @param family A string representing the family name.
   */
  void set_family(const Glib::ustring& family);
  
  /** Gets the family name field of a font description. See
   * set_family().
   * 
   * @return The family name field for the font
   * description, or <tt>nullptr</tt> if not previously set.  This
   * has the same life-time as the font description itself
   * and should not be freed.
   */
  Glib::ustring get_family() const;
  
  /** Sets the style field of a Pango::FontDescription. The
   * Pango::Style enumeration describes whether the font is slanted and
   * the manner in which it is slanted; it can be either
   * Pango::STYLE_NORMAL, Pango::STYLE_ITALIC, or Pango::STYLE_OBLIQUE.
   * Most fonts will either have a italic style or an oblique
   * style, but not both, and font matching in Pango will
   * match italic specifications with oblique fonts and vice-versa
   * if an exact match is not found.
   * 
   * @param style The style for the font description.
   */
  void set_style(Style style);
  
  /** Gets the style field of a Pango::FontDescription. See
   * set_style().
   * 
   * @return The style field for the font description.
   * Use get_set_fields() to find out if
   * the field was explicitly set or not.
   */
  Style get_style() const;
  
  /** Sets the variant field of a font description. The Pango::Variant
   * can either be Pango::VARIANT_NORMAL or Pango::VARIANT_SMALL_CAPS.
   * 
   * @param variant The variant type for the font description.
   */
  void set_variant(Variant variant);
  
  /** Gets the variant field of a Pango::FontDescription. See
   * set_variant().
   * 
   * @return The variant field for the font description. Use
   * get_set_fields() to find out if
   * the field was explicitly set or not.
   */
  Variant get_variant() const;
  
  /** Sets the weight field of a font description. The weight field
   * specifies how bold or light the font should be. In addition
   * to the values of the Pango::Weight enumeration, other intermediate
   * numeric values are possible.
   * 
   * @param weight The weight for the font description.
   */
  void set_weight(Weight weight);
  
  /** Gets the weight field of a font description. See
   * set_weight().
   * 
   * @return The weight field for the font description. Use
   * get_set_fields() to find out if
   * the field was explicitly set or not.
   */
  Weight get_weight() const;
  
  /** Sets the stretch field of a font description. The stretch field
   * specifies how narrow or wide the font should be.
   * 
   * @param stretch The stretch for the font description.
   */
  void set_stretch(Stretch stretch);
  
  /** Gets the stretch field of a font description.
   * See set_stretch().
   * 
   * @return The stretch field for the font description. Use
   * get_set_fields() to find out if
   * the field was explicitly set or not.
   */
  Stretch get_stretch() const;
  
  /** Sets the size field of a font description in fractional points. This is mutually
   * exclusive with set_absolute_size().
   * 
   * @param size The size of the font in points, scaled by PANGO_SCALE. (That is,
   * a @a size value of 10 * PANGO_SCALE is a 10 point font. The conversion
   * factor between points and device units depends on system configuration
   * and the output device. For screen display, a logical DPI of 96 is
   * common, in which case a 10 point font corresponds to a 10 * (96 / 72) = 13.3
   * pixel font. Use set_absolute_size() if you need
   * a particular size in device units.
   */
  void set_size(int size);
  
  /** Gets the size field of a font description.
   * See set_size().
   * 
   * @return The size field for the font description in points or device units.
   * You must call get_size_is_absolute()
   * to find out which is the case. Returns 0 if the size field has not
   * previously been set or it has been set to 0 explicitly.
   * Use get_set_fields() to
   * find out if the field was explicitly set or not.
   */
  int get_size() const;
  
  /** Sets the size field of a font description, in device units. This is mutually
   * exclusive with set_size() which sets the font size
   * in points.
   * 
   * @newin{1,8}
   * 
   * @param size The new size, in Pango units. There are Pango::SCALE Pango units in one
   * device unit. For an output backend where a device unit is a pixel, a @a size
   * value of 10 * PANGO_SCALE gives a 10 pixel font.
   */
  void set_absolute_size(double size);
  
  /** Determines whether the size of the font is in points (not absolute) or device units (absolute).
   * See set_size() and set_absolute_size().
   * 
   * @newin{1,8}
   * 
   * @return Whether the size for the font description is in
   * points or device units.  Use get_set_fields() to
   * find out if the size field of the font description was explicitly set or not.
   */
  bool get_size_is_absolute() const;
  
  /** Sets the gravity field of a font description. The gravity field
   * specifies how the glyphs should be rotated.  If @a gravity is
   * Pango::GRAVITY_AUTO, this actually unsets the gravity mask on
   * the font description.
   * 
   * This function is seldom useful to the user.  Gravity should normally
   * be set on a Pango::Context.
   * 
   * @newin{1,16}
   * 
   * @param gravity The gravity for the font description.
   */
  void set_gravity(Gravity gravity);
  
  /** Gets the gravity field of a font description. See
   * set_gravity().
   * 
   * @newin{1,16}
   * 
   * @return The gravity field for the font description. Use
   * get_set_fields() to find out if
   * the field was explicitly set or not.
   */
  Gravity get_gravity() const;
  
  
  /** Sets the variations field of a font description. OpenType
   * font variations allow to select a font instance by specifying
   * values for a number of axes, such as width or weight.
   * 
   * The format of the variations string is AXIS1=VALUE,AXIS2=VALUE...,
   * with each AXIS a 4 character tag that identifies a font axis,
   * and each VALUE a floating point number. Unknown axes are ignored,
   * and values are clamped to their allowed range.
   * 
   * Pango does not currently have a way to find supported axes of
   * a font. Both harfbuzz or freetype have API for this.
   * 
   * @newin{1,42}
   * 
   * @param settings A string representing the variations.
   */
  void set_variations(const Glib::ustring& settings);
  
  /** Gets the variations field of a font description. See
   * set_variations().
   * 
   * @newin{1,42}
   * 
   * @return The varitions field for the font
   * description, or <tt>nullptr</tt> if not previously set.  This
   * has the same life-time as the font description itself
   * and should not be freed.
   */
  Glib::ustring get_variations() const;
  
  /** Determines which fields in a font description have been set.
   * 
   * @return A bitmask with bits set corresponding to the
   * fields in @a desc that have been set.
   */
  FontMask get_set_fields() const;
  
  /** Unsets some of the fields in a Pango::FontDescription.  The unset
   * fields will get back to their default values.
   * 
   * @param to_unset Bitmask of fields in the @a desc to unset.
   */
  void unset_fields(FontMask to_unset);
  
  /** Merges the fields that are set in @a desc_to_merge into the fields in
   *  @a desc.  If @a replace_existing is <tt>false</tt>, only fields in @a desc that
   * are not already set are affected. If <tt>true</tt>, then fields that are
   * already set will be replaced as well.
   * 
   * If @a desc_to_merge is <tt>nullptr</tt>, this function performs nothing.
   * 
   * @param desc_to_merge The Pango::FontDescription to merge from, or <tt>nullptr</tt>.
   * @param replace_existing If <tt>true</tt>, replace fields in @a desc with the
   * corresponding values from @a desc_to_merge, even if they
   * are already exist.
   */
  void merge(const FontDescription& desc_to_merge, bool replace_existing);
  
  /** Determines if the style attributes of @a new_match are a closer match
   * for @a desc than those of @a old_match are, or if @a old_match is <tt>nullptr</tt>,
   * determines if @a new_match is a match at all.
   * Approximate matching is done for
   * weight and style; other style attributes must match exactly.
   * Style attributes are all attributes other than family and size-related
   * attributes.  Approximate matching for style considers PANGO_STYLE_OBLIQUE
   * and PANGO_STYLE_ITALIC as matches, but not as good a match as when the
   * styles are equal.
   * 
   * Note that @a old_match must match @a desc.
   * 
   * @param old_match A Pango::FontDescription, or <tt>nullptr</tt>.
   * @param new_match A Pango::FontDescription.
   * @return <tt>true</tt> if @a new_match is a better match.
   */
  bool better_match(const FontDescription& old_match, const FontDescription& new_match) const;
  
  /** Creates a string representation of a font description. See
   * from_string() for a description of the
   * format of the string representation. The family list in the
   * string description will only have a terminating comma if the
   * last word of the list is a valid style option.
   * 
   * @return The string.
   */
  Glib::ustring to_string() const;
  
  /** Creates a filename representation of a font description. The
   * filename is identical to the result from calling
   * to_string(), but with underscores instead of
   * characters that are untypical in filenames, and in lower case only.
   * 
   * @return The filename.
   */
  Glib::ustring to_filename() const;


};

} //namespace Pango


namespace Pango
{

/** @relates Pango::FontDescription
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
PANGOMM_API
bool operator==(const FontDescription& lhs, const FontDescription& rhs);

/** @relates Pango::FontDescription
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
PANGOMM_API
bool operator!=(const FontDescription& lhs, const FontDescription& rhs);


} // namespace Pango


namespace Pango
{

/** @relates Pango::FontDescription
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(FontDescription& lhs, FontDescription& rhs) noexcept
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
 * @relates Pango::FontDescription
 */
PANGOMM_API
Pango::FontDescription wrap(PangoFontDescription* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class PANGOMM_API Value<Pango::FontDescription> : public Glib::Value_Boxed<Pango::FontDescription>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _PANGOMM_FONTDESCRIPTION_H */

