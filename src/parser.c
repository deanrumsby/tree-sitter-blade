#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 254
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 113
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_AT = 5,
  anon_sym_php = 6,
  aux_sym_php_directive_token1 = 7,
  anon_sym_ATendphp = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_inject = 11,
  anon_sym_fragment = 12,
  anon_sym_endfragment = 13,
  anon_sym_csrf = 14,
  anon_sym_method = 15,
  anon_sym_props = 16,
  anon_sym_if = 17,
  anon_sym_else = 18,
  anon_sym_endif = 19,
  anon_sym_unless = 20,
  anon_sym_endunless = 21,
  anon_sym_isset = 22,
  anon_sym_endisset = 23,
  anon_sym_empty = 24,
  anon_sym_endempty = 25,
  anon_sym_auth = 26,
  anon_sym_endauth = 27,
  anon_sym_guest = 28,
  anon_sym_endguest = 29,
  anon_sym_production = 30,
  anon_sym_endproduction = 31,
  anon_sym_env = 32,
  anon_sym_endenv = 33,
  anon_sym_hasSection = 34,
  anon_sym_yield = 35,
  anon_sym_sectionMissing = 36,
  anon_sym_include = 37,
  anon_sym_session = 38,
  anon_sym_endsession = 39,
  anon_sym_switch = 40,
  anon_sym_case = 41,
  anon_sym_break = 42,
  anon_sym_default = 43,
  anon_sym_endswitch = 44,
  anon_sym_for = 45,
  anon_sym_endfor = 46,
  anon_sym_foreach = 47,
  anon_sym_endforeach = 48,
  anon_sym_forelse = 49,
  anon_sym_endforelse = 50,
  anon_sym_while = 51,
  anon_sym_endwhile = 52,
  anon_sym_continue = 53,
  anon_sym_includeIf = 54,
  anon_sym_includeWhen = 55,
  anon_sym_includeUnless = 56,
  anon_sym_includeFirst = 57,
  anon_sym_each = 58,
  anon_sym_once = 59,
  anon_sym_push = 60,
  anon_sym_pushIf = 61,
  anon_sym_endPushIf = 62,
  anon_sym_endpush = 63,
  anon_sym_endonce = 64,
  anon_sym_prepend = 65,
  anon_sym_pushOnce = 66,
  anon_sym_endPushOnce = 67,
  anon_sym_prependOnce = 68,
  anon_sym_endPrependOnce = 69,
  anon_sym_error = 70,
  anon_sym_enderror = 71,
  anon_sym_use = 72,
  anon_sym_style = 73,
  anon_sym_class = 74,
  anon_sym_checked = 75,
  anon_sym_selected = 76,
  anon_sym_disabled = 77,
  anon_sym_readonly = 78,
  anon_sym_required = 79,
  anon_sym_LBRACE_LBRACE = 80,
  anon_sym_RBRACE_RBRACE = 81,
  anon_sym_LBRACE_LBRACE_BANG_BANG = 82,
  anon_sym_BANG_BANG_RBRACE_RBRACE = 83,
  anon_sym_LBRACE_LBRACE_DASH_DASH = 84,
  anon_sym_DASH_DASH_RBRACE_RBRACE = 85,
  anon_sym_LT = 86,
  anon_sym_SLASH_GT = 87,
  anon_sym_LT_SLASH = 88,
  anon_sym_EQ = 89,
  aux_sym_expression_attribute_token1 = 90,
  anon_sym_SQUOTE = 91,
  aux_sym__expression_attribute_value_token1 = 92,
  anon_sym_DQUOTE = 93,
  aux_sym__expression_attribute_value_token2 = 94,
  sym_attribute_name = 95,
  aux_sym_attribute_value_token1 = 96,
  sym_entity = 97,
  aux_sym_quoted_attribute_value_token1 = 98,
  aux_sym_quoted_attribute_value_token2 = 99,
  anon_sym_AT_LBRACE_LBRACE = 100,
  anon_sym_AT_AT = 101,
  aux_sym__text_token1 = 102,
  anon_sym_LBRACE = 103,
  sym_argument_php_text = 104,
  sym__start_tag_name = 105,
  sym__script_start_tag_name = 106,
  sym__style_start_tag_name = 107,
  sym__end_tag_name = 108,
  sym_erroneous_end_tag_name = 109,
  sym__implicit_end_tag = 110,
  sym_raw_text = 111,
  sym_comment = 112,
  sym_document = 113,
  sym_doctype = 114,
  sym__node = 115,
  sym_php_directive = 116,
  sym_directive = 117,
  sym_directive_argument = 118,
  sym__directive_argument = 119,
  sym_directive_attribute = 120,
  sym_directive_attribute_value = 121,
  sym__directive = 122,
  sym__directive_attribute = 123,
  sym__directive_attribute_value = 124,
  sym_echo_statement = 125,
  sym_escaped_echo_statement = 126,
  sym_unescaped_echo_statement = 127,
  sym_blade_comment = 128,
  sym_element = 129,
  sym_script_element = 130,
  sym_style_element = 131,
  sym_start_tag = 132,
  sym_script_start_tag = 133,
  sym_style_start_tag = 134,
  sym_self_closing_tag = 135,
  sym_end_tag = 136,
  sym_erroneous_end_tag = 137,
  sym_attribute = 138,
  sym__attribute = 139,
  sym_expression_attribute = 140,
  sym__expression_attribute_value = 141,
  sym_attribute_value = 142,
  sym_quoted_attribute_value = 143,
  sym__quoted_attribute_value = 144,
  sym_text = 145,
  sym__text = 146,
  aux_sym_document_repeat1 = 147,
  aux_sym_php_directive_repeat1 = 148,
  aux_sym_start_tag_repeat1 = 149,
  aux_sym_quoted_attribute_value_repeat1 = 150,
  aux_sym_quoted_attribute_value_repeat2 = 151,
  aux_sym_text_repeat1 = 152,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_AT] = "@",
  [anon_sym_php] = "php",
  [aux_sym_php_directive_token1] = "php_directive_token1",
  [anon_sym_ATendphp] = "@endphp",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_inject] = "inject",
  [anon_sym_fragment] = "fragment",
  [anon_sym_endfragment] = "endfragment",
  [anon_sym_csrf] = "csrf",
  [anon_sym_method] = "method",
  [anon_sym_props] = "props",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [anon_sym_unless] = "unless",
  [anon_sym_endunless] = "endunless",
  [anon_sym_isset] = "isset",
  [anon_sym_endisset] = "endisset",
  [anon_sym_empty] = "empty",
  [anon_sym_endempty] = "endempty",
  [anon_sym_auth] = "auth",
  [anon_sym_endauth] = "endauth",
  [anon_sym_guest] = "guest",
  [anon_sym_endguest] = "endguest",
  [anon_sym_production] = "production",
  [anon_sym_endproduction] = "endproduction",
  [anon_sym_env] = "env",
  [anon_sym_endenv] = "endenv",
  [anon_sym_hasSection] = "hasSection",
  [anon_sym_yield] = "yield",
  [anon_sym_sectionMissing] = "sectionMissing",
  [anon_sym_include] = "include",
  [anon_sym_session] = "session",
  [anon_sym_endsession] = "endsession",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_break] = "break",
  [anon_sym_default] = "default",
  [anon_sym_endswitch] = "endswitch",
  [anon_sym_for] = "for",
  [anon_sym_endfor] = "endfor",
  [anon_sym_foreach] = "foreach",
  [anon_sym_endforeach] = "endforeach",
  [anon_sym_forelse] = "forelse",
  [anon_sym_endforelse] = "endforelse",
  [anon_sym_while] = "while",
  [anon_sym_endwhile] = "endwhile",
  [anon_sym_continue] = "continue",
  [anon_sym_includeIf] = "includeIf",
  [anon_sym_includeWhen] = "includeWhen",
  [anon_sym_includeUnless] = "includeUnless",
  [anon_sym_includeFirst] = "includeFirst",
  [anon_sym_each] = "each",
  [anon_sym_once] = "once",
  [anon_sym_push] = "push",
  [anon_sym_pushIf] = "pushIf",
  [anon_sym_endPushIf] = "endPushIf",
  [anon_sym_endpush] = "endpush",
  [anon_sym_endonce] = "endonce",
  [anon_sym_prepend] = "prepend",
  [anon_sym_pushOnce] = "pushOnce",
  [anon_sym_endPushOnce] = "endPushOnce",
  [anon_sym_prependOnce] = "prependOnce",
  [anon_sym_endPrependOnce] = "endPrependOnce",
  [anon_sym_error] = "error",
  [anon_sym_enderror] = "enderror",
  [anon_sym_use] = "use",
  [anon_sym_style] = "style",
  [anon_sym_class] = "class",
  [anon_sym_checked] = "checked",
  [anon_sym_selected] = "selected",
  [anon_sym_disabled] = "disabled",
  [anon_sym_readonly] = "readonly",
  [anon_sym_required] = "required",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = "{{!!",
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = "!!}}",
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = "{{--",
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = "--}}",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [aux_sym_expression_attribute_token1] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__expression_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__expression_attribute_value_token2] = "attribute_value",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [sym_entity] = "entity",
  [aux_sym_quoted_attribute_value_token1] = "quoted_attribute_value_token1",
  [aux_sym_quoted_attribute_value_token2] = "quoted_attribute_value_token2",
  [anon_sym_AT_LBRACE_LBRACE] = "@{{",
  [anon_sym_AT_AT] = "@@",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_LBRACE] = "{",
  [sym_argument_php_text] = "raw_text",
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
  [sym__node] = "_node",
  [sym_php_directive] = "php_directive",
  [sym_directive] = "directive",
  [sym_directive_argument] = "directive_argument",
  [sym__directive_argument] = "_directive_argument",
  [sym_directive_attribute] = "directive",
  [sym_directive_attribute_value] = "directive",
  [sym__directive] = "_directive",
  [sym__directive_attribute] = "_directive_attribute",
  [sym__directive_attribute_value] = "_directive_attribute_value",
  [sym_echo_statement] = "echo_statement",
  [sym_escaped_echo_statement] = "escaped_echo_statement",
  [sym_unescaped_echo_statement] = "unescaped_echo_statement",
  [sym_blade_comment] = "blade_comment",
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
  [sym__attribute] = "_attribute",
  [sym_expression_attribute] = "expression_attribute",
  [sym__expression_attribute_value] = "quoted_attribute_value",
  [sym_attribute_value] = "attribute_value",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [sym_text] = "text",
  [sym__text] = "_text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_php_directive_repeat1] = "php_directive_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_quoted_attribute_value_repeat1] = "quoted_attribute_value_repeat1",
  [aux_sym_quoted_attribute_value_repeat2] = "quoted_attribute_value_repeat2",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_php] = anon_sym_php,
  [aux_sym_php_directive_token1] = aux_sym_php_directive_token1,
  [anon_sym_ATendphp] = anon_sym_ATendphp,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_inject] = anon_sym_inject,
  [anon_sym_fragment] = anon_sym_fragment,
  [anon_sym_endfragment] = anon_sym_endfragment,
  [anon_sym_csrf] = anon_sym_csrf,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_props] = anon_sym_props,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_endunless] = anon_sym_endunless,
  [anon_sym_isset] = anon_sym_isset,
  [anon_sym_endisset] = anon_sym_endisset,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_endempty] = anon_sym_endempty,
  [anon_sym_auth] = anon_sym_auth,
  [anon_sym_endauth] = anon_sym_endauth,
  [anon_sym_guest] = anon_sym_guest,
  [anon_sym_endguest] = anon_sym_endguest,
  [anon_sym_production] = anon_sym_production,
  [anon_sym_endproduction] = anon_sym_endproduction,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_endenv] = anon_sym_endenv,
  [anon_sym_hasSection] = anon_sym_hasSection,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_sectionMissing] = anon_sym_sectionMissing,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_endsession] = anon_sym_endsession,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_endswitch] = anon_sym_endswitch,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_endforeach] = anon_sym_endforeach,
  [anon_sym_forelse] = anon_sym_forelse,
  [anon_sym_endforelse] = anon_sym_endforelse,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_endwhile] = anon_sym_endwhile,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_includeIf] = anon_sym_includeIf,
  [anon_sym_includeWhen] = anon_sym_includeWhen,
  [anon_sym_includeUnless] = anon_sym_includeUnless,
  [anon_sym_includeFirst] = anon_sym_includeFirst,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_once] = anon_sym_once,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pushIf] = anon_sym_pushIf,
  [anon_sym_endPushIf] = anon_sym_endPushIf,
  [anon_sym_endpush] = anon_sym_endpush,
  [anon_sym_endonce] = anon_sym_endonce,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_pushOnce] = anon_sym_pushOnce,
  [anon_sym_endPushOnce] = anon_sym_endPushOnce,
  [anon_sym_prependOnce] = anon_sym_prependOnce,
  [anon_sym_endPrependOnce] = anon_sym_endPrependOnce,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_enderror] = anon_sym_enderror,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_checked] = anon_sym_checked,
  [anon_sym_selected] = anon_sym_selected,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = anon_sym_LBRACE_LBRACE_BANG_BANG,
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = anon_sym_BANG_BANG_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = anon_sym_LBRACE_LBRACE_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = anon_sym_DASH_DASH_RBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_expression_attribute_token1] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__expression_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__expression_attribute_value_token2] = sym_attribute_value,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [sym_entity] = sym_entity,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token2,
  [anon_sym_AT_LBRACE_LBRACE] = anon_sym_AT_LBRACE_LBRACE,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_argument_php_text] = sym_raw_text,
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
  [sym__node] = sym__node,
  [sym_php_directive] = sym_php_directive,
  [sym_directive] = sym_directive,
  [sym_directive_argument] = sym_directive_argument,
  [sym__directive_argument] = sym__directive_argument,
  [sym_directive_attribute] = sym_directive,
  [sym_directive_attribute_value] = sym_directive,
  [sym__directive] = sym__directive,
  [sym__directive_attribute] = sym__directive_attribute,
  [sym__directive_attribute_value] = sym__directive_attribute_value,
  [sym_echo_statement] = sym_echo_statement,
  [sym_escaped_echo_statement] = sym_escaped_echo_statement,
  [sym_unescaped_echo_statement] = sym_unescaped_echo_statement,
  [sym_blade_comment] = sym_blade_comment,
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
  [sym__attribute] = sym__attribute,
  [sym_expression_attribute] = sym_expression_attribute,
  [sym__expression_attribute_value] = sym_quoted_attribute_value,
  [sym_attribute_value] = sym_attribute_value,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__quoted_attribute_value] = sym__quoted_attribute_value,
  [sym_text] = sym_text,
  [sym__text] = sym__text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_php_directive_repeat1] = aux_sym_php_directive_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_quoted_attribute_value_repeat1] = aux_sym_quoted_attribute_value_repeat1,
  [aux_sym_quoted_attribute_value_repeat2] = aux_sym_quoted_attribute_value_repeat2,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_php] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_php_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATendphp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csrf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_props] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endunless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endisset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endauth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endguest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_production] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endproduction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasSection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sectionMissing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsession] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endforeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endforelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeWhen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeUnless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeFirst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_once] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPushIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPushOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prependOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPrependOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enderror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = {
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
  [aux_sym_expression_attribute_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_attribute_value_token2] = {
    .visible = true,
    .named = true,
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
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_argument_php_text] = {
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
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_php_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_attribute_value] = {
    .visible = false,
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
  [sym_blade_comment] = {
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
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_attribute_value] = {
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
  [sym__quoted_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_php_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_raw_text,
  },
  [2] = {
    [2] = sym_raw_text,
  },
  [3] = {
    [1] = sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_php_directive_repeat1, 2,
    aux_sym_php_directive_repeat1,
    sym_raw_text,
  aux_sym_quoted_attribute_value_repeat1, 2,
    aux_sym_quoted_attribute_value_repeat1,
    sym_attribute_value,
  aux_sym_quoted_attribute_value_repeat2, 2,
    aux_sym_quoted_attribute_value_repeat2,
    sym_attribute_value,
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
  [10] = 9,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 28,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 53,
  [58] = 35,
  [59] = 51,
  [60] = 50,
  [61] = 47,
  [62] = 62,
  [63] = 52,
  [64] = 45,
  [65] = 27,
  [66] = 38,
  [67] = 48,
  [68] = 46,
  [69] = 44,
  [70] = 43,
  [71] = 36,
  [72] = 34,
  [73] = 32,
  [74] = 74,
  [75] = 42,
  [76] = 37,
  [77] = 62,
  [78] = 41,
  [79] = 40,
  [80] = 49,
  [81] = 81,
  [82] = 82,
  [83] = 29,
  [84] = 33,
  [85] = 31,
  [86] = 30,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 32,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 62,
  [100] = 97,
  [101] = 35,
  [102] = 54,
  [103] = 40,
  [104] = 51,
  [105] = 36,
  [106] = 91,
  [107] = 107,
  [108] = 34,
  [109] = 109,
  [110] = 107,
  [111] = 111,
  [112] = 112,
  [113] = 36,
  [114] = 51,
  [115] = 109,
  [116] = 98,
  [117] = 92,
  [118] = 95,
  [119] = 111,
  [120] = 62,
  [121] = 32,
  [122] = 96,
  [123] = 34,
  [124] = 93,
  [125] = 35,
  [126] = 40,
  [127] = 112,
  [128] = 54,
  [129] = 62,
  [130] = 32,
  [131] = 36,
  [132] = 51,
  [133] = 34,
  [134] = 51,
  [135] = 32,
  [136] = 34,
  [137] = 54,
  [138] = 40,
  [139] = 35,
  [140] = 54,
  [141] = 35,
  [142] = 142,
  [143] = 62,
  [144] = 142,
  [145] = 40,
  [146] = 36,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 154,
  [156] = 153,
  [157] = 149,
  [158] = 150,
  [159] = 159,
  [160] = 160,
  [161] = 151,
  [162] = 154,
  [163] = 153,
  [164] = 164,
  [165] = 149,
  [166] = 151,
  [167] = 159,
  [168] = 151,
  [169] = 169,
  [170] = 160,
  [171] = 154,
  [172] = 172,
  [173] = 153,
  [174] = 149,
  [175] = 169,
  [176] = 150,
  [177] = 177,
  [178] = 159,
  [179] = 160,
  [180] = 154,
  [181] = 153,
  [182] = 160,
  [183] = 159,
  [184] = 150,
  [185] = 152,
  [186] = 172,
  [187] = 177,
  [188] = 188,
  [189] = 149,
  [190] = 153,
  [191] = 154,
  [192] = 150,
  [193] = 150,
  [194] = 159,
  [195] = 159,
  [196] = 160,
  [197] = 188,
  [198] = 164,
  [199] = 199,
  [200] = 160,
  [201] = 149,
  [202] = 199,
  [203] = 203,
  [204] = 204,
  [205] = 204,
  [206] = 206,
  [207] = 204,
  [208] = 204,
  [209] = 204,
  [210] = 210,
  [211] = 206,
  [212] = 212,
  [213] = 213,
  [214] = 210,
  [215] = 213,
  [216] = 212,
  [217] = 217,
  [218] = 204,
  [219] = 219,
  [220] = 206,
  [221] = 206,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 226,
  [232] = 226,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 226,
  [237] = 224,
  [238] = 226,
  [239] = 226,
  [240] = 240,
  [241] = 235,
  [242] = 242,
  [243] = 242,
  [244] = 233,
  [245] = 230,
  [246] = 227,
  [247] = 223,
  [248] = 248,
  [249] = 248,
  [250] = 228,
  [251] = 240,
  [252] = 225,
  [253] = 229,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(312);
      ADVANCE_MAP(
        '!', 481,
        '"', 485,
        '&', 321,
        '\'', 485,
        '(', 327,
        ')', 485,
        '-', 482,
        '<', 410,
        '=', 485,
        '>', 316,
        '@', 318,
        '{', 486,
        '}', 483,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(402);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 419,
        '\'', 416,
        ')', 328,
        '=', 414,
        'D', 300,
        'a', 277,
        'b', 221,
        'c', 21,
        'd', 67,
        'e', 22,
        'f', 195,
        'g', 280,
        'h', 27,
        'i', 112,
        'm', 102,
        'o', 179,
        'p', 132,
        'r', 68,
        's', 69,
        'u', 170,
        'w', 134,
        'y', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '{') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(478);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(419);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(478);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(470);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(474);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(472);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(474);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(425);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(406);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(323);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(425);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(412);
      END_STATE();
    case 15:
      if (lookahead == '@') ADVANCE(324);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(190);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(150);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(192);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        'P', 223,
        'a', 283,
        'e', 168,
        'f', 198,
        'g', 284,
        'i', 114,
        'o', 188,
        'p', 226,
        's', 108,
        'u', 193,
        'w', 137,
      );
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'q') ADVANCE(281);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'j') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(350);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(379);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(380);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(376);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(378);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(345);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(365);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(360);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 287:
      if (lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 288:
      if (lookahead == 'y') ADVANCE(342);
      END_STATE();
    case 289:
      if (lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 290:
      if (lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 292:
      if (lookahead == '{') ADVANCE(479);
      END_STATE();
    case 293:
      if (lookahead == '}') ADVANCE(325);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(293);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 294:
      if (lookahead == '}') ADVANCE(409);
      END_STATE();
    case 295:
      if (lookahead == '}') ADVANCE(405);
      END_STATE();
    case 296:
      if (lookahead == '}') ADVANCE(294);
      END_STATE();
    case 297:
      if (lookahead == '}') ADVANCE(295);
      END_STATE();
    case 298:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 299:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 301:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      END_STATE();
    case 303:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 304:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 305:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(485);
      END_STATE();
    case 306:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(418);
      END_STATE();
    case 307:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(315);
      END_STATE();
    case 308:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(421);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      END_STATE();
    case 310:
      if (eof) ADVANCE(312);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == '<') ADVANCE(411);
      if (lookahead == '@') ADVANCE(319);
      if (lookahead == '{') ADVANCE(487);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(310);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(485);
      END_STATE();
    case 311:
      if (eof) ADVANCE(312);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '<') ADVANCE(411);
      if (lookahead == '>') ADVANCE(316);
      if (lookahead == '@') ADVANCE(319);
      if (lookahead == '{') ADVANCE(487);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(311);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(480);
      if (lookahead == '{') ADVANCE(292);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_php);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == '!') ADVANCE(297);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == '-') ADVANCE(296);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_php_directive_token1);
      if (lookahead == '}') ADVANCE(401);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_ATendphp);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_inject);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_fragment);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_endfragment);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_csrf);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_props);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_endunless);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_endisset);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_endempty);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_auth);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_endauth);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_guest);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_endguest);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_production);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_endproduction);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_endenv);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_hasSection);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_sectionMissing);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(194);
      if (lookahead == 'W') ADVANCE(136);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_endsession);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_endswitch);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_endforeach);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_forelse);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_endforelse);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_endwhile);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_includeIf);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_includeWhen);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_includeUnless);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_includeFirst);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_once);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(189);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_pushIf);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_endPushIf);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_endpush);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_endonce);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == 'O') ADVANCE(191);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_pushOnce);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_endPushOnce);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_prependOnce);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_endPrependOnce);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_enderror);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_selected);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '-') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(427);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_BANG_BANG_RBRACE_RBRACE);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH_DASH);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH_DASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH_DASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE_RBRACE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(313);
      if (lookahead == '/') ADVANCE(413);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_expression_attribute_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '!') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(415);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '!') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '-') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '{') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(452);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(468);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(474);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(471);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(474);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(471);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '{') ADVANCE(398);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(478);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(475);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '{') ADVANCE(478);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(475);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '{') ADVANCE(398);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE_LBRACE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(484);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(485);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(484);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(485);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '}') ADVANCE(485);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(485);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '}') ADVANCE(483);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(398);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 311, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 311, .external_lex_state = 3},
  [5] = {.lex_state = 311, .external_lex_state = 3},
  [6] = {.lex_state = 311, .external_lex_state = 3},
  [7] = {.lex_state = 311, .external_lex_state = 3},
  [8] = {.lex_state = 311, .external_lex_state = 2},
  [9] = {.lex_state = 311, .external_lex_state = 3},
  [10] = {.lex_state = 311, .external_lex_state = 2},
  [11] = {.lex_state = 311, .external_lex_state = 2},
  [12] = {.lex_state = 311, .external_lex_state = 3},
  [13] = {.lex_state = 311, .external_lex_state = 2},
  [14] = {.lex_state = 311, .external_lex_state = 3},
  [15] = {.lex_state = 13, .external_lex_state = 4},
  [16] = {.lex_state = 13, .external_lex_state = 4},
  [17] = {.lex_state = 13, .external_lex_state = 4},
  [18] = {.lex_state = 13, .external_lex_state = 4},
  [19] = {.lex_state = 13, .external_lex_state = 4},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 310, .external_lex_state = 2},
  [26] = {.lex_state = 310, .external_lex_state = 3},
  [27] = {.lex_state = 311, .external_lex_state = 3},
  [28] = {.lex_state = 311, .external_lex_state = 3},
  [29] = {.lex_state = 6, .external_lex_state = 2},
  [30] = {.lex_state = 9, .external_lex_state = 2},
  [31] = {.lex_state = 6, .external_lex_state = 2},
  [32] = {.lex_state = 311, .external_lex_state = 2},
  [33] = {.lex_state = 9, .external_lex_state = 2},
  [34] = {.lex_state = 311, .external_lex_state = 2},
  [35] = {.lex_state = 311, .external_lex_state = 2},
  [36] = {.lex_state = 311, .external_lex_state = 2},
  [37] = {.lex_state = 311, .external_lex_state = 2},
  [38] = {.lex_state = 311, .external_lex_state = 3},
  [39] = {.lex_state = 311, .external_lex_state = 2},
  [40] = {.lex_state = 311, .external_lex_state = 3},
  [41] = {.lex_state = 311, .external_lex_state = 3},
  [42] = {.lex_state = 311, .external_lex_state = 3},
  [43] = {.lex_state = 311, .external_lex_state = 2},
  [44] = {.lex_state = 311, .external_lex_state = 3},
  [45] = {.lex_state = 311, .external_lex_state = 2},
  [46] = {.lex_state = 311, .external_lex_state = 3},
  [47] = {.lex_state = 311, .external_lex_state = 2},
  [48] = {.lex_state = 311, .external_lex_state = 3},
  [49] = {.lex_state = 311, .external_lex_state = 2},
  [50] = {.lex_state = 311, .external_lex_state = 2},
  [51] = {.lex_state = 311, .external_lex_state = 2},
  [52] = {.lex_state = 311, .external_lex_state = 3},
  [53] = {.lex_state = 311, .external_lex_state = 3},
  [54] = {.lex_state = 311, .external_lex_state = 2},
  [55] = {.lex_state = 311, .external_lex_state = 3},
  [56] = {.lex_state = 311, .external_lex_state = 3},
  [57] = {.lex_state = 311, .external_lex_state = 2},
  [58] = {.lex_state = 311, .external_lex_state = 3},
  [59] = {.lex_state = 311, .external_lex_state = 3},
  [60] = {.lex_state = 311, .external_lex_state = 3},
  [61] = {.lex_state = 311, .external_lex_state = 3},
  [62] = {.lex_state = 311, .external_lex_state = 2},
  [63] = {.lex_state = 311, .external_lex_state = 2},
  [64] = {.lex_state = 311, .external_lex_state = 3},
  [65] = {.lex_state = 311, .external_lex_state = 2},
  [66] = {.lex_state = 311, .external_lex_state = 2},
  [67] = {.lex_state = 311, .external_lex_state = 2},
  [68] = {.lex_state = 311, .external_lex_state = 2},
  [69] = {.lex_state = 311, .external_lex_state = 2},
  [70] = {.lex_state = 311, .external_lex_state = 3},
  [71] = {.lex_state = 311, .external_lex_state = 3},
  [72] = {.lex_state = 311, .external_lex_state = 3},
  [73] = {.lex_state = 311, .external_lex_state = 3},
  [74] = {.lex_state = 311, .external_lex_state = 3},
  [75] = {.lex_state = 311, .external_lex_state = 2},
  [76] = {.lex_state = 311, .external_lex_state = 3},
  [77] = {.lex_state = 311, .external_lex_state = 3},
  [78] = {.lex_state = 311, .external_lex_state = 2},
  [79] = {.lex_state = 311, .external_lex_state = 2},
  [80] = {.lex_state = 311, .external_lex_state = 3},
  [81] = {.lex_state = 6, .external_lex_state = 2},
  [82] = {.lex_state = 9, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 9, .external_lex_state = 2},
  [85] = {.lex_state = 6, .external_lex_state = 2},
  [86] = {.lex_state = 9, .external_lex_state = 2},
  [87] = {.lex_state = 4, .external_lex_state = 2},
  [88] = {.lex_state = 4, .external_lex_state = 2},
  [89] = {.lex_state = 10, .external_lex_state = 4},
  [90] = {.lex_state = 10, .external_lex_state = 2},
  [91] = {.lex_state = 13, .external_lex_state = 4},
  [92] = {.lex_state = 13, .external_lex_state = 4},
  [93] = {.lex_state = 13, .external_lex_state = 4},
  [94] = {.lex_state = 13, .external_lex_state = 4},
  [95] = {.lex_state = 13, .external_lex_state = 4},
  [96] = {.lex_state = 13, .external_lex_state = 4},
  [97] = {.lex_state = 8, .external_lex_state = 2},
  [98] = {.lex_state = 13, .external_lex_state = 4},
  [99] = {.lex_state = 13, .external_lex_state = 4},
  [100] = {.lex_state = 5, .external_lex_state = 2},
  [101] = {.lex_state = 13, .external_lex_state = 4},
  [102] = {.lex_state = 13, .external_lex_state = 4},
  [103] = {.lex_state = 13, .external_lex_state = 4},
  [104] = {.lex_state = 13, .external_lex_state = 4},
  [105] = {.lex_state = 13, .external_lex_state = 4},
  [106] = {.lex_state = 13, .external_lex_state = 2},
  [107] = {.lex_state = 3, .external_lex_state = 2},
  [108] = {.lex_state = 13, .external_lex_state = 4},
  [109] = {.lex_state = 13, .external_lex_state = 4},
  [110] = {.lex_state = 3, .external_lex_state = 2},
  [111] = {.lex_state = 13, .external_lex_state = 4},
  [112] = {.lex_state = 13, .external_lex_state = 4},
  [113] = {.lex_state = 13, .external_lex_state = 2},
  [114] = {.lex_state = 13, .external_lex_state = 2},
  [115] = {.lex_state = 13, .external_lex_state = 2},
  [116] = {.lex_state = 13, .external_lex_state = 2},
  [117] = {.lex_state = 13, .external_lex_state = 2},
  [118] = {.lex_state = 13, .external_lex_state = 2},
  [119] = {.lex_state = 13, .external_lex_state = 2},
  [120] = {.lex_state = 13, .external_lex_state = 2},
  [121] = {.lex_state = 13, .external_lex_state = 2},
  [122] = {.lex_state = 13, .external_lex_state = 2},
  [123] = {.lex_state = 13, .external_lex_state = 2},
  [124] = {.lex_state = 13, .external_lex_state = 2},
  [125] = {.lex_state = 13, .external_lex_state = 2},
  [126] = {.lex_state = 13, .external_lex_state = 2},
  [127] = {.lex_state = 13, .external_lex_state = 2},
  [128] = {.lex_state = 13, .external_lex_state = 2},
  [129] = {.lex_state = 9, .external_lex_state = 2},
  [130] = {.lex_state = 6, .external_lex_state = 2},
  [131] = {.lex_state = 6, .external_lex_state = 2},
  [132] = {.lex_state = 6, .external_lex_state = 2},
  [133] = {.lex_state = 6, .external_lex_state = 2},
  [134] = {.lex_state = 9, .external_lex_state = 2},
  [135] = {.lex_state = 9, .external_lex_state = 2},
  [136] = {.lex_state = 9, .external_lex_state = 2},
  [137] = {.lex_state = 9, .external_lex_state = 2},
  [138] = {.lex_state = 9, .external_lex_state = 2},
  [139] = {.lex_state = 6, .external_lex_state = 2},
  [140] = {.lex_state = 6, .external_lex_state = 2},
  [141] = {.lex_state = 9, .external_lex_state = 2},
  [142] = {.lex_state = 9, .external_lex_state = 2},
  [143] = {.lex_state = 6, .external_lex_state = 2},
  [144] = {.lex_state = 6, .external_lex_state = 2},
  [145] = {.lex_state = 6, .external_lex_state = 2},
  [146] = {.lex_state = 9, .external_lex_state = 2},
  [147] = {.lex_state = 6, .external_lex_state = 2},
  [148] = {.lex_state = 9, .external_lex_state = 2},
  [149] = {.lex_state = 293, .external_lex_state = 2},
  [150] = {.lex_state = 12, .external_lex_state = 2},
  [151] = {.lex_state = 12, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 2, .external_lex_state = 2},
  [154] = {.lex_state = 12, .external_lex_state = 2},
  [155] = {.lex_state = 12, .external_lex_state = 2},
  [156] = {.lex_state = 2, .external_lex_state = 2},
  [157] = {.lex_state = 293, .external_lex_state = 2},
  [158] = {.lex_state = 12, .external_lex_state = 2},
  [159] = {.lex_state = 2, .external_lex_state = 2},
  [160] = {.lex_state = 293, .external_lex_state = 2},
  [161] = {.lex_state = 15, .external_lex_state = 2},
  [162] = {.lex_state = 12, .external_lex_state = 2},
  [163] = {.lex_state = 2, .external_lex_state = 2},
  [164] = {.lex_state = 15, .external_lex_state = 2},
  [165] = {.lex_state = 293, .external_lex_state = 2},
  [166] = {.lex_state = 293, .external_lex_state = 2},
  [167] = {.lex_state = 2, .external_lex_state = 2},
  [168] = {.lex_state = 2, .external_lex_state = 2},
  [169] = {.lex_state = 3, .external_lex_state = 2},
  [170] = {.lex_state = 293, .external_lex_state = 2},
  [171] = {.lex_state = 12, .external_lex_state = 2},
  [172] = {.lex_state = 311, .external_lex_state = 6},
  [173] = {.lex_state = 2, .external_lex_state = 2},
  [174] = {.lex_state = 293, .external_lex_state = 2},
  [175] = {.lex_state = 3, .external_lex_state = 2},
  [176] = {.lex_state = 12, .external_lex_state = 2},
  [177] = {.lex_state = 311, .external_lex_state = 6},
  [178] = {.lex_state = 2, .external_lex_state = 2},
  [179] = {.lex_state = 293, .external_lex_state = 2},
  [180] = {.lex_state = 12, .external_lex_state = 2},
  [181] = {.lex_state = 2, .external_lex_state = 2},
  [182] = {.lex_state = 293, .external_lex_state = 2},
  [183] = {.lex_state = 2, .external_lex_state = 2},
  [184] = {.lex_state = 12, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 5},
  [186] = {.lex_state = 311, .external_lex_state = 6},
  [187] = {.lex_state = 311, .external_lex_state = 6},
  [188] = {.lex_state = 15, .external_lex_state = 2},
  [189] = {.lex_state = 293, .external_lex_state = 2},
  [190] = {.lex_state = 2, .external_lex_state = 2},
  [191] = {.lex_state = 12, .external_lex_state = 2},
  [192] = {.lex_state = 12, .external_lex_state = 2},
  [193] = {.lex_state = 12, .external_lex_state = 2},
  [194] = {.lex_state = 2, .external_lex_state = 2},
  [195] = {.lex_state = 2, .external_lex_state = 2},
  [196] = {.lex_state = 293, .external_lex_state = 2},
  [197] = {.lex_state = 15, .external_lex_state = 2},
  [198] = {.lex_state = 15, .external_lex_state = 2},
  [199] = {.lex_state = 3, .external_lex_state = 2},
  [200] = {.lex_state = 293, .external_lex_state = 2},
  [201] = {.lex_state = 293, .external_lex_state = 2},
  [202] = {.lex_state = 3, .external_lex_state = 2},
  [203] = {.lex_state = 311, .external_lex_state = 6},
  [204] = {.lex_state = 0, .external_lex_state = 7},
  [205] = {.lex_state = 0, .external_lex_state = 7},
  [206] = {.lex_state = 293, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 7},
  [208] = {.lex_state = 0, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 7},
  [210] = {.lex_state = 0, .external_lex_state = 8},
  [211] = {.lex_state = 15, .external_lex_state = 2},
  [212] = {.lex_state = 311, .external_lex_state = 2},
  [213] = {.lex_state = 311, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 8},
  [215] = {.lex_state = 311, .external_lex_state = 2},
  [216] = {.lex_state = 311, .external_lex_state = 2},
  [217] = {.lex_state = 311, .external_lex_state = 6},
  [218] = {.lex_state = 0, .external_lex_state = 7},
  [219] = {.lex_state = 311, .external_lex_state = 6},
  [220] = {.lex_state = 12, .external_lex_state = 2},
  [221] = {.lex_state = 2, .external_lex_state = 2},
  [222] = {.lex_state = 311, .external_lex_state = 6},
  [223] = {.lex_state = 306, .external_lex_state = 2},
  [224] = {.lex_state = 311, .external_lex_state = 2},
  [225] = {.lex_state = 311, .external_lex_state = 2},
  [226] = {.lex_state = 3, .external_lex_state = 2},
  [227] = {.lex_state = 3, .external_lex_state = 2},
  [228] = {.lex_state = 3, .external_lex_state = 2},
  [229] = {.lex_state = 3, .external_lex_state = 2},
  [230] = {.lex_state = 311, .external_lex_state = 2},
  [231] = {.lex_state = 3, .external_lex_state = 2},
  [232] = {.lex_state = 3, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 9},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 10},
  [236] = {.lex_state = 3, .external_lex_state = 2},
  [237] = {.lex_state = 311, .external_lex_state = 2},
  [238] = {.lex_state = 3, .external_lex_state = 2},
  [239] = {.lex_state = 3, .external_lex_state = 2},
  [240] = {.lex_state = 3, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 10},
  [242] = {.lex_state = 307, .external_lex_state = 2},
  [243] = {.lex_state = 307, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 9},
  [245] = {.lex_state = 311, .external_lex_state = 2},
  [246] = {.lex_state = 3, .external_lex_state = 2},
  [247] = {.lex_state = 306, .external_lex_state = 2},
  [248] = {.lex_state = 308, .external_lex_state = 2},
  [249] = {.lex_state = 308, .external_lex_state = 2},
  [250] = {.lex_state = 3, .external_lex_state = 2},
  [251] = {.lex_state = 3, .external_lex_state = 2},
  [252] = {.lex_state = 311, .external_lex_state = 2},
  [253] = {.lex_state = 3, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_php_directive_token1] = ACTIONS(1),
    [anon_sym_ATendphp] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_BANG_BANG_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_DASH_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_argument_php_text] = ACTIONS(1),
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
    [sym_document] = STATE(234),
    [sym_doctype] = STATE(8),
    [sym__node] = STATE(8),
    [sym_php_directive] = STATE(49),
    [sym_directive] = STATE(8),
    [sym_echo_statement] = STATE(13),
    [sym_escaped_echo_statement] = STATE(62),
    [sym_unescaped_echo_statement] = STATE(62),
    [sym_blade_comment] = STATE(62),
    [sym_element] = STATE(8),
    [sym_script_element] = STATE(8),
    [sym_style_element] = STATE(8),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(172),
    [sym_style_start_tag] = STATE(177),
    [sym_self_closing_tag] = STATE(37),
    [sym_erroneous_end_tag] = STATE(8),
    [sym_text] = STATE(8),
    [sym__text] = STATE(13),
    [aux_sym_document_repeat1] = STATE(8),
    [aux_sym_text_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE_BANG_BANG] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE_DASH_DASH] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_SLASH] = ACTIONS(19),
    [sym_entity] = ACTIONS(21),
    [anon_sym_AT_LBRACE_LBRACE] = ACTIONS(23),
    [anon_sym_AT_AT] = ACTIONS(23),
    [aux_sym__text_token1] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__directive] = STATE(26),
    [anon_sym_php] = ACTIONS(27),
    [anon_sym_inject] = ACTIONS(29),
    [anon_sym_fragment] = ACTIONS(29),
    [anon_sym_endfragment] = ACTIONS(29),
    [anon_sym_csrf] = ACTIONS(29),
    [anon_sym_method] = ACTIONS(29),
    [anon_sym_props] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_else] = ACTIONS(29),
    [anon_sym_endif] = ACTIONS(29),
    [anon_sym_unless] = ACTIONS(29),
    [anon_sym_endunless] = ACTIONS(29),
    [anon_sym_isset] = ACTIONS(29),
    [anon_sym_endisset] = ACTIONS(29),
    [anon_sym_empty] = ACTIONS(29),
    [anon_sym_endempty] = ACTIONS(29),
    [anon_sym_auth] = ACTIONS(29),
    [anon_sym_endauth] = ACTIONS(29),
    [anon_sym_guest] = ACTIONS(29),
    [anon_sym_endguest] = ACTIONS(29),
    [anon_sym_production] = ACTIONS(29),
    [anon_sym_endproduction] = ACTIONS(29),
    [anon_sym_env] = ACTIONS(29),
    [anon_sym_endenv] = ACTIONS(29),
    [anon_sym_hasSection] = ACTIONS(29),
    [anon_sym_yield] = ACTIONS(29),
    [anon_sym_sectionMissing] = ACTIONS(29),
    [anon_sym_include] = ACTIONS(31),
    [anon_sym_session] = ACTIONS(29),
    [anon_sym_endsession] = ACTIONS(29),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(29),
    [anon_sym_endswitch] = ACTIONS(29),
    [anon_sym_for] = ACTIONS(31),
    [anon_sym_endfor] = ACTIONS(31),
    [anon_sym_foreach] = ACTIONS(29),
    [anon_sym_endforeach] = ACTIONS(29),
    [anon_sym_forelse] = ACTIONS(29),
    [anon_sym_endforelse] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_endwhile] = ACTIONS(29),
    [anon_sym_continue] = ACTIONS(29),
    [anon_sym_includeIf] = ACTIONS(29),
    [anon_sym_includeWhen] = ACTIONS(29),
    [anon_sym_includeUnless] = ACTIONS(29),
    [anon_sym_includeFirst] = ACTIONS(29),
    [anon_sym_each] = ACTIONS(29),
    [anon_sym_once] = ACTIONS(29),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pushIf] = ACTIONS(29),
    [anon_sym_endPushIf] = ACTIONS(29),
    [anon_sym_endpush] = ACTIONS(29),
    [anon_sym_endonce] = ACTIONS(29),
    [anon_sym_prepend] = ACTIONS(31),
    [anon_sym_pushOnce] = ACTIONS(29),
    [anon_sym_endPushOnce] = ACTIONS(29),
    [anon_sym_prependOnce] = ACTIONS(29),
    [anon_sym_endPrependOnce] = ACTIONS(29),
    [anon_sym_error] = ACTIONS(29),
    [anon_sym_enderror] = ACTIONS(29),
    [anon_sym_use] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__directive] = STATE(25),
    [anon_sym_php] = ACTIONS(33),
    [anon_sym_inject] = ACTIONS(35),
    [anon_sym_fragment] = ACTIONS(35),
    [anon_sym_endfragment] = ACTIONS(35),
    [anon_sym_csrf] = ACTIONS(35),
    [anon_sym_method] = ACTIONS(35),
    [anon_sym_props] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_else] = ACTIONS(35),
    [anon_sym_endif] = ACTIONS(35),
    [anon_sym_unless] = ACTIONS(35),
    [anon_sym_endunless] = ACTIONS(35),
    [anon_sym_isset] = ACTIONS(35),
    [anon_sym_endisset] = ACTIONS(35),
    [anon_sym_empty] = ACTIONS(35),
    [anon_sym_endempty] = ACTIONS(35),
    [anon_sym_auth] = ACTIONS(35),
    [anon_sym_endauth] = ACTIONS(35),
    [anon_sym_guest] = ACTIONS(35),
    [anon_sym_endguest] = ACTIONS(35),
    [anon_sym_production] = ACTIONS(35),
    [anon_sym_endproduction] = ACTIONS(35),
    [anon_sym_env] = ACTIONS(35),
    [anon_sym_endenv] = ACTIONS(35),
    [anon_sym_hasSection] = ACTIONS(35),
    [anon_sym_yield] = ACTIONS(35),
    [anon_sym_sectionMissing] = ACTIONS(35),
    [anon_sym_include] = ACTIONS(37),
    [anon_sym_session] = ACTIONS(35),
    [anon_sym_endsession] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(35),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_break] = ACTIONS(35),
    [anon_sym_default] = ACTIONS(35),
    [anon_sym_endswitch] = ACTIONS(35),
    [anon_sym_for] = ACTIONS(37),
    [anon_sym_endfor] = ACTIONS(37),
    [anon_sym_foreach] = ACTIONS(35),
    [anon_sym_endforeach] = ACTIONS(35),
    [anon_sym_forelse] = ACTIONS(35),
    [anon_sym_endforelse] = ACTIONS(35),
    [anon_sym_while] = ACTIONS(35),
    [anon_sym_endwhile] = ACTIONS(35),
    [anon_sym_continue] = ACTIONS(35),
    [anon_sym_includeIf] = ACTIONS(35),
    [anon_sym_includeWhen] = ACTIONS(35),
    [anon_sym_includeUnless] = ACTIONS(35),
    [anon_sym_includeFirst] = ACTIONS(35),
    [anon_sym_each] = ACTIONS(35),
    [anon_sym_once] = ACTIONS(35),
    [anon_sym_push] = ACTIONS(37),
    [anon_sym_pushIf] = ACTIONS(35),
    [anon_sym_endPushIf] = ACTIONS(35),
    [anon_sym_endpush] = ACTIONS(35),
    [anon_sym_endonce] = ACTIONS(35),
    [anon_sym_prepend] = ACTIONS(37),
    [anon_sym_pushOnce] = ACTIONS(35),
    [anon_sym_endPushOnce] = ACTIONS(35),
    [anon_sym_prependOnce] = ACTIONS(35),
    [anon_sym_endPrependOnce] = ACTIONS(35),
    [anon_sym_error] = ACTIONS(35),
    [anon_sym_enderror] = ACTIONS(35),
    [anon_sym_use] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LT_BANG,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(53), 1,
      sym_entity,
    ACTIONS(59), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_end_tag,
    STATE(76), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_php_directive,
    STATE(186), 1,
      sym_script_start_tag,
    STATE(187), 1,
      sym_style_start_tag,
    ACTIONS(55), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(57), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(77), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(6), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [78] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LT_BANG,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_entity,
    ACTIONS(65), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(28), 1,
      sym_end_tag,
    STATE(76), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_php_directive,
    STATE(186), 1,
      sym_script_start_tag,
    STATE(187), 1,
      sym_style_start_tag,
    ACTIONS(55), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(57), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(77), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(7), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [156] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LT_BANG,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(67), 1,
      sym_entity,
    ACTIONS(69), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(65), 1,
      sym_end_tag,
    STATE(76), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_php_directive,
    STATE(186), 1,
      sym_script_start_tag,
    STATE(187), 1,
      sym_style_start_tag,
    ACTIONS(55), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(57), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(77), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(9), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [234] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LT_BANG,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(49), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    ACTIONS(67), 1,
      sym_entity,
    ACTIONS(71), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(27), 1,
      sym_end_tag,
    STATE(76), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_php_directive,
    STATE(186), 1,
      sym_script_start_tag,
    STATE(187), 1,
      sym_style_start_tag,
    ACTIONS(55), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(57), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(77), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(9), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [312] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_entity,
    STATE(4), 1,
      sym_start_tag,
    STATE(37), 1,
      sym_self_closing_tag,
    STATE(49), 1,
      sym_php_directive,
    STATE(172), 1,
      sym_script_start_tag,
    STATE(177), 1,
      sym_style_start_tag,
    ACTIONS(23), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(25), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(62), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(10), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [387] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LT_BANG,
    ACTIONS(80), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(86), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(95), 1,
      anon_sym_LT_SLASH,
    ACTIONS(98), 1,
      sym_entity,
    ACTIONS(107), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(76), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_php_directive,
    STATE(186), 1,
      sym_script_start_tag,
    STATE(187), 1,
      sym_style_start_tag,
    ACTIONS(101), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(104), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(77), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(9), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [462] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_LT_BANG,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(118), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(121), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(124), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      anon_sym_LT_SLASH,
    ACTIONS(130), 1,
      sym_entity,
    STATE(4), 1,
      sym_start_tag,
    STATE(37), 1,
      sym_self_closing_tag,
    STATE(49), 1,
      sym_php_directive,
    STATE(172), 1,
      sym_script_start_tag,
    STATE(177), 1,
      sym_style_start_tag,
    ACTIONS(133), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(136), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(62), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(10), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [537] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(146), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(141), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(152), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(155), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(11), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(62), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [578] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(164), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(141), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(167), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(170), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(77), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(139), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [619] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(175), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(179), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(11), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(62), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [660] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(47), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(175), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(181), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(183), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(77), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(173), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [701] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_GT,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(193), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(195), 1,
      anon_sym_SLASH_GT,
    ACTIONS(197), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(199), 1,
      sym_attribute_name,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(99), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(19), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [744] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(193), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(197), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(199), 1,
      sym_attribute_name,
    ACTIONS(201), 1,
      anon_sym_GT,
    ACTIONS(203), 1,
      anon_sym_SLASH_GT,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(99), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(18), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [787] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_GT,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(193), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(197), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(199), 1,
      sym_attribute_name,
    ACTIONS(205), 1,
      anon_sym_SLASH_GT,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(99), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(16), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [830] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(212), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(215), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(218), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(221), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(224), 1,
      sym_attribute_name,
    STATE(93), 1,
      sym_expression_attribute,
    ACTIONS(207), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(99), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(18), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [871] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(193), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(197), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(199), 1,
      sym_attribute_name,
    ACTIONS(201), 1,
      anon_sym_GT,
    ACTIONS(227), 1,
      anon_sym_SLASH_GT,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(99), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(18), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [914] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_GT,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(237), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(239), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(241), 1,
      sym_attribute_name,
    STATE(124), 1,
      sym_expression_attribute,
    STATE(120), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(22), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [954] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(237), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(239), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(241), 1,
      sym_attribute_name,
    ACTIONS(243), 1,
      anon_sym_GT,
    STATE(124), 1,
      sym_expression_attribute,
    STATE(120), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(24), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [994] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(237), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(239), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(241), 1,
      sym_attribute_name,
    ACTIONS(245), 1,
      anon_sym_GT,
    STATE(124), 1,
      sym_expression_attribute,
    STATE(120), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(23), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1034] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_GT,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(250), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(253), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(256), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(259), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(262), 1,
      sym_attribute_name,
    STATE(124), 1,
      sym_expression_attribute,
    STATE(120), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(23), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1074] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(237), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(239), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(241), 1,
      sym_attribute_name,
    ACTIONS(265), 1,
      anon_sym_GT,
    STATE(124), 1,
      sym_expression_attribute,
    STATE(120), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(23), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_directive_argument,
    ACTIONS(269), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_directive_argument,
    ACTIONS(269), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(267), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(275), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(279), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1210] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(289), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(81), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(143), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(147), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [1245] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(301), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(82), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(148), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [1280] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(289), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(293), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(143), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(147), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [1315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(307), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1336] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(301), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(148), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [1371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(319), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(323), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(327), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(279), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(331), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(335), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(339), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(343), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(347), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(351), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(355), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(359), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(363), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(367), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(371), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(375), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(379), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(383), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(391), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(387), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(383), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(315), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(375), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(371), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(359), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(351), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(275), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(327), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(363), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(355), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(347), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(343), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(319), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(311), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(307), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(399), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(339), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(323), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(395), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(335), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(331), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(367), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2358] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(409), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(412), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(81), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(143), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(147), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2393] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_AT,
    ACTIONS(423), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(429), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    ACTIONS(434), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(82), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(148), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2428] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(289), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(293), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(437), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(143), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(147), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2463] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(301), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(439), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(148), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2498] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(289), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(293), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(143), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(147), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2533] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(301), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(437), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(148), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2568] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(237), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(441), 1,
      anon_sym_SQUOTE,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    ACTIONS(445), 1,
      aux_sym_attribute_value_token1,
    STATE(117), 1,
      sym_echo_statement,
    STATE(127), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
    STATE(120), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2602] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(193), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      aux_sym_attribute_value_token1,
    STATE(92), 1,
      sym_echo_statement,
    STATE(112), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
    STATE(99), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_directive_argument,
    ACTIONS(453), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(457), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_directive_argument,
    ACTIONS(453), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(457), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_EQ,
    ACTIONS(461), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(463), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(469), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(463), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(309), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(473), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(477), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_directive_argument,
    ACTIONS(479), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [2796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(485), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(397), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_directive_argument,
    ACTIONS(479), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(317), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(389), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(333), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(377), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(321), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(461), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(463), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(89), 1,
      sym__directive_attribute,
    ACTIONS(491), 7,
      anon_sym_style,
      anon_sym_class,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [2960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(313), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(495), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(90), 1,
      sym__directive_attribute,
    ACTIONS(497), 7,
      anon_sym_style,
      anon_sym_class,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [3008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(501), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(505), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(321), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(377), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(495), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(485), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(469), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(473), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(501), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(397), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(309), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(477), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(313), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(463), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(317), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(333), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(505), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(389), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(515), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_php_directive_repeat1,
  [3533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(162), 1,
      aux_sym_php_directive_repeat1,
  [3546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      aux_sym_php_directive_token1,
    ACTIONS(524), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_php_directive_repeat1,
  [3559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym__start_tag_name,
    ACTIONS(528), 1,
      sym__script_start_tag_name,
    ACTIONS(530), 1,
      sym__style_start_tag_name,
  [3572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(534), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_php_directive_repeat1,
  [3585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(536), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_php_directive_repeat1,
  [3598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(538), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_php_directive_repeat1,
  [3611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(540), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_php_directive_repeat1,
  [3624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(542), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_php_directive_repeat1,
  [3637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(544), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(155), 1,
      aux_sym_php_directive_repeat1,
  [3650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(546), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(156), 1,
      aux_sym_php_directive_repeat1,
  [3663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(548), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(157), 1,
      aux_sym_php_directive_repeat1,
  [3676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_ATendphp,
    ACTIONS(550), 1,
      aux_sym_php_directive_token1,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [3689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(553), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_php_directive_repeat1,
  [3702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(555), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_php_directive_repeat1,
  [3715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_php_directive_token1,
    ACTIONS(559), 1,
      anon_sym_ATendphp,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [3728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(561), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_php_directive_repeat1,
  [3741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(563), 1,
      aux_sym_php_directive_token1,
    STATE(166), 1,
      aux_sym_php_directive_repeat1,
  [3754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(566), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(163), 1,
      aux_sym_php_directive_repeat1,
  [3767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(568), 1,
      aux_sym_php_directive_token1,
    STATE(168), 1,
      aux_sym_php_directive_repeat1,
  [3780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym__expression_attribute_value,
  [3793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(575), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(165), 1,
      aux_sym_php_directive_repeat1,
  [3806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(577), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_php_directive_repeat1,
  [3819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LT_SLASH,
    ACTIONS(581), 1,
      sym_raw_text,
    STATE(43), 1,
      sym_end_tag,
  [3832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(583), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_php_directive_repeat1,
  [3845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(585), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_php_directive_repeat1,
  [3858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym__expression_attribute_value,
  [3871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(591), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_php_directive_repeat1,
  [3884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LT_SLASH,
    ACTIONS(593), 1,
      sym_raw_text,
    STATE(45), 1,
      sym_end_tag,
  [3897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(595), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(173), 1,
      aux_sym_php_directive_repeat1,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(597), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(174), 1,
      aux_sym_php_directive_repeat1,
  [3923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(599), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_php_directive_repeat1,
  [3936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(601), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_php_directive_repeat1,
  [3949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(603), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(149), 1,
      aux_sym_php_directive_repeat1,
  [3962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(605), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(190), 1,
      aux_sym_php_directive_repeat1,
  [3975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(607), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(191), 1,
      aux_sym_php_directive_repeat1,
  [3988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__script_start_tag_name,
    ACTIONS(530), 1,
      sym__style_start_tag_name,
    ACTIONS(609), 1,
      sym__start_tag_name,
  [4001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LT_SLASH,
    ACTIONS(613), 1,
      sym_raw_text,
    STATE(70), 1,
      sym_end_tag,
  [4014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LT_SLASH,
    ACTIONS(615), 1,
      sym_raw_text,
    STATE(64), 1,
      sym_end_tag,
  [4027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_php_directive_token1,
    ACTIONS(617), 1,
      anon_sym_ATendphp,
    STATE(198), 1,
      aux_sym_php_directive_repeat1,
  [4040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(619), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_php_directive_repeat1,
  [4053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(621), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(168), 1,
      aux_sym_php_directive_repeat1,
  [4066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(623), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_php_directive_repeat1,
  [4079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(625), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_php_directive_repeat1,
  [4092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym_php_directive_token1,
    ACTIONS(627), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym_php_directive_repeat1,
  [4105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(629), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(153), 1,
      aux_sym_php_directive_repeat1,
  [4118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      aux_sym_php_directive_token1,
    ACTIONS(631), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(181), 1,
      aux_sym_php_directive_repeat1,
  [4131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(633), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(189), 1,
      aux_sym_php_directive_repeat1,
  [4144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_php_directive_token1,
    ACTIONS(635), 1,
      anon_sym_ATendphp,
    STATE(164), 1,
      aux_sym_php_directive_repeat1,
  [4157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_php_directive_token1,
    ACTIONS(637), 1,
      anon_sym_ATendphp,
    STATE(161), 1,
      aux_sym_php_directive_repeat1,
  [4170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym__directive_attribute_value,
    ACTIONS(639), 2,
      anon_sym_error,
      anon_sym_enderror,
  [4181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(641), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(201), 1,
      aux_sym_php_directive_repeat1,
  [4194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      aux_sym_php_directive_token1,
    ACTIONS(643), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_php_directive_repeat1,
  [4207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(97), 1,
      sym__directive_attribute_value,
    ACTIONS(645), 2,
      anon_sym_error,
      anon_sym_enderror,
  [4218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_argument_php_text,
    STATE(239), 1,
      sym__directive_argument,
  [4236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym_argument_php_text,
    STATE(232), 1,
      sym__directive_argument,
  [4246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_php_directive_token1,
    ACTIONS(655), 1,
      anon_sym_RBRACE_RBRACE,
  [4256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym_argument_php_text,
    STATE(226), 1,
      sym__directive_argument,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_argument_php_text,
    STATE(231), 1,
      sym__directive_argument,
  [4276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_argument_php_text,
    STATE(236), 1,
      sym__directive_argument,
  [4286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__end_tag_name,
    ACTIONS(665), 1,
      sym_erroneous_end_tag_name,
  [4296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_php_directive_token1,
    ACTIONS(655), 1,
      anon_sym_ATendphp,
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LT_SLASH,
    STATE(48), 1,
      sym_end_tag,
  [4316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LT_SLASH,
    STATE(38), 1,
      sym_end_tag,
  [4326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(667), 1,
      sym__end_tag_name,
  [4336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LT_SLASH,
    STATE(66), 1,
      sym_end_tag,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LT_SLASH,
    STATE(67), 1,
      sym_end_tag,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym_argument_php_text,
    STATE(238), 1,
      sym__directive_argument,
  [4374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_php_directive_token1,
    ACTIONS(655), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
  [4392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_php_directive_token1,
    ACTIONS(655), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [4402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      aux_sym__expression_attribute_value_token1,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_GT,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_GT,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
  [4438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_EQ,
  [4445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_DQUOTE,
  [4452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym__doctype,
  [4459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
  [4466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [4473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym__end_tag_name,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      ts_builtin_sym_end,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_erroneous_end_tag_name,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [4508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_GT,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [4522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [4529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_erroneous_end_tag_name,
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      aux_sym_doctype_token1,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      aux_sym_doctype_token1,
  [4557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__end_tag_name,
  [4564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_GT,
  [4571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_EQ,
  [4578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      aux_sym__expression_attribute_value_token1,
  [4585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      aux_sym__expression_attribute_value_token2,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym__expression_attribute_value_token2,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
  [4606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SQUOTE,
  [4613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_GT,
  [4620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 234,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 387,
  [SMALL_STATE(10)] = 462,
  [SMALL_STATE(11)] = 537,
  [SMALL_STATE(12)] = 578,
  [SMALL_STATE(13)] = 619,
  [SMALL_STATE(14)] = 660,
  [SMALL_STATE(15)] = 701,
  [SMALL_STATE(16)] = 744,
  [SMALL_STATE(17)] = 787,
  [SMALL_STATE(18)] = 830,
  [SMALL_STATE(19)] = 871,
  [SMALL_STATE(20)] = 914,
  [SMALL_STATE(21)] = 954,
  [SMALL_STATE(22)] = 994,
  [SMALL_STATE(23)] = 1034,
  [SMALL_STATE(24)] = 1074,
  [SMALL_STATE(25)] = 1114,
  [SMALL_STATE(26)] = 1141,
  [SMALL_STATE(27)] = 1168,
  [SMALL_STATE(28)] = 1189,
  [SMALL_STATE(29)] = 1210,
  [SMALL_STATE(30)] = 1245,
  [SMALL_STATE(31)] = 1280,
  [SMALL_STATE(32)] = 1315,
  [SMALL_STATE(33)] = 1336,
  [SMALL_STATE(34)] = 1371,
  [SMALL_STATE(35)] = 1392,
  [SMALL_STATE(36)] = 1413,
  [SMALL_STATE(37)] = 1434,
  [SMALL_STATE(38)] = 1455,
  [SMALL_STATE(39)] = 1476,
  [SMALL_STATE(40)] = 1497,
  [SMALL_STATE(41)] = 1518,
  [SMALL_STATE(42)] = 1539,
  [SMALL_STATE(43)] = 1560,
  [SMALL_STATE(44)] = 1581,
  [SMALL_STATE(45)] = 1602,
  [SMALL_STATE(46)] = 1623,
  [SMALL_STATE(47)] = 1644,
  [SMALL_STATE(48)] = 1665,
  [SMALL_STATE(49)] = 1686,
  [SMALL_STATE(50)] = 1707,
  [SMALL_STATE(51)] = 1728,
  [SMALL_STATE(52)] = 1749,
  [SMALL_STATE(53)] = 1770,
  [SMALL_STATE(54)] = 1791,
  [SMALL_STATE(55)] = 1812,
  [SMALL_STATE(56)] = 1833,
  [SMALL_STATE(57)] = 1854,
  [SMALL_STATE(58)] = 1875,
  [SMALL_STATE(59)] = 1896,
  [SMALL_STATE(60)] = 1917,
  [SMALL_STATE(61)] = 1938,
  [SMALL_STATE(62)] = 1959,
  [SMALL_STATE(63)] = 1980,
  [SMALL_STATE(64)] = 2001,
  [SMALL_STATE(65)] = 2022,
  [SMALL_STATE(66)] = 2043,
  [SMALL_STATE(67)] = 2064,
  [SMALL_STATE(68)] = 2085,
  [SMALL_STATE(69)] = 2106,
  [SMALL_STATE(70)] = 2127,
  [SMALL_STATE(71)] = 2148,
  [SMALL_STATE(72)] = 2169,
  [SMALL_STATE(73)] = 2190,
  [SMALL_STATE(74)] = 2211,
  [SMALL_STATE(75)] = 2232,
  [SMALL_STATE(76)] = 2253,
  [SMALL_STATE(77)] = 2274,
  [SMALL_STATE(78)] = 2295,
  [SMALL_STATE(79)] = 2316,
  [SMALL_STATE(80)] = 2337,
  [SMALL_STATE(81)] = 2358,
  [SMALL_STATE(82)] = 2393,
  [SMALL_STATE(83)] = 2428,
  [SMALL_STATE(84)] = 2463,
  [SMALL_STATE(85)] = 2498,
  [SMALL_STATE(86)] = 2533,
  [SMALL_STATE(87)] = 2568,
  [SMALL_STATE(88)] = 2602,
  [SMALL_STATE(89)] = 2636,
  [SMALL_STATE(90)] = 2658,
  [SMALL_STATE(91)] = 2679,
  [SMALL_STATE(92)] = 2698,
  [SMALL_STATE(93)] = 2714,
  [SMALL_STATE(94)] = 2730,
  [SMALL_STATE(95)] = 2746,
  [SMALL_STATE(96)] = 2762,
  [SMALL_STATE(97)] = 2778,
  [SMALL_STATE(98)] = 2796,
  [SMALL_STATE(99)] = 2812,
  [SMALL_STATE(100)] = 2828,
  [SMALL_STATE(101)] = 2846,
  [SMALL_STATE(102)] = 2862,
  [SMALL_STATE(103)] = 2878,
  [SMALL_STATE(104)] = 2894,
  [SMALL_STATE(105)] = 2910,
  [SMALL_STATE(106)] = 2926,
  [SMALL_STATE(107)] = 2944,
  [SMALL_STATE(108)] = 2960,
  [SMALL_STATE(109)] = 2976,
  [SMALL_STATE(110)] = 2992,
  [SMALL_STATE(111)] = 3008,
  [SMALL_STATE(112)] = 3024,
  [SMALL_STATE(113)] = 3040,
  [SMALL_STATE(114)] = 3055,
  [SMALL_STATE(115)] = 3070,
  [SMALL_STATE(116)] = 3085,
  [SMALL_STATE(117)] = 3100,
  [SMALL_STATE(118)] = 3115,
  [SMALL_STATE(119)] = 3130,
  [SMALL_STATE(120)] = 3145,
  [SMALL_STATE(121)] = 3160,
  [SMALL_STATE(122)] = 3175,
  [SMALL_STATE(123)] = 3190,
  [SMALL_STATE(124)] = 3205,
  [SMALL_STATE(125)] = 3220,
  [SMALL_STATE(126)] = 3235,
  [SMALL_STATE(127)] = 3250,
  [SMALL_STATE(128)] = 3265,
  [SMALL_STATE(129)] = 3280,
  [SMALL_STATE(130)] = 3292,
  [SMALL_STATE(131)] = 3304,
  [SMALL_STATE(132)] = 3316,
  [SMALL_STATE(133)] = 3328,
  [SMALL_STATE(134)] = 3340,
  [SMALL_STATE(135)] = 3352,
  [SMALL_STATE(136)] = 3364,
  [SMALL_STATE(137)] = 3376,
  [SMALL_STATE(138)] = 3388,
  [SMALL_STATE(139)] = 3400,
  [SMALL_STATE(140)] = 3412,
  [SMALL_STATE(141)] = 3424,
  [SMALL_STATE(142)] = 3436,
  [SMALL_STATE(143)] = 3448,
  [SMALL_STATE(144)] = 3460,
  [SMALL_STATE(145)] = 3472,
  [SMALL_STATE(146)] = 3484,
  [SMALL_STATE(147)] = 3496,
  [SMALL_STATE(148)] = 3508,
  [SMALL_STATE(149)] = 3520,
  [SMALL_STATE(150)] = 3533,
  [SMALL_STATE(151)] = 3546,
  [SMALL_STATE(152)] = 3559,
  [SMALL_STATE(153)] = 3572,
  [SMALL_STATE(154)] = 3585,
  [SMALL_STATE(155)] = 3598,
  [SMALL_STATE(156)] = 3611,
  [SMALL_STATE(157)] = 3624,
  [SMALL_STATE(158)] = 3637,
  [SMALL_STATE(159)] = 3650,
  [SMALL_STATE(160)] = 3663,
  [SMALL_STATE(161)] = 3676,
  [SMALL_STATE(162)] = 3689,
  [SMALL_STATE(163)] = 3702,
  [SMALL_STATE(164)] = 3715,
  [SMALL_STATE(165)] = 3728,
  [SMALL_STATE(166)] = 3741,
  [SMALL_STATE(167)] = 3754,
  [SMALL_STATE(168)] = 3767,
  [SMALL_STATE(169)] = 3780,
  [SMALL_STATE(170)] = 3793,
  [SMALL_STATE(171)] = 3806,
  [SMALL_STATE(172)] = 3819,
  [SMALL_STATE(173)] = 3832,
  [SMALL_STATE(174)] = 3845,
  [SMALL_STATE(175)] = 3858,
  [SMALL_STATE(176)] = 3871,
  [SMALL_STATE(177)] = 3884,
  [SMALL_STATE(178)] = 3897,
  [SMALL_STATE(179)] = 3910,
  [SMALL_STATE(180)] = 3923,
  [SMALL_STATE(181)] = 3936,
  [SMALL_STATE(182)] = 3949,
  [SMALL_STATE(183)] = 3962,
  [SMALL_STATE(184)] = 3975,
  [SMALL_STATE(185)] = 3988,
  [SMALL_STATE(186)] = 4001,
  [SMALL_STATE(187)] = 4014,
  [SMALL_STATE(188)] = 4027,
  [SMALL_STATE(189)] = 4040,
  [SMALL_STATE(190)] = 4053,
  [SMALL_STATE(191)] = 4066,
  [SMALL_STATE(192)] = 4079,
  [SMALL_STATE(193)] = 4092,
  [SMALL_STATE(194)] = 4105,
  [SMALL_STATE(195)] = 4118,
  [SMALL_STATE(196)] = 4131,
  [SMALL_STATE(197)] = 4144,
  [SMALL_STATE(198)] = 4157,
  [SMALL_STATE(199)] = 4170,
  [SMALL_STATE(200)] = 4181,
  [SMALL_STATE(201)] = 4194,
  [SMALL_STATE(202)] = 4207,
  [SMALL_STATE(203)] = 4218,
  [SMALL_STATE(204)] = 4226,
  [SMALL_STATE(205)] = 4236,
  [SMALL_STATE(206)] = 4246,
  [SMALL_STATE(207)] = 4256,
  [SMALL_STATE(208)] = 4266,
  [SMALL_STATE(209)] = 4276,
  [SMALL_STATE(210)] = 4286,
  [SMALL_STATE(211)] = 4296,
  [SMALL_STATE(212)] = 4306,
  [SMALL_STATE(213)] = 4316,
  [SMALL_STATE(214)] = 4326,
  [SMALL_STATE(215)] = 4336,
  [SMALL_STATE(216)] = 4346,
  [SMALL_STATE(217)] = 4356,
  [SMALL_STATE(218)] = 4364,
  [SMALL_STATE(219)] = 4374,
  [SMALL_STATE(220)] = 4382,
  [SMALL_STATE(221)] = 4392,
  [SMALL_STATE(222)] = 4402,
  [SMALL_STATE(223)] = 4410,
  [SMALL_STATE(224)] = 4417,
  [SMALL_STATE(225)] = 4424,
  [SMALL_STATE(226)] = 4431,
  [SMALL_STATE(227)] = 4438,
  [SMALL_STATE(228)] = 4445,
  [SMALL_STATE(229)] = 4452,
  [SMALL_STATE(230)] = 4459,
  [SMALL_STATE(231)] = 4466,
  [SMALL_STATE(232)] = 4473,
  [SMALL_STATE(233)] = 4480,
  [SMALL_STATE(234)] = 4487,
  [SMALL_STATE(235)] = 4494,
  [SMALL_STATE(236)] = 4501,
  [SMALL_STATE(237)] = 4508,
  [SMALL_STATE(238)] = 4515,
  [SMALL_STATE(239)] = 4522,
  [SMALL_STATE(240)] = 4529,
  [SMALL_STATE(241)] = 4536,
  [SMALL_STATE(242)] = 4543,
  [SMALL_STATE(243)] = 4550,
  [SMALL_STATE(244)] = 4557,
  [SMALL_STATE(245)] = 4564,
  [SMALL_STATE(246)] = 4571,
  [SMALL_STATE(247)] = 4578,
  [SMALL_STATE(248)] = 4585,
  [SMALL_STATE(249)] = 4592,
  [SMALL_STATE(250)] = 4599,
  [SMALL_STATE(251)] = 4606,
  [SMALL_STATE(252)] = 4613,
  [SMALL_STATE(253)] = 4620,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blade_comment, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blade_comment, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_argument, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php_directive, 4, 0, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php_directive, 4, 0, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php_directive, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php_directive, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 3, 0, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 3, 0, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blade_comment, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blade_comment, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(199),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(160),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(159),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(158),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(147),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute_value, 2, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, 0, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute_value, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 1, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 1, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_php_directive_repeat1, 1, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_directive_repeat1, 1, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [697] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_argument_php_text = 0,
  ts_external_token__start_tag_name = 1,
  ts_external_token__script_start_tag_name = 2,
  ts_external_token__style_start_tag_name = 3,
  ts_external_token__end_tag_name = 4,
  ts_external_token_erroneous_end_tag_name = 5,
  ts_external_token_SLASH_GT = 6,
  ts_external_token__implicit_end_tag = 7,
  ts_external_token_raw_text = 8,
  ts_external_token_comment = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_argument_php_text] = sym_argument_php_text,
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

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_argument_php_text] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
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
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_argument_php_text] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
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
