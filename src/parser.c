#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_BEGIN = 3,
  anon_sym_END = 4,
  anon_sym_SLASH = 5,
  anon_sym_CARETTotalAverage = 6,
  anon_sym_LF = 7,
  anon_sym_SEMI = 8,
  anon_sym_exit = 9,
  anon_sym_if = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_print = 13,
  anon_sym_EQ = 14,
  anon_sym_GT = 15,
  sym_string_literal = 16,
  aux_sym_numeric_literal_token1 = 17,
  aux_sym_function_call_token1 = 18,
  sym_identifier = 19,
  anon_sym_DOLLAR = 20,
  sym_program = 21,
  sym__program_item = 22,
  sym_pattern_action_statement = 23,
  sym_pattern = 24,
  sym_action = 25,
  sym__statement = 26,
  sym_block_of_statements = 27,
  sym_exit_statement = 28,
  sym_if_cond = 29,
  sym__input_output_statement = 30,
  sym_print_statement = 31,
  sym__expression = 32,
  sym_binary_expression = 33,
  sym_numeric_literal = 34,
  sym_function_call = 35,
  sym_field = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_action_repeat1 = 38,
  aux_sym_print_statement_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_END] = "END",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARETTotalAverage] = "^Total Average",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_exit] = "exit",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_print] = "print",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [sym_string_literal] = "string_literal",
  [aux_sym_numeric_literal_token1] = "numeric_literal_token1",
  [aux_sym_function_call_token1] = "function_call_token1",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
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
  [sym_binary_expression] = "binary_expression",
  [sym_numeric_literal] = "numeric_literal",
  [sym_function_call] = "function_call",
  [sym_field] = "field",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARETTotalAverage] = anon_sym_CARETTotalAverage,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_numeric_literal_token1] = aux_sym_numeric_literal_token1,
  [aux_sym_function_call_token1] = aux_sym_function_call_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
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
  [sym_binary_expression] = sym_binary_expression,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_function_call] = sym_function_call,
  [sym_field] = sym_field,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARETTotalAverage] = {
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
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == 'B') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'G') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(5);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'B') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(11);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_END);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CARETTotalAverage);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_print);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
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
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 46},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 46},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARETTotalAverage] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [aux_sym_numeric_literal_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(41),
    [sym__program_item] = STATE(23),
    [sym_pattern_action_statement] = STATE(23),
    [sym_pattern] = STATE(38),
    [aux_sym_program_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_BEGIN] = ACTIONS(7),
    [anon_sym_END] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(9),
  },
  [2] = {
    [sym_action] = STATE(33),
    [sym__statement] = STATE(17),
    [sym_block_of_statements] = STATE(17),
    [sym_exit_statement] = STATE(17),
    [sym_if_cond] = STATE(17),
    [sym__input_output_statement] = STATE(17),
    [sym_print_statement] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [aux_sym_action_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [aux_sym_numeric_literal_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
  },
  [3] = {
    [sym_action] = STATE(39),
    [sym__statement] = STATE(17),
    [sym_block_of_statements] = STATE(17),
    [sym_exit_statement] = STATE(17),
    [sym_if_cond] = STATE(17),
    [sym__input_output_statement] = STATE(17),
    [sym_print_statement] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [aux_sym_action_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [aux_sym_numeric_literal_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
  },
  [4] = {
    [sym_action] = STATE(34),
    [sym__statement] = STATE(17),
    [sym_block_of_statements] = STATE(17),
    [sym_exit_statement] = STATE(17),
    [sym_if_cond] = STATE(17),
    [sym__input_output_statement] = STATE(17),
    [sym_print_statement] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [aux_sym_action_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [aux_sym_numeric_literal_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
  },
  [5] = {
    [sym__statement] = STATE(17),
    [sym_block_of_statements] = STATE(17),
    [sym_exit_statement] = STATE(17),
    [sym_if_cond] = STATE(17),
    [sym__input_output_statement] = STATE(17),
    [sym_print_statement] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [aux_sym_action_repeat1] = STATE(5),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_exit] = ACTIONS(36),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(42),
    [sym_string_literal] = ACTIONS(45),
    [aux_sym_numeric_literal_token1] = ACTIONS(48),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_DOLLAR] = ACTIONS(54),
  },
  [6] = {
    [sym__statement] = STATE(17),
    [sym_block_of_statements] = STATE(17),
    [sym_exit_statement] = STATE(17),
    [sym_if_cond] = STATE(17),
    [sym__input_output_statement] = STATE(17),
    [sym_print_statement] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_numeric_literal] = STATE(17),
    [sym_function_call] = STATE(17),
    [sym_field] = STATE(17),
    [aux_sym_action_repeat1] = STATE(5),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [aux_sym_numeric_literal_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      sym_string_literal,
    ACTIONS(66), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
    STATE(7), 6,
      sym__expression,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
      aux_sym_print_statement_repeat1,
  [32] = 3,
    ACTIONS(77), 1,
      anon_sym_LF,
    STATE(7), 6,
      sym__expression,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
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
  [56] = 3,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(18), 5,
      sym__expression,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(79), 10,
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
  [79] = 4,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 2,
      anon_sym_EQ,
      anon_sym_GT,
    ACTIONS(83), 10,
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
  [102] = 2,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(91), 10,
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
  [118] = 2,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(95), 10,
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
  [134] = 2,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(99), 10,
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
  [150] = 2,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(103), 10,
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
  [166] = 2,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(107), 10,
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
  [182] = 2,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(111), 10,
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
  [198] = 3,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    ACTIONS(115), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [216] = 2,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(121), 10,
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
  [232] = 5,
    ACTIONS(23), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(125), 1,
      sym_string_literal,
    ACTIONS(127), 1,
      sym_identifier,
    STATE(8), 6,
      sym__expression,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
      aux_sym_print_statement_repeat1,
  [253] = 5,
    ACTIONS(23), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym_string_literal,
    STATE(13), 5,
      sym__expression,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [273] = 5,
    ACTIONS(131), 1,
      sym_string_literal,
    ACTIONS(133), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    STATE(47), 5,
      sym__expression,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [293] = 5,
    ACTIONS(133), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(139), 1,
      sym_string_literal,
    STATE(31), 5,
      sym__expression,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [313] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_SLASH,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_pattern,
    ACTIONS(7), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(24), 3,
      sym__program_item,
      sym_pattern_action_statement,
      aux_sym_program_repeat1,
  [335] = 6,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      sym_pattern,
    ACTIONS(148), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(24), 3,
      sym__program_item,
      sym_pattern_action_statement,
      aux_sym_program_repeat1,
  [357] = 2,
    ACTIONS(154), 4,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_identifier,
    ACTIONS(34), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      anon_sym_DOLLAR,
  [371] = 1,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [379] = 1,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [387] = 1,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [395] = 3,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 2,
      anon_sym_EQ,
      anon_sym_GT,
  [406] = 2,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_block_of_statements,
  [413] = 1,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [417] = 1,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
  [421] = 1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
  [425] = 1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
  [429] = 1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
  [433] = 1,
    ACTIONS(176), 1,
      aux_sym_numeric_literal_token1,
  [437] = 1,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
  [441] = 1,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
  [445] = 1,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
  [449] = 1,
    ACTIONS(182), 1,
      aux_sym_function_call_token1,
  [453] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [457] = 1,
    ACTIONS(186), 1,
      anon_sym_CARETTotalAverage,
  [461] = 1,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [465] = 1,
    ACTIONS(188), 1,
      anon_sym_SLASH,
  [469] = 1,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
  [473] = 1,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
  [477] = 1,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [481] = 1,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
  [485] = 1,
    ACTIONS(192), 1,
      aux_sym_numeric_literal_token1,
  [489] = 1,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [493] = 1,
    ACTIONS(196), 1,
      aux_sym_function_call_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 79,
  [SMALL_STATE(11)] = 102,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 134,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 198,
  [SMALL_STATE(18)] = 216,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 273,
  [SMALL_STATE(22)] = 293,
  [SMALL_STATE(23)] = 313,
  [SMALL_STATE(24)] = 335,
  [SMALL_STATE(25)] = 357,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 379,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 395,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 413,
  [SMALL_STATE(32)] = 417,
  [SMALL_STATE(33)] = 421,
  [SMALL_STATE(34)] = 425,
  [SMALL_STATE(35)] = 429,
  [SMALL_STATE(36)] = 433,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 441,
  [SMALL_STATE(39)] = 445,
  [SMALL_STATE(40)] = 449,
  [SMALL_STATE(41)] = 453,
  [SMALL_STATE(42)] = 457,
  [SMALL_STATE(43)] = 461,
  [SMALL_STATE(44)] = 465,
  [SMALL_STATE(45)] = 469,
  [SMALL_STATE(46)] = 473,
  [SMALL_STATE(47)] = 477,
  [SMALL_STATE(48)] = 481,
  [SMALL_STATE(49)] = 485,
  [SMALL_STATE(50)] = 489,
  [SMALL_STATE(51)] = 493,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(35),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(19),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(17),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(16),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(10),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(36),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(16),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(36),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cond, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cond, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_of_statements, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_of_statements, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
