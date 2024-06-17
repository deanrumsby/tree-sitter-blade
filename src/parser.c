#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_text = 16,
  sym__escaped_echo_statement_start = 17,
  sym__escaped_echo_statement_end = 18,
  sym__not_escaped_echo_statement_start = 19,
  sym__not_escaped_echo_statement_end = 20,
  sym_php_text = 21,
  sym__start_tag_name = 22,
  sym__script_start_tag_name = 23,
  sym__style_start_tag_name = 24,
  sym__end_tag_name = 25,
  sym_erroneous_end_tag_name = 26,
  sym__implicit_end_tag = 27,
  sym_raw_text = 28,
  sym_comment = 29,
  sym_document = 30,
  sym_doctype = 31,
  sym_echo_statement = 32,
  sym_escaped_echo_statement = 33,
  sym_not_escaped_echo_statement = 34,
  sym__node = 35,
  sym_element = 36,
  sym_script_element = 37,
  sym_style_element = 38,
  sym_start_tag = 39,
  sym_script_start_tag = 40,
  sym_style_start_tag = 41,
  sym_self_closing_tag = 42,
  sym_end_tag = 43,
  sym_erroneous_end_tag = 44,
  sym_attribute = 45,
  sym_quoted_attribute_value = 46,
  aux_sym_document_repeat1 = 47,
  aux_sym_start_tag_repeat1 = 48,
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
  [sym_text] = "text",
  [sym__escaped_echo_statement_start] = "_escaped_echo_statement_start",
  [sym__escaped_echo_statement_end] = "_escaped_echo_statement_end",
  [sym__not_escaped_echo_statement_start] = "_not_escaped_echo_statement_start",
  [sym__not_escaped_echo_statement_end] = "_not_escaped_echo_statement_end",
  [sym_php_text] = "php_text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym_echo_statement] = "echo_statement",
  [sym_escaped_echo_statement] = "escaped_echo_statement",
  [sym_not_escaped_echo_statement] = "not_escaped_echo_statement",
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
  [sym_text] = sym_text,
  [sym__escaped_echo_statement_start] = sym__escaped_echo_statement_start,
  [sym__escaped_echo_statement_end] = sym__escaped_echo_statement_end,
  [sym__not_escaped_echo_statement_start] = sym__not_escaped_echo_statement_start,
  [sym__not_escaped_echo_statement_end] = sym__not_escaped_echo_statement_end,
  [sym_php_text] = sym_php_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym_echo_statement] = sym_echo_statement,
  [sym_escaped_echo_statement] = sym_escaped_echo_statement,
  [sym_not_escaped_echo_statement] = sym_not_escaped_echo_statement,
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
  [sym_text] = {
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
  [sym__not_escaped_echo_statement_start] = {
    .visible = false,
    .named = true,
  },
  [sym__not_escaped_echo_statement_end] = {
    .visible = false,
    .named = true,
  },
  [sym_php_text] = {
    .visible = true,
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
  [sym_not_escaped_echo_statement] = {
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 9,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 20,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 19,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 26,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 31,
  [38] = 25,
  [39] = 22,
  [40] = 23,
  [41] = 21,
  [42] = 36,
  [43] = 34,
  [44] = 35,
  [45] = 27,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 30,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 48,
  [56] = 56,
  [57] = 56,
  [58] = 46,
  [59] = 49,
  [60] = 52,
  [61] = 51,
  [62] = 47,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 65,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 70,
  [76] = 71,
  [77] = 77,
  [78] = 78,
  [79] = 77,
  [80] = 80,
  [81] = 81,
  [82] = 73,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 83,
  [97] = 91,
  [98] = 88,
  [99] = 99,
  [100] = 93,
  [101] = 86,
  [102] = 92,
  [103] = 89,
  [104] = 94,
  [105] = 84,
  [106] = 99,
  [107] = 95,
  [108] = 90,
  [109] = 85,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '"', 73,
        '&', 3,
        '\'', 70,
        '/', 6,
        '<', 24,
        '=', 27,
        '>', 22,
        'D', 9,
        'd', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
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
          lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 14:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(76);
      END_STATE();
    case 15:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '<') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(76);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 17, .external_lex_state = 2},
  [2] = {.lex_state = 17, .external_lex_state = 3},
  [3] = {.lex_state = 17, .external_lex_state = 3},
  [4] = {.lex_state = 17, .external_lex_state = 3},
  [5] = {.lex_state = 17, .external_lex_state = 3},
  [6] = {.lex_state = 17, .external_lex_state = 2},
  [7] = {.lex_state = 17, .external_lex_state = 2},
  [8] = {.lex_state = 17, .external_lex_state = 3},
  [9] = {.lex_state = 5, .external_lex_state = 4},
  [10] = {.lex_state = 5, .external_lex_state = 4},
  [11] = {.lex_state = 5, .external_lex_state = 4},
  [12] = {.lex_state = 5, .external_lex_state = 4},
  [13] = {.lex_state = 5, .external_lex_state = 4},
  [14] = {.lex_state = 5, .external_lex_state = 5},
  [15] = {.lex_state = 5, .external_lex_state = 5},
  [16] = {.lex_state = 5, .external_lex_state = 5},
  [17] = {.lex_state = 5, .external_lex_state = 5},
  [18] = {.lex_state = 5, .external_lex_state = 5},
  [19] = {.lex_state = 17, .external_lex_state = 3},
  [20] = {.lex_state = 17, .external_lex_state = 3},
  [21] = {.lex_state = 17, .external_lex_state = 3},
  [22] = {.lex_state = 17, .external_lex_state = 2},
  [23] = {.lex_state = 17, .external_lex_state = 3},
  [24] = {.lex_state = 17, .external_lex_state = 2},
  [25] = {.lex_state = 17, .external_lex_state = 3},
  [26] = {.lex_state = 17, .external_lex_state = 2},
  [27] = {.lex_state = 17, .external_lex_state = 2},
  [28] = {.lex_state = 17, .external_lex_state = 3},
  [29] = {.lex_state = 17, .external_lex_state = 2},
  [30] = {.lex_state = 5, .external_lex_state = 4},
  [31] = {.lex_state = 17, .external_lex_state = 2},
  [32] = {.lex_state = 17, .external_lex_state = 3},
  [33] = {.lex_state = 17, .external_lex_state = 3},
  [34] = {.lex_state = 17, .external_lex_state = 3},
  [35] = {.lex_state = 17, .external_lex_state = 2},
  [36] = {.lex_state = 17, .external_lex_state = 3},
  [37] = {.lex_state = 17, .external_lex_state = 3},
  [38] = {.lex_state = 17, .external_lex_state = 2},
  [39] = {.lex_state = 17, .external_lex_state = 3},
  [40] = {.lex_state = 17, .external_lex_state = 2},
  [41] = {.lex_state = 17, .external_lex_state = 2},
  [42] = {.lex_state = 17, .external_lex_state = 2},
  [43] = {.lex_state = 17, .external_lex_state = 2},
  [44] = {.lex_state = 17, .external_lex_state = 3},
  [45] = {.lex_state = 17, .external_lex_state = 3},
  [46] = {.lex_state = 5, .external_lex_state = 4},
  [47] = {.lex_state = 5, .external_lex_state = 4},
  [48] = {.lex_state = 5, .external_lex_state = 4},
  [49] = {.lex_state = 5, .external_lex_state = 4},
  [50] = {.lex_state = 5, .external_lex_state = 5},
  [51] = {.lex_state = 5, .external_lex_state = 4},
  [52] = {.lex_state = 5, .external_lex_state = 4},
  [53] = {.lex_state = 5, .external_lex_state = 4},
  [54] = {.lex_state = 5, .external_lex_state = 5},
  [55] = {.lex_state = 5, .external_lex_state = 5},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 5, .external_lex_state = 5},
  [59] = {.lex_state = 5, .external_lex_state = 5},
  [60] = {.lex_state = 5, .external_lex_state = 5},
  [61] = {.lex_state = 5, .external_lex_state = 5},
  [62] = {.lex_state = 5, .external_lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 6},
  [64] = {.lex_state = 0, .external_lex_state = 6},
  [65] = {.lex_state = 0, .external_lex_state = 7},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 0, .external_lex_state = 7},
  [68] = {.lex_state = 0, .external_lex_state = 7},
  [69] = {.lex_state = 0, .external_lex_state = 7},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 8},
  [72] = {.lex_state = 2, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 2, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 8},
  [77] = {.lex_state = 4, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 7},
  [79] = {.lex_state = 4, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 7},
  [81] = {.lex_state = 0, .external_lex_state = 7},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 9},
  [84] = {.lex_state = 0, .external_lex_state = 10},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 11},
  [90] = {.lex_state = 0, .external_lex_state = 10},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 15, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 12},
  [96] = {.lex_state = 0, .external_lex_state = 9},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 13},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 11},
  [104] = {.lex_state = 15, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 10},
  [106] = {.lex_state = 0, .external_lex_state = 13},
  [107] = {.lex_state = 0, .external_lex_state = 12},
  [108] = {.lex_state = 0, .external_lex_state = 10},
  [109] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym__not_escaped_echo_statement_start] = ACTIONS(1),
    [sym__not_escaped_echo_statement_end] = ACTIONS(1),
    [sym_php_text] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(87),
    [sym_doctype] = STATE(7),
    [sym__node] = STATE(7),
    [sym_element] = STATE(7),
    [sym_script_element] = STATE(7),
    [sym_style_element] = STATE(7),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(67),
    [sym_style_start_tag] = STATE(68),
    [sym_self_closing_tag] = STATE(27),
    [sym_erroneous_end_tag] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_end_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(21), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [44] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_end_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(25), 2,
      sym_entity,
      sym_text,
    STATE(2), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [88] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(35), 1,
      sym_end_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(31), 2,
      sym_entity,
      sym_text,
    STATE(5), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [132] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(40), 1,
      sym_end_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(21), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_LT_BANG,
    ACTIONS(42), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_tag,
    STATE(27), 1,
      sym_self_closing_tag,
    STATE(67), 1,
      sym_script_start_tag,
    STATE(68), 1,
      sym_style_start_tag,
    ACTIONS(48), 2,
      sym_entity,
      sym_text,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [217] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(27), 1,
      sym_self_closing_tag,
    STATE(67), 1,
      sym_script_start_tag,
    STATE(68), 1,
      sym_style_start_tag,
    ACTIONS(53), 2,
      sym_entity,
      sym_text,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [258] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__implicit_end_tag,
    ACTIONS(55), 1,
      anon_sym_LT_BANG,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_start_tag,
    STATE(45), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(66), 1,
      sym_script_start_tag,
    ACTIONS(64), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [299] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_SLASH_GT,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(73), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(75), 1,
      sym__not_escaped_echo_statement_start,
    STATE(48), 1,
      sym_echo_statement,
    STATE(11), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(47), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [329] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(73), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(75), 1,
      sym__not_escaped_echo_statement_start,
    ACTIONS(77), 1,
      anon_sym_GT,
    ACTIONS(79), 1,
      anon_sym_SLASH_GT,
    STATE(48), 1,
      sym_echo_statement,
    STATE(9), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(47), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [359] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_attribute_name,
    ACTIONS(86), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(89), 1,
      sym__not_escaped_echo_statement_start,
    STATE(48), 1,
      sym_echo_statement,
    ACTIONS(81), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(11), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(47), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [387] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(73), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(75), 1,
      sym__not_escaped_echo_statement_start,
    ACTIONS(77), 1,
      anon_sym_GT,
    ACTIONS(92), 1,
      anon_sym_SLASH_GT,
    STATE(48), 1,
      sym_echo_statement,
    STATE(13), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(47), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [417] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(73), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(75), 1,
      sym__not_escaped_echo_statement_start,
    ACTIONS(94), 1,
      anon_sym_SLASH_GT,
    STATE(48), 1,
      sym_echo_statement,
    STATE(11), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(47), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [447] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_GT,
    ACTIONS(98), 1,
      sym_attribute_name,
    ACTIONS(100), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(102), 1,
      sym__not_escaped_echo_statement_start,
    STATE(55), 1,
      sym_echo_statement,
    STATE(15), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(62), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [474] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_GT,
    ACTIONS(104), 1,
      sym_attribute_name,
    ACTIONS(107), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(110), 1,
      sym__not_escaped_echo_statement_start,
    STATE(55), 1,
      sym_echo_statement,
    STATE(15), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(62), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [501] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_attribute_name,
    ACTIONS(100), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(102), 1,
      sym__not_escaped_echo_statement_start,
    ACTIONS(113), 1,
      anon_sym_GT,
    STATE(55), 1,
      sym_echo_statement,
    STATE(18), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(62), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [528] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_attribute_name,
    ACTIONS(100), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(102), 1,
      sym__not_escaped_echo_statement_start,
    ACTIONS(115), 1,
      anon_sym_GT,
    STATE(55), 1,
      sym_echo_statement,
    STATE(14), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(62), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [555] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_attribute_name,
    ACTIONS(100), 1,
      sym__escaped_echo_statement_start,
    ACTIONS(102), 1,
      sym__not_escaped_echo_statement_start,
    ACTIONS(117), 1,
      anon_sym_GT,
    STATE(55), 1,
      sym_echo_statement,
    STATE(15), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    STATE(62), 2,
      sym_escaped_echo_statement,
      sym_not_escaped_echo_statement,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(119), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(123), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(127), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LT,
    ACTIONS(135), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(139), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(151), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_EQ,
    ACTIONS(155), 5,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LT,
    ACTIONS(163), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(143), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LT,
    ACTIONS(167), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LT,
    ACTIONS(175), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(159), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LT,
    ACTIONS(131), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LT,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LT,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LT,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(171), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LT,
    ACTIONS(147), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 5,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 5,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(155), 4,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      sym_attribute_name,
  [1017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 5,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 5,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 4,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      sym_attribute_name,
  [1060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 4,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      sym_attribute_name,
  [1070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_attribute_value,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_quoted_attribute_value,
  [1086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_attribute_value,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_quoted_attribute_value,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      sym_attribute_name,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      sym_attribute_name,
  [1122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 4,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      sym_attribute_name,
  [1132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 4,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      sym_attribute_name,
  [1142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      sym__escaped_echo_statement_start,
      sym__not_escaped_echo_statement_start,
      anon_sym_GT,
      sym_attribute_name,
  [1152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__start_tag_name,
    ACTIONS(207), 1,
      sym__script_start_tag_name,
    ACTIONS(209), 1,
      sym__style_start_tag_name,
  [1165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__script_start_tag_name,
    ACTIONS(209), 1,
      sym__style_start_tag_name,
    ACTIONS(211), 1,
      sym__start_tag_name,
  [1178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LT_SLASH,
    ACTIONS(215), 1,
      sym_raw_text,
    STATE(20), 1,
      sym_end_tag,
  [1191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LT_SLASH,
    ACTIONS(217), 1,
      sym_raw_text,
    STATE(39), 1,
      sym_end_tag,
  [1204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LT_SLASH,
    ACTIONS(221), 1,
      sym_raw_text,
    STATE(22), 1,
      sym_end_tag,
  [1217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LT_SLASH,
    ACTIONS(223), 1,
      sym_raw_text,
    STATE(24), 1,
      sym_end_tag,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LT_SLASH,
    STATE(21), 1,
      sym_end_tag,
  [1248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__end_tag_name,
    ACTIONS(229), 1,
      sym_erroneous_end_tag_name,
  [1258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym_quoted_attribute_value_token2,
  [1268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LT_SLASH,
    STATE(42), 1,
      sym_end_tag,
  [1278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym_quoted_attribute_value_token2,
  [1288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LT_SLASH,
    STATE(41), 1,
      sym_end_tag,
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(239), 1,
      sym__end_tag_name,
  [1308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      aux_sym_quoted_attribute_value_token1,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(245), 1,
      aux_sym_quoted_attribute_value_token1,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LT_SLASH,
    STATE(36), 1,
      sym_end_tag,
  [1362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__escaped_echo_statement_end,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_php_text,
  [1376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__doctype,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_GT,
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_erroneous_end_tag_name,
  [1411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_php_text,
  [1418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_GT,
  [1425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_GT,
  [1432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym_doctype_token1,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__not_escaped_echo_statement_end,
  [1453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__escaped_echo_statement_end,
  [1460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_GT,
  [1467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_GT,
  [1474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__end_tag_name,
  [1481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
  [1488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_GT,
  [1502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_erroneous_end_tag_name,
  [1509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_doctype_token1,
  [1516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_php_text,
  [1523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__end_tag_name,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym__not_escaped_echo_statement_end,
  [1537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_php_text,
  [1544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 447,
  [SMALL_STATE(15)] = 474,
  [SMALL_STATE(16)] = 501,
  [SMALL_STATE(17)] = 528,
  [SMALL_STATE(18)] = 555,
  [SMALL_STATE(19)] = 582,
  [SMALL_STATE(20)] = 596,
  [SMALL_STATE(21)] = 610,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 638,
  [SMALL_STATE(24)] = 652,
  [SMALL_STATE(25)] = 666,
  [SMALL_STATE(26)] = 680,
  [SMALL_STATE(27)] = 694,
  [SMALL_STATE(28)] = 708,
  [SMALL_STATE(29)] = 722,
  [SMALL_STATE(30)] = 736,
  [SMALL_STATE(31)] = 750,
  [SMALL_STATE(32)] = 764,
  [SMALL_STATE(33)] = 778,
  [SMALL_STATE(34)] = 792,
  [SMALL_STATE(35)] = 806,
  [SMALL_STATE(36)] = 820,
  [SMALL_STATE(37)] = 834,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 862,
  [SMALL_STATE(40)] = 876,
  [SMALL_STATE(41)] = 890,
  [SMALL_STATE(42)] = 904,
  [SMALL_STATE(43)] = 918,
  [SMALL_STATE(44)] = 932,
  [SMALL_STATE(45)] = 946,
  [SMALL_STATE(46)] = 960,
  [SMALL_STATE(47)] = 971,
  [SMALL_STATE(48)] = 982,
  [SMALL_STATE(49)] = 993,
  [SMALL_STATE(50)] = 1004,
  [SMALL_STATE(51)] = 1017,
  [SMALL_STATE(52)] = 1028,
  [SMALL_STATE(53)] = 1039,
  [SMALL_STATE(54)] = 1050,
  [SMALL_STATE(55)] = 1060,
  [SMALL_STATE(56)] = 1070,
  [SMALL_STATE(57)] = 1086,
  [SMALL_STATE(58)] = 1102,
  [SMALL_STATE(59)] = 1112,
  [SMALL_STATE(60)] = 1122,
  [SMALL_STATE(61)] = 1132,
  [SMALL_STATE(62)] = 1142,
  [SMALL_STATE(63)] = 1152,
  [SMALL_STATE(64)] = 1165,
  [SMALL_STATE(65)] = 1178,
  [SMALL_STATE(66)] = 1191,
  [SMALL_STATE(67)] = 1204,
  [SMALL_STATE(68)] = 1217,
  [SMALL_STATE(69)] = 1230,
  [SMALL_STATE(70)] = 1238,
  [SMALL_STATE(71)] = 1248,
  [SMALL_STATE(72)] = 1258,
  [SMALL_STATE(73)] = 1268,
  [SMALL_STATE(74)] = 1278,
  [SMALL_STATE(75)] = 1288,
  [SMALL_STATE(76)] = 1298,
  [SMALL_STATE(77)] = 1308,
  [SMALL_STATE(78)] = 1318,
  [SMALL_STATE(79)] = 1326,
  [SMALL_STATE(80)] = 1336,
  [SMALL_STATE(81)] = 1344,
  [SMALL_STATE(82)] = 1352,
  [SMALL_STATE(83)] = 1362,
  [SMALL_STATE(84)] = 1369,
  [SMALL_STATE(85)] = 1376,
  [SMALL_STATE(86)] = 1383,
  [SMALL_STATE(87)] = 1390,
  [SMALL_STATE(88)] = 1397,
  [SMALL_STATE(89)] = 1404,
  [SMALL_STATE(90)] = 1411,
  [SMALL_STATE(91)] = 1418,
  [SMALL_STATE(92)] = 1425,
  [SMALL_STATE(93)] = 1432,
  [SMALL_STATE(94)] = 1439,
  [SMALL_STATE(95)] = 1446,
  [SMALL_STATE(96)] = 1453,
  [SMALL_STATE(97)] = 1460,
  [SMALL_STATE(98)] = 1467,
  [SMALL_STATE(99)] = 1474,
  [SMALL_STATE(100)] = 1481,
  [SMALL_STATE(101)] = 1488,
  [SMALL_STATE(102)] = 1495,
  [SMALL_STATE(103)] = 1502,
  [SMALL_STATE(104)] = 1509,
  [SMALL_STATE(105)] = 1516,
  [SMALL_STATE(106)] = 1523,
  [SMALL_STATE(107)] = 1530,
  [SMALL_STATE(108)] = 1537,
  [SMALL_STATE(109)] = 1544,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_escaped_echo_statement, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__escaped_echo_statement_start = 0,
  ts_external_token__escaped_echo_statement_end = 1,
  ts_external_token__not_escaped_echo_statement_start = 2,
  ts_external_token__not_escaped_echo_statement_end = 3,
  ts_external_token_php_text = 4,
  ts_external_token__start_tag_name = 5,
  ts_external_token__script_start_tag_name = 6,
  ts_external_token__style_start_tag_name = 7,
  ts_external_token__end_tag_name = 8,
  ts_external_token_erroneous_end_tag_name = 9,
  ts_external_token_SLASH_GT = 10,
  ts_external_token__implicit_end_tag = 11,
  ts_external_token_raw_text = 12,
  ts_external_token_comment = 13,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__escaped_echo_statement_start] = sym__escaped_echo_statement_start,
  [ts_external_token__escaped_echo_statement_end] = sym__escaped_echo_statement_end,
  [ts_external_token__not_escaped_echo_statement_start] = sym__not_escaped_echo_statement_start,
  [ts_external_token__not_escaped_echo_statement_end] = sym__not_escaped_echo_statement_end,
  [ts_external_token_php_text] = sym_php_text,
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[14][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__escaped_echo_statement_start] = true,
    [ts_external_token__escaped_echo_statement_end] = true,
    [ts_external_token__not_escaped_echo_statement_start] = true,
    [ts_external_token__not_escaped_echo_statement_end] = true,
    [ts_external_token_php_text] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__escaped_echo_statement_start] = true,
    [ts_external_token__not_escaped_echo_statement_start] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__escaped_echo_statement_start] = true,
    [ts_external_token__not_escaped_echo_statement_start] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_raw_text] = true,
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
    [ts_external_token_php_text] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [12] = {
    [ts_external_token__not_escaped_echo_statement_end] = true,
    [ts_external_token_comment] = true,
  },
  [13] = {
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
