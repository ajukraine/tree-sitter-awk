#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_BEGIN = 3,
  anon_sym_END = 4,
  anon_sym_LF = 5,
  anon_sym_SEMI = 6,
  anon_sym_exit = 7,
  anon_sym_if = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_print = 11,
  anon_sym_COMMA = 12,
  anon_sym_EQ = 13,
  anon_sym_GT = 14,
  sym_string_literal = 15,
  aux_sym_numeric_literal_token1 = 16,
  aux_sym_function_call_token1 = 17,
  sym_identifier = 18,
  anon_sym_DOLLAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_SLASH2 = 21,
  sym_regex_pattern = 22,
  anon_sym_POUND = 23,
  aux_sym_comment_token1 = 24,
  sym_program = 25,
  sym__program_item = 26,
  sym_pattern_action_statement = 27,
  sym_pattern = 28,
  sym_action = 29,
  sym__statement = 30,
  sym_block_of_statements = 31,
  sym_exit_statement = 32,
  sym_if_cond = 33,
  sym__input_output_statement = 34,
  sym_print_statement = 35,
  sym__expression = 36,
  sym_string_concat = 37,
  sym_binary_expression = 38,
  sym_numeric_literal = 39,
  sym_function_call = 40,
  sym_field = 41,
  sym_regex = 42,
  sym_comment = 43,
  aux_sym_program_repeat1 = 44,
  aux_sym_action_repeat1 = 45,
  aux_sym_print_statement_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_END] = "END",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_exit] = "exit",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_print] = "print",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [sym_string_literal] = "string_literal",
  [aux_sym_numeric_literal_token1] = "numeric_literal_token1",
  [aux_sym_function_call_token1] = "function_call_token1",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH2] = "/",
  [sym_regex_pattern] = "regex_pattern",
  [anon_sym_POUND] = "comment_start",
  [aux_sym_comment_token1] = "comment_content",
  [sym_program] = "program",
  [sym__program_item] = "_program_item",
  [sym_pattern_action_statement] = "pattern_action_statement",
  [sym_pattern] = "pattern",
  [sym_action] = "action",
  [sym__statement] = "_statement",
  [sym_block_of_statements] = "block_of_statements",
  [sym_exit_statement] = "exit_statement",
  [sym_if_cond] = "if_cond",
  [sym__input_output_statement] = "_input_output_statement",
  [sym_print_statement] = "print_statement",
  [sym__expression] = "_expression",
  [sym_string_concat] = "string_concat",
  [sym_binary_expression] = "binary_expression",
  [sym_numeric_literal] = "numeric_literal",
  [sym_function_call] = "function_call",
  [sym_field] = "field",
  [sym_regex] = "regex",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_numeric_literal_token1] = aux_sym_numeric_literal_token1,
  [aux_sym_function_call_token1] = aux_sym_function_call_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [sym_regex_pattern] = sym_regex_pattern,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_program] = sym_program,
  [sym__program_item] = sym__program_item,
  [sym_pattern_action_statement] = sym_pattern_action_statement,
  [sym_pattern] = sym_pattern,
  [sym_action] = sym_action,
  [sym__statement] = sym__statement,
  [sym_block_of_statements] = sym_block_of_statements,
  [sym_exit_statement] = sym_exit_statement,
  [sym_if_cond] = sym_if_cond,
  [sym__input_output_statement] = sym__input_output_statement,
  [sym_print_statement] = sym_print_statement,
  [sym__expression] = sym__expression,
  [sym_string_concat] = sym_string_concat,
  [sym_binary_expression] = sym_binary_expression,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_function_call] = sym_function_call,
  [sym_field] = sym_field,
  [sym_regex] = sym_regex,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym_print_statement_repeat1] = aux_sym_print_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_numeric_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__program_item] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_action_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block_of_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_cond] = {
    .visible = true,
    .named = true,
  },
  [sym__input_output_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string_concat] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_start = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_start] = "start",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
    {field_start, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'B') ADVANCE(42);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'G') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(6);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'B') ADVANCE(42);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == 'B') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_END);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_print);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 64},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 39},
  [65] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [aux_sym_numeric_literal_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(54),
    [sym__program_item] = STATE(45),
    [sym_pattern_action_statement] = STATE(39),
    [sym_pattern] = STATE(50),
    [sym_regex] = STATE(60),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_BEGIN] = ACTIONS(9),
    [anon_sym_END] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [2] = {
    [sym_action] = STATE(61),
    [sym__statement] = STATE(24),
    [sym_block_of_statements] = STATE(25),
    [sym_exit_statement] = STATE(25),
    [sym_if_cond] = STATE(25),
    [sym__input_output_statement] = STATE(25),
    [sym_print_statement] = STATE(26),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [sym_comment] = STATE(2),
    [aux_sym_action_repeat1] = STATE(5),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_exit] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(23),
    [aux_sym_numeric_literal_token1] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [3] = {
    [sym_action] = STATE(52),
    [sym__statement] = STATE(24),
    [sym_block_of_statements] = STATE(25),
    [sym_exit_statement] = STATE(25),
    [sym_if_cond] = STATE(25),
    [sym__input_output_statement] = STATE(25),
    [sym_print_statement] = STATE(26),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [sym_comment] = STATE(3),
    [aux_sym_action_repeat1] = STATE(5),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_exit] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(23),
    [aux_sym_numeric_literal_token1] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(24),
    [sym_block_of_statements] = STATE(25),
    [sym_exit_statement] = STATE(25),
    [sym_if_cond] = STATE(25),
    [sym__input_output_statement] = STATE(25),
    [sym_print_statement] = STATE(26),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [sym_comment] = STATE(4),
    [aux_sym_action_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_exit] = ACTIONS(38),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_print] = ACTIONS(44),
    [sym_string_literal] = ACTIONS(47),
    [aux_sym_numeric_literal_token1] = ACTIONS(50),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(24),
    [sym_block_of_statements] = STATE(25),
    [sym_exit_statement] = STATE(25),
    [sym_if_cond] = STATE(25),
    [sym__input_output_statement] = STATE(25),
    [sym_print_statement] = STATE(26),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [sym_comment] = STATE(5),
    [aux_sym_action_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_exit] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(23),
    [aux_sym_numeric_literal_token1] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [6] = {
    [sym_action] = STATE(55),
    [sym__statement] = STATE(24),
    [sym_block_of_statements] = STATE(25),
    [sym_exit_statement] = STATE(25),
    [sym_if_cond] = STATE(25),
    [sym__input_output_statement] = STATE(25),
    [sym_print_statement] = STATE(26),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [sym_comment] = STATE(6),
    [aux_sym_action_repeat1] = STATE(5),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_exit] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_print] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(23),
    [aux_sym_numeric_literal_token1] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      sym_string_literal,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(73), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      sym__expression,
    STATE(16), 1,
      aux_sym_print_statement_repeat1,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(61), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
  [46] = 10,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_string_literal,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      sym__expression,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(75), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
  [87] = 10,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_string_literal,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      sym__expression,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(79), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
  [128] = 5,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(10), 2,
      sym__expression,
      sym_comment,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(83), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [159] = 10,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_string_literal,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__expression,
    STATE(11), 1,
      sym_comment,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(87), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
  [199] = 10,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_string_literal,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__expression,
    STATE(12), 1,
      sym_comment,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(91), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
  [239] = 10,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_string_literal,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym__expression,
    STATE(13), 1,
      sym_comment,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(95), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
  [279] = 6,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_EQ,
      anon_sym_GT,
    ACTIONS(99), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [309] = 5,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(15), 2,
      sym_comment,
      aux_sym_print_statement_repeat1,
    ACTIONS(75), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [335] = 6,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym_print_statement_repeat1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(110), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [363] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym_comment,
    ACTIONS(99), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [386] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym_comment,
    ACTIONS(114), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [409] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_comment,
    ACTIONS(118), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [432] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym_comment,
    ACTIONS(122), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [455] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      sym_string_literal,
    ACTIONS(128), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    STATE(21), 1,
      sym_comment,
    STATE(28), 1,
      sym__expression,
    STATE(44), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [487] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym_comment,
    ACTIONS(134), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [509] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_string_literal,
    ACTIONS(128), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_comment,
    STATE(28), 1,
      sym__expression,
    STATE(44), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [541] = 5,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(140), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [565] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_comment,
    ACTIONS(87), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [587] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_comment,
    ACTIONS(146), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [609] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym_comment,
    ACTIONS(150), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [631] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 2,
      sym__expression,
      sym_comment,
    ACTIONS(85), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
    STATE(44), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [653] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_string_literal,
    ACTIONS(25), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(7), 1,
      sym__expression,
    STATE(29), 1,
      sym_comment,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [682] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_string_literal,
    ACTIONS(128), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    STATE(21), 1,
      sym__expression,
    STATE(30), 1,
      sym_comment,
    STATE(44), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [711] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_string_literal,
    ACTIONS(128), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      sym__expression,
    STATE(31), 1,
      sym_comment,
    STATE(44), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [740] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      anon_sym_SLASH,
    STATE(39), 1,
      sym_pattern_action_statement,
    STATE(45), 1,
      sym__program_item,
    STATE(50), 1,
      sym_pattern,
    STATE(60), 1,
      sym_regex,
    ACTIONS(161), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(32), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [773] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_SLASH,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      aux_sym_program_repeat1,
    STATE(33), 1,
      sym_comment,
    STATE(39), 1,
      sym_pattern_action_statement,
    STATE(45), 1,
      sym__program_item,
    STATE(50), 1,
      sym_pattern,
    STATE(60), 1,
      sym_regex,
    ACTIONS(9), 2,
      anon_sym_BEGIN,
      anon_sym_END,
  [808] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_string_literal,
    ACTIONS(25), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(9), 1,
      sym__expression,
    STATE(34), 1,
      sym_comment,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [837] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_string_literal,
    ACTIONS(25), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(8), 1,
      sym__expression,
    STATE(35), 1,
      sym_comment,
    STATE(17), 5,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [866] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(169), 4,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_identifier,
    ACTIONS(36), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      anon_sym_DOLLAR,
  [886] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_EQ,
      anon_sym_GT,
    ACTIONS(101), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [907] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(120), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [921] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [935] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(124), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [949] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [963] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [977] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [991] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(101), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [1005] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [1019] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [1033] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block_of_statements,
    STATE(47), 1,
      sym_comment,
  [1046] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_SLASH2,
    STATE(48), 1,
      sym_comment,
  [1056] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_comment,
  [1066] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_comment,
  [1076] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(191), 1,
      aux_sym_numeric_literal_token1,
    STATE(51), 1,
      sym_comment,
  [1086] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
  [1096] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      aux_sym_numeric_literal_token1,
    STATE(53), 1,
      sym_comment,
  [1106] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
  [1116] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
  [1126] = 3,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      aux_sym_function_call_token1,
    STATE(56), 1,
      sym_comment,
  [1136] = 3,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      aux_sym_comment_token1,
    STATE(57), 1,
      sym_comment,
  [1146] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_comment,
  [1156] = 3,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_regex_pattern,
    STATE(59), 1,
      sym_comment,
  [1166] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_comment,
  [1176] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_comment,
  [1186] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_comment,
  [1196] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_comment,
  [1206] = 3,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      aux_sym_function_call_token1,
    STATE(64), 1,
      sym_comment,
  [1216] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 279,
  [SMALL_STATE(15)] = 309,
  [SMALL_STATE(16)] = 335,
  [SMALL_STATE(17)] = 363,
  [SMALL_STATE(18)] = 386,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 432,
  [SMALL_STATE(21)] = 455,
  [SMALL_STATE(22)] = 487,
  [SMALL_STATE(23)] = 509,
  [SMALL_STATE(24)] = 541,
  [SMALL_STATE(25)] = 565,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 609,
  [SMALL_STATE(28)] = 631,
  [SMALL_STATE(29)] = 653,
  [SMALL_STATE(30)] = 682,
  [SMALL_STATE(31)] = 711,
  [SMALL_STATE(32)] = 740,
  [SMALL_STATE(33)] = 773,
  [SMALL_STATE(34)] = 808,
  [SMALL_STATE(35)] = 837,
  [SMALL_STATE(36)] = 866,
  [SMALL_STATE(37)] = 886,
  [SMALL_STATE(38)] = 907,
  [SMALL_STATE(39)] = 921,
  [SMALL_STATE(40)] = 935,
  [SMALL_STATE(41)] = 949,
  [SMALL_STATE(42)] = 963,
  [SMALL_STATE(43)] = 977,
  [SMALL_STATE(44)] = 991,
  [SMALL_STATE(45)] = 1005,
  [SMALL_STATE(46)] = 1019,
  [SMALL_STATE(47)] = 1033,
  [SMALL_STATE(48)] = 1046,
  [SMALL_STATE(49)] = 1056,
  [SMALL_STATE(50)] = 1066,
  [SMALL_STATE(51)] = 1076,
  [SMALL_STATE(52)] = 1086,
  [SMALL_STATE(53)] = 1096,
  [SMALL_STATE(54)] = 1106,
  [SMALL_STATE(55)] = 1116,
  [SMALL_STATE(56)] = 1126,
  [SMALL_STATE(57)] = 1136,
  [SMALL_STATE(58)] = 1146,
  [SMALL_STATE(59)] = 1156,
  [SMALL_STATE(60)] = 1166,
  [SMALL_STATE(61)] = 1176,
  [SMALL_STATE(62)] = 1186,
  [SMALL_STATE(63)] = 1196,
  [SMALL_STATE(64)] = 1206,
  [SMALL_STATE(65)] = 1216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(13),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(58),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(29),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(17),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(18),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(14),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(53),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_concat, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concat, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(35),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_of_statements, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_of_statements, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__input_output_statement, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_output_statement, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cond, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cond, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__program_item, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_awk(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
