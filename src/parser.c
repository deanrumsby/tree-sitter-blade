#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  sym_entity = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  sym__escaped_echo_statement_start = 16,
  sym__escaped_echo_statement_end = 17,
  sym__unescaped_echo_statement_start = 18,
  sym__unescaped_echo_statement_end = 19,
  sym__start_tag_name = 20,
  sym__script_start_tag_name = 21,
  sym__style_start_tag_name = 22,
  sym__end_tag_name = 23,
  sym_erroneous_end_tag_name = 24,
  sym__implicit_end_tag = 25,
  sym_raw_text = 26,
  sym_text = 27,
  sym_comment = 28,
  sym_document = 29,
  sym_doctype = 30,
  sym_echo_statement = 31,
  sym_escaped_echo_statement = 32,
  sym_unescaped_echo_statement = 33,
  sym__node = 34,
  sym_element = 35,
  sym_script_element = 36,
  sym_style_element = 37,
  sym_start_tag = 38,
  sym_script_start_tag = 39,
  sym_style_start_tag = 40,
  sym_self_closing_tag = 41,
  sym_end_tag = 42,
  sym_erroneous_end_tag = 43,
  sym_attribute = 44,
  sym_quoted_attribute_value = 45,
  aux_sym_document_repeat1 = 46,
  aux_sym_start_tag_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym__escaped_echo_statement_start] = "_escaped_echo_statement_start",
  [sym__escaped_echo_statement_end] = "_escaped_echo_statement_end",
  [sym__unescaped_echo_statement_start] = "_unescaped_echo_statement_start",
  [sym__unescaped_echo_statement_end] = "_unescaped_echo_statement_end",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym_echo_statement] = "echo_statement",
  [sym_escaped_echo_statement] = "escaped_echo_statement",
  [sym_unescaped_echo_statement] = "unescaped_echo_statement",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym__escaped_echo_statement_start] = sym__escaped_echo_statement_start,
  [sym__escaped_echo_statement_end] = sym__escaped_echo_statement_end,
  [sym__unescaped_echo_statement_start] = sym__unescaped_echo_statement_start,
  [sym__unescaped_echo_statement_end] = sym__unescaped_echo_statement_end,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym_echo_statement] = sym_echo_statement,
  [sym_escaped_echo_statement] = sym_escaped_echo_statement,
  [sym_unescaped_echo_statement] = sym_unescaped_echo_statement,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym__escaped_echo_statement_start] = {
    .visible = false,
    .named = true,
  },
  [sym__escaped_echo_statement_end] = {
    .visible = false,
    .named = true,
  },
  [sym__unescaped_echo_statement_start] = {
    .visible = false,
    .named = true,
  },
  [sym__unescaped_echo_statement_end] = {
    .visible = false,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 13,
  [20] = 20,
  [21] = 10,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 14,
  [27] = 27,
  [28] = 28,
  [29] = 15,
  [30] = 27,
  [31] = 25,
  [32] = 16,
  [33] = 33,
  [34] = 24,
  [35] = 17,
  [36] = 18,
  [37] = 28,
  [38] = 22,
  [39] = 9,
  [40] = 23,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 41,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 43,
  [54] = 54,
  [55] = 48,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 56,
  [62] = 58,
  [63] = 59,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 60,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 64,
  [75] = 70,
  [76] = 76,
  [77] = 77,
  [78] = 72,
  [79] = 54,
  [80] = 57,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 86,
  [90] = 90,
  [91] = 88,
  [92] = 81,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 94,
  [98] = 83,
  [99] = 99,
  [100] = 100,
  [101] = 95,
  [102] = 100,
  [103] = 87,
  [104] = 90,
  [105] = 99,
  [106] = 96,
  [107] = 93,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '"', 71,
        '&', 3,
        '\'', 68,
        '/', 6,
        '<', 22,
        '=', 25,
        '>', 20,
        'D', 9,
        'd', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 14:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(19);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 5, .external_lex_state = 4},
  [42] = {.lex_state = 5, .external_lex_state = 4},
  [43] = {.lex_state = 5, .external_lex_state = 4},
  [44] = {.lex_state = 5, .external_lex_state = 4},
  [45] = {.lex_state = 5, .external_lex_state = 4},
  [46] = {.lex_state = 5, .external_lex_state = 5},
  [47] = {.lex_state = 5, .external_lex_state = 5},
  [48] = {.lex_state = 5, .external_lex_state = 4},
  [49] = {.lex_state = 1, .external_lex_state = 5},
  [50] = {.lex_state = 1, .external_lex_state = 5},
  [51] = {.lex_state = 5, .external_lex_state = 5},
  [52] = {.lex_state = 5, .external_lex_state = 5},
  [53] = {.lex_state = 5, .external_lex_state = 5},
  [54] = {.lex_state = 5, .external_lex_state = 4},
  [55] = {.lex_state = 5, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 6},
  [57] = {.lex_state = 5, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 6},
  [59] = {.lex_state = 0, .external_lex_state = 7},
  [60] = {.lex_state = 5, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 0, .external_lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 7},
  [64] = {.lex_state = 4, .external_lex_state = 5},
  [65] = {.lex_state = 0, .external_lex_state = 6},
  [66] = {.lex_state = 0, .external_lex_state = 6},
  [67] = {.lex_state = 5, .external_lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 5},
  [69] = {.lex_state = 0, .external_lex_state = 5},
  [70] = {.lex_state = 2, .external_lex_state = 5},
  [71] = {.lex_state = 0, .external_lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 8},
  [73] = {.lex_state = 0, .external_lex_state = 5},
  [74] = {.lex_state = 4, .external_lex_state = 5},
  [75] = {.lex_state = 2, .external_lex_state = 5},
  [76] = {.lex_state = 0, .external_lex_state = 6},
  [77] = {.lex_state = 0, .external_lex_state = 6},
  [78] = {.lex_state = 0, .external_lex_state = 8},
  [79] = {.lex_state = 5, .external_lex_state = 5},
  [80] = {.lex_state = 5, .external_lex_state = 5},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 0, .external_lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 5},
  [84] = {.lex_state = 0, .external_lex_state = 9},
  [85] = {.lex_state = 0, .external_lex_state = 9},
  [86] = {.lex_state = 0, .external_lex_state = 10},
  [87] = {.lex_state = 0, .external_lex_state = 11},
  [88] = {.lex_state = 0, .external_lex_state = 5},
  [89] = {.lex_state = 0, .external_lex_state = 10},
  [90] = {.lex_state = 14, .external_lex_state = 5},
  [91] = {.lex_state = 0, .external_lex_state = 5},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 5},
  [95] = {.lex_state = 0, .external_lex_state = 6},
  [96] = {.lex_state = 0, .external_lex_state = 12},
  [97] = {.lex_state = 0, .external_lex_state = 5},
  [98] = {.lex_state = 0, .external_lex_state = 5},
  [99] = {.lex_state = 0, .external_lex_state = 5},
  [100] = {.lex_state = 0, .external_lex_state = 6},
  [101] = {.lex_state = 0, .external_lex_state = 6},
  [102] = {.lex_state = 0, .external_lex_state = 6},
  [103] = {.lex_state = 0, .external_lex_state = 11},
  [104] = {.lex_state = 14, .external_lex_state = 5},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 12},
  [107] = {.lex_state = 0, .external_lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escaped_echo_statement_start] = ACTIONS(1),
    [sym__escaped_echo_statement_end] = ACTIONS(1),
    [sym__unescaped_echo_statement_start] = ACTIONS(1),
    [sym__unescaped_echo_statement_end] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(82),
    [sym_doctype] = STATE(8),
    [sym_echo_statement] = STATE(8),
    [sym_escaped_echo_statement] = STATE(11),
    [sym_unescaped_echo_statement] = STATE(11),
    [sym__node] = STATE(8),
    [sym_element] = STATE(8),
    [sym_script_element] = STATE(8),
    [sym_style_element] = STATE(8),
    [sym_start_tag] = STATE(2),
    [sym_script_start_tag] = STATE(56),
    [sym_style_start_tag] = STATE(58),
    [sym_self_closing_tag] = STATE(14),
    [sym_erroneous_end_tag] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym__escaped_echo_statement_start] = ACTIONS(15),
    [sym__unescaped_echo_statement_start] = ACTIONS(17),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(29), 1,
      sym__unescaped_echo_statement_start,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(22), 1,
      sym_end_tag,
    STATE(26), 1,
      sym_self_closing_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(62), 1,
      sym_style_start_tag,
    ACTIONS(25), 2,
      sym_text,
      sym_entity,
    STATE(12), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(5), 8,
      sym_doctype,
      sym_echo_statement,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [55] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(29), 1,
      sym__unescaped_echo_statement_start,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(21), 1,
      sym_end_tag,
    STATE(26), 1,
      sym_self_closing_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(62), 1,
      sym_style_start_tag,
    ACTIONS(35), 2,
      sym_text,
      sym_entity,
    STATE(12), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(6), 8,
      sym_doctype,
      sym_echo_statement,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [110] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(29), 1,
      sym__unescaped_echo_statement_start,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(26), 1,
      sym_self_closing_tag,
    STATE(38), 1,
      sym_end_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(62), 1,
      sym_style_start_tag,
    ACTIONS(39), 2,
      sym_text,
      sym_entity,
    STATE(12), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(3), 8,
      sym_doctype,
      sym_echo_statement,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [165] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(29), 1,
      sym__unescaped_echo_statement_start,
    ACTIONS(43), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_end_tag,
    STATE(26), 1,
      sym_self_closing_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(62), 1,
      sym_style_start_tag,
    ACTIONS(35), 2,
      sym_text,
      sym_entity,
    STATE(12), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(6), 8,
      sym_doctype,
      sym_echo_statement,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [220] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LT_BANG,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(57), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(60), 1,
      sym__unescaped_echo_statement_start,
    ACTIONS(63), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(26), 1,
      sym_self_closing_tag,
    STATE(61), 1,
      sym_script_start_tag,
    STATE(62), 1,
      sym_style_start_tag,
    ACTIONS(54), 2,
      sym_text,
      sym_entity,
    STATE(12), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(6), 8,
      sym_doctype,
      sym_echo_statement,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [272] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    ACTIONS(77), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(80), 1,
      sym__unescaped_echo_statement_start,
    STATE(2), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_script_start_tag,
    STATE(58), 1,
      sym_style_start_tag,
    ACTIONS(74), 2,
      sym_text,
      sym_entity,
    STATE(11), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(7), 8,
      sym_doctype,
      sym_echo_statement,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [324] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(15), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(17), 1,
      sym__unescaped_echo_statement_start,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_script_start_tag,
    STATE(58), 1,
      sym_style_start_tag,
    ACTIONS(85), 2,
      sym_text,
      sym_entity,
    STATE(11), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(7), 8,
      sym_doctype,
      sym_echo_statement,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(87), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(91), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(95), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(95), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(99), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(103), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(107), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(111), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(115), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(119), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(99), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(123), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(91), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(127), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(131), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LT,
    ACTIONS(135), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(139), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(103), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(143), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(147), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(107), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(143), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(139), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(111), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(151), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LT,
    ACTIONS(135), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(115), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(119), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(147), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(127), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(87), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(131), 7,
      sym__escaped_echo_statement_start,
      sym__unescaped_echo_statement_start,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(157), 1,
      anon_sym_SLASH_GT,
    ACTIONS(159), 1,
      sym_attribute_name,
    STATE(43), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      anon_sym_GT,
    ACTIONS(163), 1,
      anon_sym_SLASH_GT,
    STATE(45), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_attribute_name,
    ACTIONS(165), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(43), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      anon_sym_GT,
    ACTIONS(170), 1,
      anon_sym_SLASH_GT,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_GT,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(172), 1,
      anon_sym_SLASH_GT,
    STATE(43), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      sym_attribute_name,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_attribute_name,
    ACTIONS(178), 1,
      anon_sym_GT,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(180), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_attribute_value,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_quoted_attribute_value,
  [1027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_attribute_value,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_quoted_attribute_value,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_attribute_name,
    ACTIONS(196), 1,
      anon_sym_GT,
    STATE(46), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_attribute_name,
    ACTIONS(198), 1,
      anon_sym_GT,
    STATE(47), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_GT,
    ACTIONS(200), 1,
      sym_attribute_name,
    STATE(53), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(180), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    ACTIONS(209), 1,
      sym_raw_text,
    STATE(9), 1,
      sym_end_tag,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    ACTIONS(213), 1,
      sym_raw_text,
    STATE(28), 1,
      sym_end_tag,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym__start_tag_name,
    ACTIONS(217), 1,
      sym__script_start_tag_name,
    ACTIONS(219), 1,
      sym__style_start_tag_name,
  [1153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LT_SLASH,
    ACTIONS(225), 1,
      sym_raw_text,
    STATE(39), 1,
      sym_end_tag,
  [1175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LT_SLASH,
    ACTIONS(227), 1,
      sym_raw_text,
    STATE(37), 1,
      sym_end_tag,
  [1188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__script_start_tag_name,
    ACTIONS(219), 1,
      sym__style_start_tag_name,
    ACTIONS(229), 1,
      sym__start_tag_name,
  [1201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      aux_sym_quoted_attribute_value_token1,
  [1211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    STATE(32), 1,
      sym_end_tag,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LT_SLASH,
    STATE(16), 1,
      sym_end_tag,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_quoted_attribute_value_token2,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    STATE(35), 1,
      sym_end_tag,
  [1275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__end_tag_name,
    ACTIONS(243), 1,
      sym_erroneous_end_tag_name,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LT_SLASH,
    STATE(17), 1,
      sym_end_tag,
  [1295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    ACTIONS(247), 1,
      aux_sym_quoted_attribute_value_token1,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_quoted_attribute_value_token2,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(255), 1,
      sym__end_tag_name,
  [1341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_GT,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym__escaped_echo_statement_end,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__escaped_echo_statement_end,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__unescaped_echo_statement_end,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_erroneous_end_tag_name,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_GT,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__unescaped_echo_statement_end,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_doctype_token1,
  [1427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_GT,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_GT,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__doctype,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_GT,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_raw_text,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__end_tag_name,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_GT,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
  [1490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_raw_text,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_raw_text,
  [1504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_raw_text,
  [1511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_erroneous_end_tag_name,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym_doctype_token1,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
  [1532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__end_tag_name,
  [1539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 272,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 376,
  [SMALL_STATE(10)] = 392,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 424,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 456,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 488,
  [SMALL_STATE(17)] = 504,
  [SMALL_STATE(18)] = 520,
  [SMALL_STATE(19)] = 536,
  [SMALL_STATE(20)] = 552,
  [SMALL_STATE(21)] = 568,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 600,
  [SMALL_STATE(24)] = 616,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 648,
  [SMALL_STATE(27)] = 664,
  [SMALL_STATE(28)] = 680,
  [SMALL_STATE(29)] = 696,
  [SMALL_STATE(30)] = 712,
  [SMALL_STATE(31)] = 728,
  [SMALL_STATE(32)] = 744,
  [SMALL_STATE(33)] = 760,
  [SMALL_STATE(34)] = 776,
  [SMALL_STATE(35)] = 792,
  [SMALL_STATE(36)] = 808,
  [SMALL_STATE(37)] = 824,
  [SMALL_STATE(38)] = 840,
  [SMALL_STATE(39)] = 856,
  [SMALL_STATE(40)] = 872,
  [SMALL_STATE(41)] = 888,
  [SMALL_STATE(42)] = 905,
  [SMALL_STATE(43)] = 922,
  [SMALL_STATE(44)] = 937,
  [SMALL_STATE(45)] = 954,
  [SMALL_STATE(46)] = 971,
  [SMALL_STATE(47)] = 985,
  [SMALL_STATE(48)] = 999,
  [SMALL_STATE(49)] = 1011,
  [SMALL_STATE(50)] = 1027,
  [SMALL_STATE(51)] = 1043,
  [SMALL_STATE(52)] = 1057,
  [SMALL_STATE(53)] = 1071,
  [SMALL_STATE(54)] = 1085,
  [SMALL_STATE(55)] = 1094,
  [SMALL_STATE(56)] = 1105,
  [SMALL_STATE(57)] = 1118,
  [SMALL_STATE(58)] = 1127,
  [SMALL_STATE(59)] = 1140,
  [SMALL_STATE(60)] = 1153,
  [SMALL_STATE(61)] = 1162,
  [SMALL_STATE(62)] = 1175,
  [SMALL_STATE(63)] = 1188,
  [SMALL_STATE(64)] = 1201,
  [SMALL_STATE(65)] = 1211,
  [SMALL_STATE(66)] = 1219,
  [SMALL_STATE(67)] = 1227,
  [SMALL_STATE(68)] = 1235,
  [SMALL_STATE(69)] = 1245,
  [SMALL_STATE(70)] = 1255,
  [SMALL_STATE(71)] = 1265,
  [SMALL_STATE(72)] = 1275,
  [SMALL_STATE(73)] = 1285,
  [SMALL_STATE(74)] = 1295,
  [SMALL_STATE(75)] = 1305,
  [SMALL_STATE(76)] = 1315,
  [SMALL_STATE(77)] = 1323,
  [SMALL_STATE(78)] = 1331,
  [SMALL_STATE(79)] = 1341,
  [SMALL_STATE(80)] = 1349,
  [SMALL_STATE(81)] = 1357,
  [SMALL_STATE(82)] = 1364,
  [SMALL_STATE(83)] = 1371,
  [SMALL_STATE(84)] = 1378,
  [SMALL_STATE(85)] = 1385,
  [SMALL_STATE(86)] = 1392,
  [SMALL_STATE(87)] = 1399,
  [SMALL_STATE(88)] = 1406,
  [SMALL_STATE(89)] = 1413,
  [SMALL_STATE(90)] = 1420,
  [SMALL_STATE(91)] = 1427,
  [SMALL_STATE(92)] = 1434,
  [SMALL_STATE(93)] = 1441,
  [SMALL_STATE(94)] = 1448,
  [SMALL_STATE(95)] = 1455,
  [SMALL_STATE(96)] = 1462,
  [SMALL_STATE(97)] = 1469,
  [SMALL_STATE(98)] = 1476,
  [SMALL_STATE(99)] = 1483,
  [SMALL_STATE(100)] = 1490,
  [SMALL_STATE(101)] = 1497,
  [SMALL_STATE(102)] = 1504,
  [SMALL_STATE(103)] = 1511,
  [SMALL_STATE(104)] = 1518,
  [SMALL_STATE(105)] = 1525,
  [SMALL_STATE(106)] = 1532,
  [SMALL_STATE(107)] = 1539,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__escaped_echo_statement_start = 0,
  ts_external_token__escaped_echo_statement_end = 1,
  ts_external_token__unescaped_echo_statement_start = 2,
  ts_external_token__unescaped_echo_statement_end = 3,
  ts_external_token__start_tag_name = 4,
  ts_external_token__script_start_tag_name = 5,
  ts_external_token__style_start_tag_name = 6,
  ts_external_token__end_tag_name = 7,
  ts_external_token_erroneous_end_tag_name = 8,
  ts_external_token_SLASH_GT = 9,
  ts_external_token__implicit_end_tag = 10,
  ts_external_token_raw_text = 11,
  ts_external_token_text = 12,
  ts_external_token_comment = 13,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__escaped_echo_statement_start] = sym__escaped_echo_statement_start,
  [ts_external_token__escaped_echo_statement_end] = sym__escaped_echo_statement_end,
  [ts_external_token__unescaped_echo_statement_start] = sym__unescaped_echo_statement_start,
  [ts_external_token__unescaped_echo_statement_end] = sym__unescaped_echo_statement_end,
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_text] = sym_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__escaped_echo_statement_start] = true,
    [ts_external_token__escaped_echo_statement_end] = true,
    [ts_external_token__unescaped_echo_statement_start] = true,
    [ts_external_token__unescaped_echo_statement_end] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token__escaped_echo_statement_start] = true,
    [ts_external_token__unescaped_echo_statement_start] = true,
    [ts_external_token_text] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__escaped_echo_statement_start] = true,
    [ts_external_token__unescaped_echo_statement_start] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_text] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__escaped_echo_statement_end] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__unescaped_echo_statement_end] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [12] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_blade_external_scanner_create(void);
void tree_sitter_blade_external_scanner_destroy(void *);
bool tree_sitter_blade_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_blade_external_scanner_serialize(void *, char *);
void tree_sitter_blade_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_blade(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_blade_external_scanner_create,
      tree_sitter_blade_external_scanner_destroy,
      tree_sitter_blade_external_scanner_scan,
      tree_sitter_blade_external_scanner_serialize,
      tree_sitter_blade_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
