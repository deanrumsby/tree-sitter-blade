#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

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
  aux_sym_attribute_value_token1 = 10,
  sym_entity = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_DQUOTE = 13,
  sym_escaped_echo_statement = 14,
  sym_unescaped_echo_statement = 15,
  sym__single_quoted_attribute_value_fragment = 16,
  sym__double_quoted_attribute_value_fragment = 17,
  sym__start_tag_name = 18,
  sym__script_start_tag_name = 19,
  sym__style_start_tag_name = 20,
  sym__end_tag_name = 21,
  sym_erroneous_end_tag_name = 22,
  sym__implicit_end_tag = 23,
  sym_raw_text = 24,
  sym_text = 25,
  sym_comment = 26,
  sym_document = 27,
  sym_doctype = 28,
  sym__node = 29,
  sym_echo_statement = 30,
  sym_element = 31,
  sym_script_element = 32,
  sym_style_element = 33,
  sym_start_tag = 34,
  sym_script_start_tag = 35,
  sym_style_start_tag = 36,
  sym_self_closing_tag = 37,
  sym_end_tag = 38,
  sym_erroneous_end_tag = 39,
  sym_attribute = 40,
  sym_attribute_value = 41,
  sym_quoted_attribute_value = 42,
  aux_sym__single_quotes_attribute_value = 43,
  aux_sym__double_quotes_attribute_value = 44,
  aux_sym_document_repeat1 = 45,
  aux_sym_start_tag_repeat1 = 46,
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
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_escaped_echo_statement] = "escaped_echo_statement",
  [sym_unescaped_echo_statement] = "unescaped_echo_statement",
  [sym__single_quoted_attribute_value_fragment] = "_single_quoted_attribute_value_fragment",
  [sym__double_quoted_attribute_value_fragment] = "_double_quoted_attribute_value_fragment",
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
  [sym__node] = "_node",
  [sym_echo_statement] = "echo_statement",
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
  [sym_attribute_value] = "attribute_value",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym__single_quotes_attribute_value] = "_single_quotes_attribute_value",
  [aux_sym__double_quotes_attribute_value] = "_double_quotes_attribute_value",
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
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escaped_echo_statement] = sym_escaped_echo_statement,
  [sym_unescaped_echo_statement] = sym_unescaped_echo_statement,
  [sym__single_quoted_attribute_value_fragment] = sym__single_quoted_attribute_value_fragment,
  [sym__double_quoted_attribute_value_fragment] = sym__double_quoted_attribute_value_fragment,
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
  [sym__node] = sym__node,
  [sym_echo_statement] = sym_echo_statement,
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
  [sym_attribute_value] = sym_attribute_value,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym__single_quotes_attribute_value] = aux_sym__single_quotes_attribute_value,
  [aux_sym__double_quotes_attribute_value] = aux_sym__double_quotes_attribute_value,
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
  [aux_sym_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__single_quoted_attribute_value_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quoted_attribute_value_fragment] = {
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
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_echo_statement] = {
    .visible = true,
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
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__single_quotes_attribute_value] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quotes_attribute_value] = {
    .visible = false,
    .named = false,
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
  [1] = {
    [1] = sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__single_quotes_attribute_value, 2,
    aux_sym__single_quotes_attribute_value,
    sym_attribute_value,
  aux_sym__double_quotes_attribute_value, 2,
    aux_sym__double_quotes_attribute_value,
    sym_attribute_value,
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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 12,
  [24] = 21,
  [25] = 11,
  [26] = 26,
  [27] = 27,
  [28] = 19,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 13,
  [33] = 33,
  [34] = 33,
  [35] = 9,
  [36] = 10,
  [37] = 22,
  [38] = 26,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 41,
  [46] = 46,
  [47] = 43,
  [48] = 40,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 52,
  [53] = 52,
  [54] = 50,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 17,
  [61] = 17,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 62,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 72,
  [73] = 65,
  [74] = 71,
  [75] = 17,
  [76] = 76,
  [77] = 64,
  [78] = 66,
  [79] = 72,
  [80] = 80,
  [81] = 17,
  [82] = 76,
  [83] = 69,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 80,
  [88] = 88,
  [89] = 89,
  [90] = 84,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 92,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 98,
  [102] = 93,
  [103] = 99,
  [104] = 91,
  [105] = 100,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '"', 67,
        '&', 2,
        '\'', 66,
        '/', 4,
        '<', 20,
        '=', 23,
        '>', 18,
        'D', 7,
        'd', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 12:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(17);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
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
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 4},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 5},
  [40] = {.lex_state = 0, .external_lex_state = 6},
  [41] = {.lex_state = 0, .external_lex_state = 6},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 5},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 0, .external_lex_state = 6},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 0, .external_lex_state = 5},
  [48] = {.lex_state = 0, .external_lex_state = 6},
  [49] = {.lex_state = 3, .external_lex_state = 7},
  [50] = {.lex_state = 3, .external_lex_state = 7},
  [51] = {.lex_state = 3, .external_lex_state = 7},
  [52] = {.lex_state = 3, .external_lex_state = 7},
  [53] = {.lex_state = 3, .external_lex_state = 7},
  [54] = {.lex_state = 3, .external_lex_state = 8},
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 6},
  [57] = {.lex_state = 3, .external_lex_state = 8},
  [58] = {.lex_state = 3, .external_lex_state = 8},
  [59] = {.lex_state = 3, .external_lex_state = 8},
  [60] = {.lex_state = 0, .external_lex_state = 6},
  [61] = {.lex_state = 0, .external_lex_state = 5},
  [62] = {.lex_state = 3, .external_lex_state = 7},
  [63] = {.lex_state = 3, .external_lex_state = 8},
  [64] = {.lex_state = 3, .external_lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 9},
  [66] = {.lex_state = 3, .external_lex_state = 7},
  [67] = {.lex_state = 3, .external_lex_state = 8},
  [68] = {.lex_state = 0, .external_lex_state = 10},
  [69] = {.lex_state = 3, .external_lex_state = 7},
  [70] = {.lex_state = 0, .external_lex_state = 10},
  [71] = {.lex_state = 0, .external_lex_state = 9},
  [72] = {.lex_state = 3, .external_lex_state = 7},
  [73] = {.lex_state = 0, .external_lex_state = 9},
  [74] = {.lex_state = 0, .external_lex_state = 9},
  [75] = {.lex_state = 3, .external_lex_state = 7},
  [76] = {.lex_state = 0, .external_lex_state = 8},
  [77] = {.lex_state = 3, .external_lex_state = 8},
  [78] = {.lex_state = 3, .external_lex_state = 8},
  [79] = {.lex_state = 3, .external_lex_state = 8},
  [80] = {.lex_state = 0, .external_lex_state = 11},
  [81] = {.lex_state = 3, .external_lex_state = 8},
  [82] = {.lex_state = 0, .external_lex_state = 8},
  [83] = {.lex_state = 3, .external_lex_state = 8},
  [84] = {.lex_state = 0, .external_lex_state = 8},
  [85] = {.lex_state = 0, .external_lex_state = 9},
  [86] = {.lex_state = 0, .external_lex_state = 9},
  [87] = {.lex_state = 0, .external_lex_state = 11},
  [88] = {.lex_state = 0, .external_lex_state = 9},
  [89] = {.lex_state = 0, .external_lex_state = 9},
  [90] = {.lex_state = 0, .external_lex_state = 8},
  [91] = {.lex_state = 0, .external_lex_state = 12},
  [92] = {.lex_state = 0, .external_lex_state = 8},
  [93] = {.lex_state = 12, .external_lex_state = 8},
  [94] = {.lex_state = 0, .external_lex_state = 8},
  [95] = {.lex_state = 0, .external_lex_state = 8},
  [96] = {.lex_state = 0, .external_lex_state = 8},
  [97] = {.lex_state = 0, .external_lex_state = 8},
  [98] = {.lex_state = 0, .external_lex_state = 13},
  [99] = {.lex_state = 0, .external_lex_state = 8},
  [100] = {.lex_state = 0, .external_lex_state = 8},
  [101] = {.lex_state = 0, .external_lex_state = 13},
  [102] = {.lex_state = 12, .external_lex_state = 8},
  [103] = {.lex_state = 0, .external_lex_state = 8},
  [104] = {.lex_state = 0, .external_lex_state = 12},
  [105] = {.lex_state = 0, .external_lex_state = 8},
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
    [sym_escaped_echo_statement] = ACTIONS(1),
    [sym_unescaped_echo_statement] = ACTIONS(1),
    [sym__single_quoted_attribute_value_fragment] = ACTIONS(1),
    [sym__double_quoted_attribute_value_fragment] = ACTIONS(1),
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
    [sym_document] = STATE(97),
    [sym_doctype] = STATE(8),
    [sym__node] = STATE(8),
    [sym_echo_statement] = STATE(8),
    [sym_element] = STATE(8),
    [sym_script_element] = STATE(8),
    [sym_style_element] = STATE(8),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(71),
    [sym_style_start_tag] = STATE(65),
    [sym_self_closing_tag] = STATE(15),
    [sym_erroneous_end_tag] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym_escaped_echo_statement] = ACTIONS(15),
    [sym_unescaped_echo_statement] = ACTIONS(15),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_end_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(73), 1,
      sym_style_start_tag,
    STATE(74), 1,
      sym_script_start_tag,
    ACTIONS(23), 2,
      sym_text,
      sym_entity,
    ACTIONS(25), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(3), 8,
      sym_doctype,
      sym__node,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [49] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(22), 1,
      sym_end_tag,
    STATE(73), 1,
      sym_style_start_tag,
    STATE(74), 1,
      sym_script_start_tag,
    ACTIONS(25), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    ACTIONS(29), 2,
      sym_text,
      sym_entity,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [98] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(20), 1,
      sym_end_tag,
    STATE(73), 1,
      sym_style_start_tag,
    STATE(74), 1,
      sym_script_start_tag,
    ACTIONS(25), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    ACTIONS(35), 2,
      sym_text,
      sym_entity,
    STATE(5), 8,
      sym_doctype,
      sym__node,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [147] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(2), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(37), 1,
      sym_end_tag,
    STATE(73), 1,
      sym_style_start_tag,
    STATE(74), 1,
      sym_script_start_tag,
    ACTIONS(25), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    ACTIONS(29), 2,
      sym_text,
      sym_entity,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [196] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LT_BANG,
    ACTIONS(46), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(71), 1,
      sym_script_start_tag,
    ACTIONS(52), 2,
      sym_text,
      sym_entity,
    ACTIONS(55), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(6), 8,
      sym_doctype,
      sym__node,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [242] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__implicit_end_tag,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(16), 1,
      sym_self_closing_tag,
    STATE(73), 1,
      sym_style_start_tag,
    STATE(74), 1,
      sym_script_start_tag,
    ACTIONS(67), 2,
      sym_text,
      sym_entity,
    ACTIONS(70), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [288] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_style_start_tag,
    STATE(71), 1,
      sym_script_start_tag,
    ACTIONS(15), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    ACTIONS(75), 2,
      sym_text,
      sym_entity,
    STATE(6), 8,
      sym_doctype,
      sym__node,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [398] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_echo_statement,
    ACTIONS(99), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(77), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(121), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(129), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(133), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(137), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(133), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [710] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_attribute_value_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_echo_statement,
    ACTIONS(147), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(64), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(149), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(149), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(121), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 7,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      sym__single_quoted_attribute_value_fragment,
    STATE(39), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(55), 1,
      sym_echo_statement,
    ACTIONS(155), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym__double_quoted_attribute_value_fragment,
    STATE(46), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(56), 1,
      sym_echo_statement,
    ACTIONS(163), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__double_quoted_attribute_value_fragment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(56), 1,
      sym_echo_statement,
    ACTIONS(163), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      sym__single_quoted_attribute_value_fragment,
    STATE(43), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(55), 1,
      sym_echo_statement,
    ACTIONS(169), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [910] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      sym__single_quoted_attribute_value_fragment,
    STATE(39), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(55), 1,
      sym_echo_statement,
    ACTIONS(169), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__single_quoted_attribute_value_fragment,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(55), 1,
      sym_echo_statement,
    ACTIONS(169), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [950] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__double_quoted_attribute_value_fragment,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(56), 1,
      sym_echo_statement,
    ACTIONS(163), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [970] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      sym__double_quoted_attribute_value_fragment,
    STATE(46), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(56), 1,
      sym_echo_statement,
    ACTIONS(177), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [990] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__single_quoted_attribute_value_fragment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(55), 1,
      sym_echo_statement,
    ACTIONS(169), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1010] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__double_quoted_attribute_value_fragment,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(56), 1,
      sym_echo_statement,
    ACTIONS(163), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_GT,
    ACTIONS(187), 1,
      anon_sym_SLASH_GT,
    ACTIONS(189), 1,
      sym_attribute_name,
    STATE(50), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_attribute_name,
    ACTIONS(191), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(50), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_GT,
    ACTIONS(189), 1,
      sym_attribute_name,
    ACTIONS(196), 1,
      anon_sym_SLASH_GT,
    STATE(50), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_attribute_name,
    ACTIONS(198), 1,
      anon_sym_GT,
    ACTIONS(200), 1,
      anon_sym_SLASH_GT,
    STATE(49), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_attribute_name,
    ACTIONS(198), 1,
      anon_sym_GT,
    ACTIONS(202), 1,
      anon_sym_SLASH_GT,
    STATE(51), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(204), 1,
      sym_attribute_name,
    STATE(54), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 4,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__single_quoted_attribute_value_fragment,
      anon_sym_SQUOTE,
  [1137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__double_quoted_attribute_value_fragment,
      anon_sym_DQUOTE,
  [1147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_GT,
    ACTIONS(213), 1,
      sym_attribute_name,
    STATE(54), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_attribute_name,
    ACTIONS(215), 1,
      anon_sym_GT,
    STATE(63), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_attribute_name,
    ACTIONS(217), 1,
      anon_sym_GT,
    STATE(57), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__double_quoted_attribute_value_fragment,
      anon_sym_DQUOTE,
  [1199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym__single_quoted_attribute_value_fragment,
      anon_sym_SQUOTE,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(219), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_attribute_name,
    ACTIONS(223), 1,
      anon_sym_GT,
    STATE(54), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    ACTIONS(229), 1,
      sym_raw_text,
    STATE(25), 1,
      sym_end_tag,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym__start_tag_name,
    ACTIONS(237), 1,
      sym__script_start_tag_name,
    ACTIONS(239), 1,
      sym__style_start_tag_name,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__script_start_tag_name,
    ACTIONS(239), 1,
      sym__style_start_tag_name,
    ACTIONS(243), 1,
      sym__start_tag_name,
  [1312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    ACTIONS(245), 1,
      sym_raw_text,
    STATE(23), 1,
      sym_end_tag,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(251), 1,
      sym_raw_text,
    STATE(11), 1,
      sym_end_tag,
  [1347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(253), 1,
      sym_raw_text,
    STATE(12), 1,
      sym_end_tag,
  [1360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_end_tag,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__end_tag_name,
    ACTIONS(257), 1,
      sym_erroneous_end_tag_name,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    STATE(36), 1,
      sym_end_tag,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LT_SLASH,
    STATE(38), 1,
      sym_end_tag,
  [1449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(263), 1,
      sym__end_tag_name,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    STATE(26), 1,
      sym_end_tag,
  [1501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym__end_tag_name,
  [1508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_GT,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym_doctype_token1,
  [1522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_GT,
  [1529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_GT,
  [1536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_GT,
  [1543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [1550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_erroneous_end_tag_name,
  [1557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_GT,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym__doctype,
  [1571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_erroneous_end_tag_name,
  [1578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_doctype_token1,
  [1585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_GT,
  [1592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__end_tag_name,
  [1599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 334,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 366,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 398,
  [SMALL_STATE(14)] = 422,
  [SMALL_STATE(15)] = 438,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 470,
  [SMALL_STATE(18)] = 486,
  [SMALL_STATE(19)] = 502,
  [SMALL_STATE(20)] = 518,
  [SMALL_STATE(21)] = 534,
  [SMALL_STATE(22)] = 550,
  [SMALL_STATE(23)] = 566,
  [SMALL_STATE(24)] = 582,
  [SMALL_STATE(25)] = 598,
  [SMALL_STATE(26)] = 614,
  [SMALL_STATE(27)] = 630,
  [SMALL_STATE(28)] = 646,
  [SMALL_STATE(29)] = 662,
  [SMALL_STATE(30)] = 678,
  [SMALL_STATE(31)] = 694,
  [SMALL_STATE(32)] = 710,
  [SMALL_STATE(33)] = 734,
  [SMALL_STATE(34)] = 750,
  [SMALL_STATE(35)] = 766,
  [SMALL_STATE(36)] = 782,
  [SMALL_STATE(37)] = 798,
  [SMALL_STATE(38)] = 814,
  [SMALL_STATE(39)] = 830,
  [SMALL_STATE(40)] = 850,
  [SMALL_STATE(41)] = 870,
  [SMALL_STATE(42)] = 890,
  [SMALL_STATE(43)] = 910,
  [SMALL_STATE(44)] = 930,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 970,
  [SMALL_STATE(47)] = 990,
  [SMALL_STATE(48)] = 1010,
  [SMALL_STATE(49)] = 1030,
  [SMALL_STATE(50)] = 1047,
  [SMALL_STATE(51)] = 1062,
  [SMALL_STATE(52)] = 1079,
  [SMALL_STATE(53)] = 1096,
  [SMALL_STATE(54)] = 1113,
  [SMALL_STATE(55)] = 1127,
  [SMALL_STATE(56)] = 1137,
  [SMALL_STATE(57)] = 1147,
  [SMALL_STATE(58)] = 1161,
  [SMALL_STATE(59)] = 1175,
  [SMALL_STATE(60)] = 1189,
  [SMALL_STATE(61)] = 1199,
  [SMALL_STATE(62)] = 1209,
  [SMALL_STATE(63)] = 1221,
  [SMALL_STATE(64)] = 1235,
  [SMALL_STATE(65)] = 1244,
  [SMALL_STATE(66)] = 1257,
  [SMALL_STATE(67)] = 1266,
  [SMALL_STATE(68)] = 1277,
  [SMALL_STATE(69)] = 1290,
  [SMALL_STATE(70)] = 1299,
  [SMALL_STATE(71)] = 1312,
  [SMALL_STATE(72)] = 1325,
  [SMALL_STATE(73)] = 1334,
  [SMALL_STATE(74)] = 1347,
  [SMALL_STATE(75)] = 1360,
  [SMALL_STATE(76)] = 1369,
  [SMALL_STATE(77)] = 1379,
  [SMALL_STATE(78)] = 1387,
  [SMALL_STATE(79)] = 1395,
  [SMALL_STATE(80)] = 1403,
  [SMALL_STATE(81)] = 1413,
  [SMALL_STATE(82)] = 1421,
  [SMALL_STATE(83)] = 1431,
  [SMALL_STATE(84)] = 1439,
  [SMALL_STATE(85)] = 1449,
  [SMALL_STATE(86)] = 1457,
  [SMALL_STATE(87)] = 1465,
  [SMALL_STATE(88)] = 1475,
  [SMALL_STATE(89)] = 1483,
  [SMALL_STATE(90)] = 1491,
  [SMALL_STATE(91)] = 1501,
  [SMALL_STATE(92)] = 1508,
  [SMALL_STATE(93)] = 1515,
  [SMALL_STATE(94)] = 1522,
  [SMALL_STATE(95)] = 1529,
  [SMALL_STATE(96)] = 1536,
  [SMALL_STATE(97)] = 1543,
  [SMALL_STATE(98)] = 1550,
  [SMALL_STATE(99)] = 1557,
  [SMALL_STATE(100)] = 1564,
  [SMALL_STATE(101)] = 1571,
  [SMALL_STATE(102)] = 1578,
  [SMALL_STATE(103)] = 1585,
  [SMALL_STATE(104)] = 1592,
  [SMALL_STATE(105)] = 1599,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_quotes_attribute_value, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(61),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(55),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quotes_attribute_value, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(60),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(56),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_quotes_attribute_value, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quotes_attribute_value, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_escaped_echo_statement = 0,
  ts_external_token_unescaped_echo_statement = 1,
  ts_external_token__single_quoted_attribute_value_fragment = 2,
  ts_external_token__double_quoted_attribute_value_fragment = 3,
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
  [ts_external_token_escaped_echo_statement] = sym_escaped_echo_statement,
  [ts_external_token_unescaped_echo_statement] = sym_unescaped_echo_statement,
  [ts_external_token__single_quoted_attribute_value_fragment] = sym__single_quoted_attribute_value_fragment,
  [ts_external_token__double_quoted_attribute_value_fragment] = sym__double_quoted_attribute_value_fragment,
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

static const bool ts_external_scanner_states[14][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token__single_quoted_attribute_value_fragment] = true,
    [ts_external_token__double_quoted_attribute_value_fragment] = true,
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
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token_text] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_text] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token__single_quoted_attribute_value_fragment] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token__double_quoted_attribute_value_fragment] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [12] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [13] = {
    [ts_external_token_erroneous_end_tag_name] = true,
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
