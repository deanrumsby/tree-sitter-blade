#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 12
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
  sym_escaped_echo_statement = 16,
  sym_unescaped_echo_statement = 17,
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
  sym_element = 30,
  sym_script_element = 31,
  sym_style_element = 32,
  sym_start_tag = 33,
  sym_script_start_tag = 34,
  sym_style_start_tag = 35,
  sym_self_closing_tag = 36,
  sym_end_tag = 37,
  sym_erroneous_end_tag = 38,
  sym_attribute = 39,
  sym_quoted_attribute_value = 40,
  aux_sym_document_repeat1 = 41,
  aux_sym_start_tag_repeat1 = 42,
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
  [sym_escaped_echo_statement] = "escaped_echo_statement",
  [sym_unescaped_echo_statement] = "unescaped_echo_statement",
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
  [sym_escaped_echo_statement] = sym_escaped_echo_statement,
  [sym_unescaped_echo_statement] = sym_unescaped_echo_statement,
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
  [sym_escaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_echo_statement] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 10,
  [21] = 21,
  [22] = 9,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 18,
  [29] = 19,
  [30] = 27,
  [31] = 14,
  [32] = 21,
  [33] = 23,
  [34] = 25,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 37,
  [48] = 48,
  [49] = 42,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 55,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 67,
  [68] = 63,
  [69] = 48,
  [70] = 50,
  [71] = 64,
  [72] = 65,
  [73] = 73,
  [74] = 67,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 82,
  [84] = 76,
  [85] = 85,
  [86] = 78,
  [87] = 87,
  [88] = 87,
  [89] = 81,
  [90] = 79,
  [91] = 80,
  [92] = 85,
  [93] = 75,
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
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 5, .external_lex_state = 4},
  [36] = {.lex_state = 5, .external_lex_state = 4},
  [37] = {.lex_state = 5, .external_lex_state = 4},
  [38] = {.lex_state = 5, .external_lex_state = 4},
  [39] = {.lex_state = 5, .external_lex_state = 4},
  [40] = {.lex_state = 5, .external_lex_state = 5},
  [41] = {.lex_state = 5, .external_lex_state = 5},
  [42] = {.lex_state = 5, .external_lex_state = 4},
  [43] = {.lex_state = 1, .external_lex_state = 5},
  [44] = {.lex_state = 1, .external_lex_state = 5},
  [45] = {.lex_state = 5, .external_lex_state = 5},
  [46] = {.lex_state = 5, .external_lex_state = 5},
  [47] = {.lex_state = 5, .external_lex_state = 5},
  [48] = {.lex_state = 5, .external_lex_state = 4},
  [49] = {.lex_state = 5, .external_lex_state = 5},
  [50] = {.lex_state = 5, .external_lex_state = 4},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 0, .external_lex_state = 6},
  [53] = {.lex_state = 5, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 7},
  [55] = {.lex_state = 0, .external_lex_state = 7},
  [56] = {.lex_state = 0, .external_lex_state = 7},
  [57] = {.lex_state = 0, .external_lex_state = 7},
  [58] = {.lex_state = 5, .external_lex_state = 5},
  [59] = {.lex_state = 0, .external_lex_state = 7},
  [60] = {.lex_state = 0, .external_lex_state = 7},
  [61] = {.lex_state = 0, .external_lex_state = 7},
  [62] = {.lex_state = 0, .external_lex_state = 8},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 2, .external_lex_state = 5},
  [65] = {.lex_state = 0, .external_lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 8},
  [67] = {.lex_state = 4, .external_lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 5},
  [69] = {.lex_state = 5, .external_lex_state = 5},
  [70] = {.lex_state = 5, .external_lex_state = 5},
  [71] = {.lex_state = 2, .external_lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 5},
  [73] = {.lex_state = 0, .external_lex_state = 7},
  [74] = {.lex_state = 4, .external_lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 5},
  [76] = {.lex_state = 0, .external_lex_state = 5},
  [77] = {.lex_state = 0, .external_lex_state = 5},
  [78] = {.lex_state = 0, .external_lex_state = 5},
  [79] = {.lex_state = 14, .external_lex_state = 5},
  [80] = {.lex_state = 0, .external_lex_state = 5},
  [81] = {.lex_state = 0, .external_lex_state = 9},
  [82] = {.lex_state = 0, .external_lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 5},
  [84] = {.lex_state = 0, .external_lex_state = 5},
  [85] = {.lex_state = 0, .external_lex_state = 10},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 0, .external_lex_state = 5},
  [88] = {.lex_state = 0, .external_lex_state = 5},
  [89] = {.lex_state = 0, .external_lex_state = 9},
  [90] = {.lex_state = 14, .external_lex_state = 5},
  [91] = {.lex_state = 0, .external_lex_state = 5},
  [92] = {.lex_state = 0, .external_lex_state = 10},
  [93] = {.lex_state = 0, .external_lex_state = 5},
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
    [sym_escaped_echo_statement] = ACTIONS(3),
    [sym_unescaped_echo_statement] = ACTIONS(3),
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
    [sym_document] = STATE(77),
    [sym_doctype] = STATE(8),
    [sym__node] = STATE(8),
    [sym_element] = STATE(8),
    [sym_script_element] = STATE(8),
    [sym_style_element] = STATE(8),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(54),
    [sym_style_start_tag] = STATE(57),
    [sym_self_closing_tag] = STATE(11),
    [sym_erroneous_end_tag] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym_escaped_echo_statement] = ACTIONS(3),
    [sym_unescaped_echo_statement] = ACTIONS(3),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_end_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(55), 1,
      sym_style_start_tag,
    STATE(56), 1,
      sym_script_start_tag,
    ACTIONS(21), 2,
      sym_text,
      sym_entity,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [46] = 12,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(22), 1,
      sym_end_tag,
    STATE(55), 1,
      sym_style_start_tag,
    STATE(56), 1,
      sym_script_start_tag,
    ACTIONS(21), 2,
      sym_text,
      sym_entity,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [92] = 12,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(17), 1,
      sym_end_tag,
    STATE(55), 1,
      sym_style_start_tag,
    STATE(56), 1,
      sym_script_start_tag,
    ACTIONS(29), 2,
      sym_text,
      sym_entity,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    STATE(2), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [138] = 12,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(12), 1,
      sym_end_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(55), 1,
      sym_style_start_tag,
    STATE(56), 1,
      sym_script_start_tag,
    ACTIONS(33), 2,
      sym_text,
      sym_entity,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    STATE(3), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [184] = 11,
    ACTIONS(37), 1,
      anon_sym_LT_BANG,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LT_SLASH,
    ACTIONS(49), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(55), 1,
      sym_style_start_tag,
    STATE(56), 1,
      sym_script_start_tag,
    ACTIONS(46), 2,
      sym_text,
      sym_entity,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    STATE(6), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [227] = 11,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LT_BANG,
    ACTIONS(54), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(54), 1,
      sym_script_start_tag,
    STATE(57), 1,
      sym_style_start_tag,
    ACTIONS(60), 2,
      sym_text,
      sym_entity,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    STATE(7), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [270] = 11,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(54), 1,
      sym_script_start_tag,
    STATE(57), 1,
      sym_style_start_tag,
    ACTIONS(65), 2,
      sym_text,
      sym_entity,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    STATE(7), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [313] = 3,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(67), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [329] = 3,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(71), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [345] = 3,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(75), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [361] = 3,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(79), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [377] = 3,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(75), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [393] = 3,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(83), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [409] = 3,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(87), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [425] = 3,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(87), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [441] = 3,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(79), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [457] = 3,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(91), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [473] = 3,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(95), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [489] = 3,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(71), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [505] = 3,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(99), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [521] = 3,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(67), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [537] = 3,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(103), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [553] = 3,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(107), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [569] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(111), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [585] = 3,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(115), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [601] = 3,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(119), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [617] = 3,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(91), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [633] = 3,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(95), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [649] = 3,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(119), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [665] = 3,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(83), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [681] = 3,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(99), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [697] = 3,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(103), 5,
      sym__implicit_end_tag,
      sym_text,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [713] = 3,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(111), 5,
      sym_text,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [729] = 5,
    ACTIONS(123), 1,
      anon_sym_GT,
    ACTIONS(125), 1,
      anon_sym_SLASH_GT,
    ACTIONS(127), 1,
      sym_attribute_name,
    STATE(38), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [748] = 5,
    ACTIONS(127), 1,
      sym_attribute_name,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_SLASH_GT,
    STATE(37), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [767] = 4,
    ACTIONS(135), 1,
      sym_attribute_name,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(37), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [784] = 5,
    ACTIONS(127), 1,
      sym_attribute_name,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_SLASH_GT,
    STATE(37), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [803] = 5,
    ACTIONS(123), 1,
      anon_sym_GT,
    ACTIONS(127), 1,
      sym_attribute_name,
    ACTIONS(140), 1,
      anon_sym_SLASH_GT,
    STATE(36), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [822] = 4,
    ACTIONS(142), 1,
      anon_sym_GT,
    ACTIONS(144), 1,
      sym_attribute_name,
    STATE(47), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [838] = 4,
    ACTIONS(144), 1,
      sym_attribute_name,
    ACTIONS(146), 1,
      anon_sym_GT,
    STATE(47), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [854] = 3,
    ACTIONS(150), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(148), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [868] = 5,
    ACTIONS(152), 1,
      sym_attribute_value,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_quoted_attribute_value,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [886] = 5,
    ACTIONS(158), 1,
      sym_attribute_value,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_quoted_attribute_value,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [904] = 4,
    ACTIONS(144), 1,
      sym_attribute_name,
    ACTIONS(164), 1,
      anon_sym_GT,
    STATE(40), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [920] = 4,
    ACTIONS(144), 1,
      sym_attribute_name,
    ACTIONS(166), 1,
      anon_sym_GT,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [936] = 4,
    ACTIONS(133), 1,
      anon_sym_GT,
    ACTIONS(168), 1,
      sym_attribute_name,
    STATE(47), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [952] = 2,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [963] = 3,
    ACTIONS(173), 1,
      anon_sym_EQ,
    ACTIONS(148), 2,
      anon_sym_GT,
      sym_attribute_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [976] = 2,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [987] = 4,
    ACTIONS(177), 1,
      sym__start_tag_name,
    ACTIONS(179), 1,
      sym__script_start_tag_name,
    ACTIONS(181), 1,
      sym__style_start_tag_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1002] = 4,
    ACTIONS(179), 1,
      sym__script_start_tag_name,
    ACTIONS(181), 1,
      sym__style_start_tag_name,
    ACTIONS(183), 1,
      sym__start_tag_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1017] = 2,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1028] = 4,
    ACTIONS(187), 1,
      anon_sym_LT_SLASH,
    ACTIONS(189), 1,
      sym_raw_text,
    STATE(21), 1,
      sym_end_tag,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1043] = 4,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    ACTIONS(193), 1,
      sym_raw_text,
    STATE(33), 1,
      sym_end_tag,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1058] = 4,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    ACTIONS(195), 1,
      sym_raw_text,
    STATE(32), 1,
      sym_end_tag,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1073] = 4,
    ACTIONS(187), 1,
      anon_sym_LT_SLASH,
    ACTIONS(197), 1,
      sym_raw_text,
    STATE(23), 1,
      sym_end_tag,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1088] = 2,
    ACTIONS(185), 2,
      anon_sym_GT,
      sym_attribute_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1098] = 2,
    ACTIONS(199), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1108] = 2,
    ACTIONS(201), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1118] = 2,
    ACTIONS(203), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1128] = 3,
    ACTIONS(205), 1,
      sym__end_tag_name,
    ACTIONS(207), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1140] = 3,
    ACTIONS(187), 1,
      anon_sym_LT_SLASH,
    STATE(29), 1,
      sym_end_tag,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1152] = 3,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1164] = 3,
    ACTIONS(187), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_end_tag,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1176] = 3,
    ACTIONS(207), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(213), 1,
      sym__end_tag_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1188] = 3,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1200] = 3,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    STATE(19), 1,
      sym_end_tag,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1212] = 2,
    ACTIONS(171), 2,
      anon_sym_GT,
      sym_attribute_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1222] = 2,
    ACTIONS(175), 2,
      anon_sym_GT,
      sym_attribute_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1232] = 3,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1244] = 3,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    STATE(20), 1,
      sym_end_tag,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1256] = 2,
    ACTIONS(221), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1266] = 3,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1278] = 2,
    ACTIONS(225), 1,
      sym__doctype,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1287] = 2,
    ACTIONS(227), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1296] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1305] = 2,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1314] = 2,
    ACTIONS(233), 1,
      aux_sym_doctype_token1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1323] = 2,
    ACTIONS(235), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1332] = 2,
    ACTIONS(237), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1341] = 2,
    ACTIONS(239), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1350] = 2,
    ACTIONS(241), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1359] = 2,
    ACTIONS(243), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1368] = 2,
    ACTIONS(213), 1,
      sym__end_tag_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1377] = 2,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1386] = 2,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1395] = 2,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1404] = 2,
    ACTIONS(207), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1413] = 2,
    ACTIONS(247), 1,
      aux_sym_doctype_token1,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1422] = 2,
    ACTIONS(249), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1431] = 2,
    ACTIONS(205), 1,
      sym__end_tag_name,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
  [1440] = 2,
    ACTIONS(251), 1,
      sym__doctype,
    ACTIONS(3), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 345,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 377,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 409,
  [SMALL_STATE(16)] = 425,
  [SMALL_STATE(17)] = 441,
  [SMALL_STATE(18)] = 457,
  [SMALL_STATE(19)] = 473,
  [SMALL_STATE(20)] = 489,
  [SMALL_STATE(21)] = 505,
  [SMALL_STATE(22)] = 521,
  [SMALL_STATE(23)] = 537,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 569,
  [SMALL_STATE(26)] = 585,
  [SMALL_STATE(27)] = 601,
  [SMALL_STATE(28)] = 617,
  [SMALL_STATE(29)] = 633,
  [SMALL_STATE(30)] = 649,
  [SMALL_STATE(31)] = 665,
  [SMALL_STATE(32)] = 681,
  [SMALL_STATE(33)] = 697,
  [SMALL_STATE(34)] = 713,
  [SMALL_STATE(35)] = 729,
  [SMALL_STATE(36)] = 748,
  [SMALL_STATE(37)] = 767,
  [SMALL_STATE(38)] = 784,
  [SMALL_STATE(39)] = 803,
  [SMALL_STATE(40)] = 822,
  [SMALL_STATE(41)] = 838,
  [SMALL_STATE(42)] = 854,
  [SMALL_STATE(43)] = 868,
  [SMALL_STATE(44)] = 886,
  [SMALL_STATE(45)] = 904,
  [SMALL_STATE(46)] = 920,
  [SMALL_STATE(47)] = 936,
  [SMALL_STATE(48)] = 952,
  [SMALL_STATE(49)] = 963,
  [SMALL_STATE(50)] = 976,
  [SMALL_STATE(51)] = 987,
  [SMALL_STATE(52)] = 1002,
  [SMALL_STATE(53)] = 1017,
  [SMALL_STATE(54)] = 1028,
  [SMALL_STATE(55)] = 1043,
  [SMALL_STATE(56)] = 1058,
  [SMALL_STATE(57)] = 1073,
  [SMALL_STATE(58)] = 1088,
  [SMALL_STATE(59)] = 1098,
  [SMALL_STATE(60)] = 1108,
  [SMALL_STATE(61)] = 1118,
  [SMALL_STATE(62)] = 1128,
  [SMALL_STATE(63)] = 1140,
  [SMALL_STATE(64)] = 1152,
  [SMALL_STATE(65)] = 1164,
  [SMALL_STATE(66)] = 1176,
  [SMALL_STATE(67)] = 1188,
  [SMALL_STATE(68)] = 1200,
  [SMALL_STATE(69)] = 1212,
  [SMALL_STATE(70)] = 1222,
  [SMALL_STATE(71)] = 1232,
  [SMALL_STATE(72)] = 1244,
  [SMALL_STATE(73)] = 1256,
  [SMALL_STATE(74)] = 1266,
  [SMALL_STATE(75)] = 1278,
  [SMALL_STATE(76)] = 1287,
  [SMALL_STATE(77)] = 1296,
  [SMALL_STATE(78)] = 1305,
  [SMALL_STATE(79)] = 1314,
  [SMALL_STATE(80)] = 1323,
  [SMALL_STATE(81)] = 1332,
  [SMALL_STATE(82)] = 1341,
  [SMALL_STATE(83)] = 1350,
  [SMALL_STATE(84)] = 1359,
  [SMALL_STATE(85)] = 1368,
  [SMALL_STATE(86)] = 1377,
  [SMALL_STATE(87)] = 1386,
  [SMALL_STATE(88)] = 1395,
  [SMALL_STATE(89)] = 1404,
  [SMALL_STATE(90)] = 1413,
  [SMALL_STATE(91)] = 1422,
  [SMALL_STATE(92)] = 1431,
  [SMALL_STATE(93)] = 1440,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [229] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_escaped_echo_statement = 0,
  ts_external_token_unescaped_echo_statement = 1,
  ts_external_token__start_tag_name = 2,
  ts_external_token__script_start_tag_name = 3,
  ts_external_token__style_start_tag_name = 4,
  ts_external_token__end_tag_name = 5,
  ts_external_token_erroneous_end_tag_name = 6,
  ts_external_token_SLASH_GT = 7,
  ts_external_token__implicit_end_tag = 8,
  ts_external_token_raw_text = 9,
  ts_external_token_text = 10,
  ts_external_token_comment = 11,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_escaped_echo_statement] = sym_escaped_echo_statement,
  [ts_external_token_unescaped_echo_statement] = sym_unescaped_echo_statement,
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

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
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
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token_escaped_echo_statement] = true,
    [ts_external_token_unescaped_echo_statement] = true,
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
