/*
 * Localized Keys for Danish
 *
 * This file was generated from data with the following license:
 *
 * Copyright (c) 2025 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define DK_ESCAPE_CHARACTER                                                    \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

#define DK_FILE_SEPARATOR                                                      \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))

#define DK_GROUP_SEPARATOR                                                     \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

#define DK_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define DK_EXCLAMATION                                                         \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define DK_EXCL (DK_EXCLAMATION)

/* " */
#define DK_DOUBLE_QUOTES                                                       \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define DK_DQT (DK_DOUBLE_QUOTES)

/* # */
#define DK_HASH                                                                \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define DK_POUND (DK_HASH)

/* $ */
#define DK_DOLLAR                                                              \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define DK_DLLR (DK_DOLLAR)

/* % */
#define DK_PERCENT                                                             \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define DK_PRCNT (DK_PERCENT)

/* & */
#define DK_AMPERSAND                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))
#define DK_AMPS (DK_AMPERSAND)

/* ' */
#define DK_SINGLE_QUOTE                                                        \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))
#define DK_SQT (DK_SINGLE_QUOTE)
#define DK_APOSTROPHE (DK_SINGLE_QUOTE)
#define DK_APOS (DK_SINGLE_QUOTE)

/* ( */
#define DK_LEFT_PARENTHESIS                                                    \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define DK_LPAR (DK_LEFT_PARENTHESIS)

/* ) */
#define DK_RIGHT_PARENTHESIS                                                   \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define DK_RPAR (DK_RIGHT_PARENTHESIS)

/* * */
#define DK_ASTERISK                                                            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define DK_ASTRK (DK_ASTERISK)
#define DK_STAR (DK_ASTERISK)

/* + */
#define DK_PLUS                                                                \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))

/* , */
#define DK_COMMA                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define DK_MINUS                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))

/* . */
#define DK_PERIOD                                                              \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define DK_DOT (DK_PERIOD)

/* / */
#define DK_SLASH                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define DK_FSLH (DK_SLASH)

/* 0 */
#define DK_N0                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define DK_N1                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define DK_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define DK_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define DK_N4                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define DK_N5                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define DK_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define DK_N7                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define DK_N8                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define DK_N9                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* : */
#define DK_COLON                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* ; */
#define DK_SEMICOLON                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define DK_SEMI (DK_SEMICOLON)

/* < */
#define DK_LESS_THAN                                                           \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define DK_LT (DK_LESS_THAN)

/* = */
#define DK_EQUAL                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* > */
#define DK_GREATER_THAN                                                        \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define DK_GT (DK_GREATER_THAN)

/* ? */
#define DK_QUESTION                                                            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define DK_QMARK (DK_QUESTION)

/* @ */
#define DK_AT_SIGN                                                             \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define DK_AT (DK_AT_SIGN)

/* [ */
#define DK_LEFT_BRACKET                                                        \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define DK_LBKT (DK_LEFT_BRACKET)

/* \ */
#define DK_BACKSLASH                                                           \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define DK_BSLH (DK_BACKSLASH)

/* ] */
#define DK_RIGHT_BRACKET                                                       \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define DK_RBKT (DK_RIGHT_BRACKET)

/* ^ */
#define DK_CARET                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

/* _ */
#define DK_UNDERSCORE                                                          \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))
#define DK_UNDER (DK_UNDERSCORE)

/* ` */
#define DK_GRAVE                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* a */
#define DK_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* b */
#define DK_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define DK_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define DK_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define DK_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define DK_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define DK_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define DK_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define DK_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define DK_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define DK_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define DK_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define DK_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* n */
#define DK_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define DK_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define DK_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define DK_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* r */
#define DK_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define DK_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define DK_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define DK_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define DK_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define DK_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* x */
#define DK_X (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* y */
#define DK_Y (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* z */
#define DK_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* { */
#define DK_LEFT_BRACE                                                          \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define DK_LBRC (DK_LEFT_BRACE)

/* | */
#define DK_PIPE                                                                \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* } */
#define DK_RIGHT_BRACE                                                         \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define DK_RBRC (DK_RIGHT_BRACE)

/* ~ */
#define DK_TILDE                                                               \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

/* £ */
#define DK_POUND_SIGN                                                          \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* ¤ */
#define DK_CURRENCY_SIGN                                                       \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define DK_CURREN (DK_CURRENCY_SIGN)

/* § */
#define DK_SECTION                                                             \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))
#define DK_SECT (DK_SECTION)

/* ¨ */
#define DK_UMLAUT                                                              \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))

/* ´ */
#define DK_ACUTE                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* µ */
#define DK_MU (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M)))
#define DK_MICRO (DK_MU)

/* ½ */
#define DK_ONE_HALF                                                            \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))
#define DK_FRAC_1_2 (DK_ONE_HALF)

/* å */
#define DK_A_RING                                                              \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* æ */
#define DK_AE                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* ø */
#define DK_O_SLASH                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* € */
#define DK_EURO                                                                \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
