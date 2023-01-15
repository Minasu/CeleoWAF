// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "seclang-parser.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "seclang-parser.hh"

// User implementation prologue.

#line 51 "seclang-parser.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 327 "seclang-parser.yy" // lalr1.cc:413

#include "src/parser/driver.h"

#line 57 "seclang-parser.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 143 "seclang-parser.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  seclang_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  seclang_parser::seclang_parser (celeowaf::Parser::Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  seclang_parser::~seclang_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  seclang_parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  seclang_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  seclang_parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  seclang_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  seclang_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  seclang_parser::symbol_number_type
  seclang_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  seclang_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  seclang_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 147: // "Accuracy"
      case 148: // "Allow"
      case 149: // "Append"
      case 150: // "AuditLog"
      case 151: // "Block"
      case 152: // "Capture"
      case 153: // "Chain"
      case 154: // "ACTION_CTL_AUDIT_ENGINE"
      case 155: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 156: // "ACTION_CTL_BDY_JSON"
      case 157: // "ACTION_CTL_BDY_XML"
      case 158: // "ACTION_CTL_BDY_URLENCODED"
      case 159: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 160: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 161: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 162: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 163: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 164: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 165: // "Deny"
      case 166: // "DeprecateVar"
      case 167: // "Drop"
      case 168: // "Exec"
      case 169: // "ExpireVar"
      case 170: // "Id"
      case 171: // "InitCol"
      case 172: // "Log"
      case 173: // "LogData"
      case 174: // "Maturity"
      case 175: // "Msg"
      case 176: // "MultiMatch"
      case 177: // "NoAuditLog"
      case 178: // "NoLog"
      case 179: // "Pass"
      case 180: // "Pause"
      case 181: // "Phase"
      case 182: // "Prepend"
      case 183: // "Proxy"
      case 184: // "Redirect"
      case 185: // "Rev"
      case 186: // "SanitiseArg"
      case 187: // "SanitiseMatched"
      case 188: // "SanitiseMatchedBytes"
      case 189: // "SanitiseRequestHeader"
      case 190: // "SanitiseResponseHeader"
      case 191: // "SetEnv"
      case 192: // "SetRsc"
      case 193: // "SetSid"
      case 194: // "SetUID"
      case 195: // "Severity"
      case 196: // "Skip"
      case 197: // "SkipAfter"
      case 198: // "Status"
      case 199: // "Tag"
      case 200: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 201: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 202: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 203: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 204: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 205: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 206: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 207: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 208: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 209: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 210: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 211: // "ACTION_TRANSFORMATION_LENGTH"
      case 212: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 213: // "ACTION_TRANSFORMATION_MD5"
      case 214: // "ACTION_TRANSFORMATION_NONE"
      case 215: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 216: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 217: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 218: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 219: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 220: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 221: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 222: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 223: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 224: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 225: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 226: // "ACTION_TRANSFORMATION_SHA1"
      case 227: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 228: // "ACTION_TRANSFORMATION_TRIM"
      case 229: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 230: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 231: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 232: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 233: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 234: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 235: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 236: // "Ver"
      case 237: // "xmlns"
      case 238: // "CONFIG_COMPONENT_SIG"
      case 239: // "CONFIG_CONN_ENGINE"
      case 240: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 241: // "CONFIG_SEC_WEB_APP_ID"
      case 242: // "CONFIG_SEC_SERVER_SIG"
      case 243: // "CONFIG_DIR_AUDIT_DIR"
      case 244: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 245: // "CONFIG_DIR_AUDIT_ENG"
      case 246: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 247: // "CONFIG_DIR_AUDIT_LOG"
      case 248: // "CONFIG_DIR_AUDIT_LOG2"
      case 249: // "CONFIG_DIR_AUDIT_LOG_P"
      case 250: // "CONFIG_DIR_AUDIT_STS"
      case 251: // "CONFIG_DIR_AUDIT_TPE"
      case 252: // "CONFIG_DIR_DEBUG_LOG"
      case 253: // "CONFIG_DIR_DEBUG_LVL"
      case 254: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 255: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 256: // "CONFIG_SEC_HASH_ENGINE"
      case 257: // "CONFIG_SEC_HASH_KEY"
      case 258: // "CONFIG_SEC_HASH_PARAM"
      case 259: // "CONFIG_SEC_HASH_METHOD_RX"
      case 260: // "CONFIG_SEC_HASH_METHOD_PM"
      case 261: // "CONFIG_SEC_CHROOT_DIR"
      case 262: // "CONFIG_DIR_GEO_DB"
      case 263: // "CONFIG_DIR_GSB_DB"
      case 264: // "CONFIG_SEC_GUARDIAN_LOG"
      case 265: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 266: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 267: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 268: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 269: // "CONFIG_SEC_SENSOR_ID"
      case 270: // "CONFIG_DIR_ARGS_LIMIT"
      case 271: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case 272: // "CONFIG_DIR_REQ_BODY"
      case 273: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 274: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 275: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 276: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 277: // "CONFIG_DIR_RES_BODY"
      case 278: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 279: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 280: // "CONFIG_SEC_RULE_INHERITANCE"
      case 281: // "CONFIG_SEC_RULE_PERF_TIME"
      case 282: // "CONFIG_DIR_RULE_ENG"
      case 283: // "CONFIG_DIR_SEC_ACTION"
      case 284: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 285: // "CONFIG_DIR_SEC_MARKER"
      case 286: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 287: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case 288: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 289: // "CONFIG_SEC_HTTP_BLKEY"
      case 290: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 291: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 292: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 293: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 294: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 295: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 296: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 297: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 298: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 299: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 300: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 301: // "CONFIG_UPLOAD_DIR"
      case 302: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 303: // "CONFIG_UPLOAD_FILE_MODE"
      case 304: // "CONFIG_VALUE_ABORT"
      case 305: // "CONFIG_VALUE_DETC"
      case 306: // "CONFIG_VALUE_HTTPS"
      case 307: // "CONFIG_VALUE_AMQP"
      case 308: // "CONFIG_VALUE_OFF"
      case 309: // "CONFIG_VALUE_ON"
      case 310: // "CONFIG_VALUE_PARALLEL"
      case 311: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 312: // "CONFIG_VALUE_REJECT"
      case 313: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 314: // "CONFIG_VALUE_SERIAL"
      case 315: // "CONFIG_VALUE_WARN"
      case 316: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 317: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 318: // "CONGIG_DIR_SEC_ARG_SEP"
      case 319: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 320: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 321: // "CONGIG_DIR_SEC_DATA_DIR"
      case 322: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 323: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 324: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 325: // "CONGIG_DIR_SEC_TMP_DIR"
      case 326: // "DIRECTIVE"
      case 327: // "DIRECTIVE_SECRULESCRIPT"
      case 328: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 329: // "QUOTATION_MARK"
      case 330: // "RUN_TIME_VAR_BLD"
      case 331: // "RUN_TIME_VAR_DUR"
      case 332: // "RUN_TIME_VAR_HSV"
      case 333: // "RUN_TIME_VAR_REMOTE_USER"
      case 334: // "RUN_TIME_VAR_TIME"
      case 335: // "RUN_TIME_VAR_TIME_DAY"
      case 336: // "RUN_TIME_VAR_TIME_EPOCH"
      case 337: // "RUN_TIME_VAR_TIME_HOUR"
      case 338: // "RUN_TIME_VAR_TIME_MIN"
      case 339: // "RUN_TIME_VAR_TIME_MON"
      case 340: // "RUN_TIME_VAR_TIME_SEC"
      case 341: // "RUN_TIME_VAR_TIME_WDAY"
      case 342: // "RUN_TIME_VAR_TIME_YEAR"
      case 343: // "VARIABLE"
      case 344: // "Dictionary element"
      case 345: // "Dictionary element, selected by regexp"
        value.move< std::string > (that.value);
        break;

      case 352: // op
      case 353: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case 361: // run_time_string
        value.move< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 358: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case 359: // act
      case 360: // setvar_action
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 355: // variables
      case 356: // variables_pre_process
      case 357: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 350: // actions
      case 351: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 147: // "Accuracy"
      case 148: // "Allow"
      case 149: // "Append"
      case 150: // "AuditLog"
      case 151: // "Block"
      case 152: // "Capture"
      case 153: // "Chain"
      case 154: // "ACTION_CTL_AUDIT_ENGINE"
      case 155: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 156: // "ACTION_CTL_BDY_JSON"
      case 157: // "ACTION_CTL_BDY_XML"
      case 158: // "ACTION_CTL_BDY_URLENCODED"
      case 159: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 160: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 161: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 162: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 163: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 164: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 165: // "Deny"
      case 166: // "DeprecateVar"
      case 167: // "Drop"
      case 168: // "Exec"
      case 169: // "ExpireVar"
      case 170: // "Id"
      case 171: // "InitCol"
      case 172: // "Log"
      case 173: // "LogData"
      case 174: // "Maturity"
      case 175: // "Msg"
      case 176: // "MultiMatch"
      case 177: // "NoAuditLog"
      case 178: // "NoLog"
      case 179: // "Pass"
      case 180: // "Pause"
      case 181: // "Phase"
      case 182: // "Prepend"
      case 183: // "Proxy"
      case 184: // "Redirect"
      case 185: // "Rev"
      case 186: // "SanitiseArg"
      case 187: // "SanitiseMatched"
      case 188: // "SanitiseMatchedBytes"
      case 189: // "SanitiseRequestHeader"
      case 190: // "SanitiseResponseHeader"
      case 191: // "SetEnv"
      case 192: // "SetRsc"
      case 193: // "SetSid"
      case 194: // "SetUID"
      case 195: // "Severity"
      case 196: // "Skip"
      case 197: // "SkipAfter"
      case 198: // "Status"
      case 199: // "Tag"
      case 200: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 201: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 202: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 203: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 204: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 205: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 206: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 207: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 208: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 209: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 210: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 211: // "ACTION_TRANSFORMATION_LENGTH"
      case 212: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 213: // "ACTION_TRANSFORMATION_MD5"
      case 214: // "ACTION_TRANSFORMATION_NONE"
      case 215: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 216: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 217: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 218: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 219: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 220: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 221: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 222: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 223: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 224: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 225: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 226: // "ACTION_TRANSFORMATION_SHA1"
      case 227: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 228: // "ACTION_TRANSFORMATION_TRIM"
      case 229: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 230: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 231: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 232: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 233: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 234: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 235: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 236: // "Ver"
      case 237: // "xmlns"
      case 238: // "CONFIG_COMPONENT_SIG"
      case 239: // "CONFIG_CONN_ENGINE"
      case 240: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 241: // "CONFIG_SEC_WEB_APP_ID"
      case 242: // "CONFIG_SEC_SERVER_SIG"
      case 243: // "CONFIG_DIR_AUDIT_DIR"
      case 244: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 245: // "CONFIG_DIR_AUDIT_ENG"
      case 246: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 247: // "CONFIG_DIR_AUDIT_LOG"
      case 248: // "CONFIG_DIR_AUDIT_LOG2"
      case 249: // "CONFIG_DIR_AUDIT_LOG_P"
      case 250: // "CONFIG_DIR_AUDIT_STS"
      case 251: // "CONFIG_DIR_AUDIT_TPE"
      case 252: // "CONFIG_DIR_DEBUG_LOG"
      case 253: // "CONFIG_DIR_DEBUG_LVL"
      case 254: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 255: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 256: // "CONFIG_SEC_HASH_ENGINE"
      case 257: // "CONFIG_SEC_HASH_KEY"
      case 258: // "CONFIG_SEC_HASH_PARAM"
      case 259: // "CONFIG_SEC_HASH_METHOD_RX"
      case 260: // "CONFIG_SEC_HASH_METHOD_PM"
      case 261: // "CONFIG_SEC_CHROOT_DIR"
      case 262: // "CONFIG_DIR_GEO_DB"
      case 263: // "CONFIG_DIR_GSB_DB"
      case 264: // "CONFIG_SEC_GUARDIAN_LOG"
      case 265: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 266: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 267: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 268: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 269: // "CONFIG_SEC_SENSOR_ID"
      case 270: // "CONFIG_DIR_ARGS_LIMIT"
      case 271: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case 272: // "CONFIG_DIR_REQ_BODY"
      case 273: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 274: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 275: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 276: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 277: // "CONFIG_DIR_RES_BODY"
      case 278: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 279: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 280: // "CONFIG_SEC_RULE_INHERITANCE"
      case 281: // "CONFIG_SEC_RULE_PERF_TIME"
      case 282: // "CONFIG_DIR_RULE_ENG"
      case 283: // "CONFIG_DIR_SEC_ACTION"
      case 284: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 285: // "CONFIG_DIR_SEC_MARKER"
      case 286: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 287: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case 288: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 289: // "CONFIG_SEC_HTTP_BLKEY"
      case 290: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 291: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 292: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 293: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 294: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 295: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 296: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 297: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 298: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 299: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 300: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 301: // "CONFIG_UPLOAD_DIR"
      case 302: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 303: // "CONFIG_UPLOAD_FILE_MODE"
      case 304: // "CONFIG_VALUE_ABORT"
      case 305: // "CONFIG_VALUE_DETC"
      case 306: // "CONFIG_VALUE_HTTPS"
      case 307: // "CONFIG_VALUE_AMQP"
      case 308: // "CONFIG_VALUE_OFF"
      case 309: // "CONFIG_VALUE_ON"
      case 310: // "CONFIG_VALUE_PARALLEL"
      case 311: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 312: // "CONFIG_VALUE_REJECT"
      case 313: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 314: // "CONFIG_VALUE_SERIAL"
      case 315: // "CONFIG_VALUE_WARN"
      case 316: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 317: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 318: // "CONGIG_DIR_SEC_ARG_SEP"
      case 319: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 320: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 321: // "CONGIG_DIR_SEC_DATA_DIR"
      case 322: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 323: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 324: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 325: // "CONGIG_DIR_SEC_TMP_DIR"
      case 326: // "DIRECTIVE"
      case 327: // "DIRECTIVE_SECRULESCRIPT"
      case 328: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 329: // "QUOTATION_MARK"
      case 330: // "RUN_TIME_VAR_BLD"
      case 331: // "RUN_TIME_VAR_DUR"
      case 332: // "RUN_TIME_VAR_HSV"
      case 333: // "RUN_TIME_VAR_REMOTE_USER"
      case 334: // "RUN_TIME_VAR_TIME"
      case 335: // "RUN_TIME_VAR_TIME_DAY"
      case 336: // "RUN_TIME_VAR_TIME_EPOCH"
      case 337: // "RUN_TIME_VAR_TIME_HOUR"
      case 338: // "RUN_TIME_VAR_TIME_MIN"
      case 339: // "RUN_TIME_VAR_TIME_MON"
      case 340: // "RUN_TIME_VAR_TIME_SEC"
      case 341: // "RUN_TIME_VAR_TIME_WDAY"
      case 342: // "RUN_TIME_VAR_TIME_YEAR"
      case 343: // "VARIABLE"
      case 344: // "Dictionary element"
      case 345: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case 352: // op
      case 353: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 361: // run_time_string
        value.copy< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 358: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 359: // act
      case 360: // setvar_action
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 355: // variables
      case 356: // variables_pre_process
      case 357: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 350: // actions
      case 351: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  seclang_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  seclang_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  seclang_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  seclang_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  seclang_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  seclang_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  seclang_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  seclang_parser::debug_level_type
  seclang_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  seclang_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline seclang_parser::state_type
  seclang_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  seclang_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  seclang_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  seclang_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 320 "/home/modsec/CeleoWAF/src/parser/seclang-parser.yy" // lalr1.cc:741
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = new std::string(driver.file);
}

#line 879 "seclang-parser.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 147: // "Accuracy"
      case 148: // "Allow"
      case 149: // "Append"
      case 150: // "AuditLog"
      case 151: // "Block"
      case 152: // "Capture"
      case 153: // "Chain"
      case 154: // "ACTION_CTL_AUDIT_ENGINE"
      case 155: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 156: // "ACTION_CTL_BDY_JSON"
      case 157: // "ACTION_CTL_BDY_XML"
      case 158: // "ACTION_CTL_BDY_URLENCODED"
      case 159: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 160: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 161: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 162: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 163: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 164: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 165: // "Deny"
      case 166: // "DeprecateVar"
      case 167: // "Drop"
      case 168: // "Exec"
      case 169: // "ExpireVar"
      case 170: // "Id"
      case 171: // "InitCol"
      case 172: // "Log"
      case 173: // "LogData"
      case 174: // "Maturity"
      case 175: // "Msg"
      case 176: // "MultiMatch"
      case 177: // "NoAuditLog"
      case 178: // "NoLog"
      case 179: // "Pass"
      case 180: // "Pause"
      case 181: // "Phase"
      case 182: // "Prepend"
      case 183: // "Proxy"
      case 184: // "Redirect"
      case 185: // "Rev"
      case 186: // "SanitiseArg"
      case 187: // "SanitiseMatched"
      case 188: // "SanitiseMatchedBytes"
      case 189: // "SanitiseRequestHeader"
      case 190: // "SanitiseResponseHeader"
      case 191: // "SetEnv"
      case 192: // "SetRsc"
      case 193: // "SetSid"
      case 194: // "SetUID"
      case 195: // "Severity"
      case 196: // "Skip"
      case 197: // "SkipAfter"
      case 198: // "Status"
      case 199: // "Tag"
      case 200: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 201: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 202: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 203: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 204: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 205: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 206: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 207: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 208: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 209: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 210: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 211: // "ACTION_TRANSFORMATION_LENGTH"
      case 212: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 213: // "ACTION_TRANSFORMATION_MD5"
      case 214: // "ACTION_TRANSFORMATION_NONE"
      case 215: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 216: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 217: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 218: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 219: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 220: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 221: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 222: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 223: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 224: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 225: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 226: // "ACTION_TRANSFORMATION_SHA1"
      case 227: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 228: // "ACTION_TRANSFORMATION_TRIM"
      case 229: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 230: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 231: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 232: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 233: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 234: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 235: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 236: // "Ver"
      case 237: // "xmlns"
      case 238: // "CONFIG_COMPONENT_SIG"
      case 239: // "CONFIG_CONN_ENGINE"
      case 240: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 241: // "CONFIG_SEC_WEB_APP_ID"
      case 242: // "CONFIG_SEC_SERVER_SIG"
      case 243: // "CONFIG_DIR_AUDIT_DIR"
      case 244: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 245: // "CONFIG_DIR_AUDIT_ENG"
      case 246: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 247: // "CONFIG_DIR_AUDIT_LOG"
      case 248: // "CONFIG_DIR_AUDIT_LOG2"
      case 249: // "CONFIG_DIR_AUDIT_LOG_P"
      case 250: // "CONFIG_DIR_AUDIT_STS"
      case 251: // "CONFIG_DIR_AUDIT_TPE"
      case 252: // "CONFIG_DIR_DEBUG_LOG"
      case 253: // "CONFIG_DIR_DEBUG_LVL"
      case 254: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 255: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 256: // "CONFIG_SEC_HASH_ENGINE"
      case 257: // "CONFIG_SEC_HASH_KEY"
      case 258: // "CONFIG_SEC_HASH_PARAM"
      case 259: // "CONFIG_SEC_HASH_METHOD_RX"
      case 260: // "CONFIG_SEC_HASH_METHOD_PM"
      case 261: // "CONFIG_SEC_CHROOT_DIR"
      case 262: // "CONFIG_DIR_GEO_DB"
      case 263: // "CONFIG_DIR_GSB_DB"
      case 264: // "CONFIG_SEC_GUARDIAN_LOG"
      case 265: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 266: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 267: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 268: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 269: // "CONFIG_SEC_SENSOR_ID"
      case 270: // "CONFIG_DIR_ARGS_LIMIT"
      case 271: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case 272: // "CONFIG_DIR_REQ_BODY"
      case 273: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 274: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 275: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 276: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 277: // "CONFIG_DIR_RES_BODY"
      case 278: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 279: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 280: // "CONFIG_SEC_RULE_INHERITANCE"
      case 281: // "CONFIG_SEC_RULE_PERF_TIME"
      case 282: // "CONFIG_DIR_RULE_ENG"
      case 283: // "CONFIG_DIR_SEC_ACTION"
      case 284: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 285: // "CONFIG_DIR_SEC_MARKER"
      case 286: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 287: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case 288: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 289: // "CONFIG_SEC_HTTP_BLKEY"
      case 290: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 291: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 292: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 293: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 294: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 295: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 296: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 297: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 298: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 299: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 300: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 301: // "CONFIG_UPLOAD_DIR"
      case 302: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 303: // "CONFIG_UPLOAD_FILE_MODE"
      case 304: // "CONFIG_VALUE_ABORT"
      case 305: // "CONFIG_VALUE_DETC"
      case 306: // "CONFIG_VALUE_HTTPS"
      case 307: // "CONFIG_VALUE_AMQP"
      case 308: // "CONFIG_VALUE_OFF"
      case 309: // "CONFIG_VALUE_ON"
      case 310: // "CONFIG_VALUE_PARALLEL"
      case 311: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 312: // "CONFIG_VALUE_REJECT"
      case 313: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 314: // "CONFIG_VALUE_SERIAL"
      case 315: // "CONFIG_VALUE_WARN"
      case 316: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 317: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 318: // "CONGIG_DIR_SEC_ARG_SEP"
      case 319: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 320: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 321: // "CONGIG_DIR_SEC_DATA_DIR"
      case 322: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 323: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 324: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 325: // "CONGIG_DIR_SEC_TMP_DIR"
      case 326: // "DIRECTIVE"
      case 327: // "DIRECTIVE_SECRULESCRIPT"
      case 328: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 329: // "QUOTATION_MARK"
      case 330: // "RUN_TIME_VAR_BLD"
      case 331: // "RUN_TIME_VAR_DUR"
      case 332: // "RUN_TIME_VAR_HSV"
      case 333: // "RUN_TIME_VAR_REMOTE_USER"
      case 334: // "RUN_TIME_VAR_TIME"
      case 335: // "RUN_TIME_VAR_TIME_DAY"
      case 336: // "RUN_TIME_VAR_TIME_EPOCH"
      case 337: // "RUN_TIME_VAR_TIME_HOUR"
      case 338: // "RUN_TIME_VAR_TIME_MIN"
      case 339: // "RUN_TIME_VAR_TIME_MON"
      case 340: // "RUN_TIME_VAR_TIME_SEC"
      case 341: // "RUN_TIME_VAR_TIME_WDAY"
      case 342: // "RUN_TIME_VAR_TIME_YEAR"
      case 343: // "VARIABLE"
      case 344: // "Dictionary element"
      case 345: // "Dictionary element, selected by regexp"
        yylhs.value.build< std::string > ();
        break;

      case 352: // op
      case 353: // op_before_init
        yylhs.value.build< std::unique_ptr<Operator> > ();
        break;

      case 361: // run_time_string
        yylhs.value.build< std::unique_ptr<RunTimeString> > ();
        break;

      case 358: // var
        yylhs.value.build< std::unique_ptr<Variable> > ();
        break;

      case 359: // act
      case 360: // setvar_action
        yylhs.value.build< std::unique_ptr<actions::Action> > ();
        break;

      case 355: // variables
      case 356: // variables_pre_process
      case 357: // variables_may_be_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case 350: // actions
      case 351: // actions_may_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 716 "seclang-parser.yy" // lalr1.cc:859
    {
        return 0;
      }
#line 1222 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 729 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1230 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 7:
#line 735 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as< std::string > ());
      }
#line 1238 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 741 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1246 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 9:
#line 745 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1254 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 749 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1262 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 11:
#line 755 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1270 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 761 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as< std::string > ());
      }
#line 1278 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 13:
#line 767 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setParts(yystack_[0].value.as< std::string > ());
      }
#line 1286 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 773 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as< std::string > ());
      }
#line 1294 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 15:
#line 778 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFormat(celeowaf::audit_log::AuditLog::JSONAuditLogFormat);
      }
#line 1302 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 783 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFormat(celeowaf::audit_log::AuditLog::NativeAuditLogFormat);
      }
#line 1310 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 17:
#line 789 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string relevant_status(yystack_[0].value.as< std::string > ());
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1319 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 796 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1327 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 19:
#line 800 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1335 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 804 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1343 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 21:
#line 808 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::AMQPAuditLogType);
      }
#line 1351 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 814 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 1359 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 23:
#line 818 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 1367 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 822 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecUploadKeepFiles RelevantOnly is not currently supported. Accepted values are On or Off");
        YYERROR;
      }
#line 1376 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 25:
#line 827 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 10);
      }
#line 1385 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 832 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8);
      }
#line 1394 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 27:
#line 837 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as< std::string > ();
      }
#line 1403 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 842 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 1411 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 29:
#line 846 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 1419 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 853 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1427 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 31:
#line 857 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1435 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 32:
#line 864 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1445 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 33:
#line 870 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1456 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 34:
#line 880 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[0].location.end.filename, &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1469 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 35:
#line 889 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[1].location.end.filename, &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1483 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 899 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[0].location.end.filename, &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1496 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 908 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[1].location.end.filename, &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1510 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 921 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1518 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 925 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 1526 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 929 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 1534 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 41:
#line 933 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 1542 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 42:
#line 937 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 1550 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 43:
#line 941 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::InspectFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1558 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 44:
#line 945 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::FuzzyHash(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1566 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 45:
#line 949 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateByteRange(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1574 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 46:
#line 953 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateDTD(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1582 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 47:
#line 957 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 1591 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 48:
#line 962 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateSchema(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1599 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 49:
#line 966 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1607 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 50:
#line 970 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCPF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1615 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 51:
#line 974 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifySSN(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1623 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 52:
#line 978 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifySVNR(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1631 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 53:
#line 982 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 1640 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 54:
#line 987 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 1649 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 55:
#line 992 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Within(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1657 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 56:
#line 996 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ContainsWord(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1665 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 57:
#line 1000 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Contains(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1673 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 58:
#line 1004 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::EndsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1681 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 59:
#line 1008 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Eq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1689 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 60:
#line 1012 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Ge(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1697 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 61:
#line 1016 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Gt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1705 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 62:
#line 1020 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatchF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1713 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 63:
#line 1024 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1721 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 64:
#line 1028 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Le(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1729 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 65:
#line 1032 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Lt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1737 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 66:
#line 1036 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::PmFromFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1745 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 67:
#line 1040 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Pm(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1753 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 68:
#line 1044 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rbl(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1761 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 69:
#line 1048 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1769 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 70:
#line 1052 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::RxGlobal(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1777 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 71:
#line 1056 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrEq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1785 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 72:
#line 1060 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1793 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 73:
#line 1064 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::BeginsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1801 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 74:
#line 1068 "seclang-parser.yy" // lalr1.cc:859
    {
#if defined(WITH_GEOIP) or defined(WITH_MAXMIND)
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::GeoLookup());
#else
        std::stringstream ss;
            ss << "This version of CeleoWAF was not compiled with GeoIP or MaxMind support.";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
#endif  // WITH_GEOIP
      }
#line 1816 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 76:
#line 1083 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(dynamic_cast<actions::transformations::Transformation *>(i.release()));
            } else {
              a->push_back(i.release());
            }
        }
        variables::Variables *v = new variables::Variables();
        for (auto &i : *yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Operator *op = yystack_[1].value.as< std::unique_ptr<Operator> > ().release();
        std::unique_ptr<RuleWithOperator> rule(new RuleWithOperator(
            /* op */ op,
            /* variables */ v,
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[3].location.end.filename)),
            /* line number */ yystack_[3].location.end.line
            ));

        if (driver.addSecRule(std::move(rule)) == false) {
            YYERROR;
        }
      }
#line 1850 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 77:
#line 1113 "seclang-parser.yy" // lalr1.cc:859
    {
        variables::Variables *v = new variables::Variables();
        for (auto &i : *yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        std::unique_ptr<RuleWithOperator> rule(new RuleWithOperator(
            /* op */ yystack_[0].value.as< std::unique_ptr<Operator> > ().release(),
            /* variables */ v,
            /* actions */ NULL,
            /* transformations */ NULL,
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[2].location.end.filename)),
            /* line number */ yystack_[2].location.end.line
            ));
        if (driver.addSecRule(std::move(rule)) == false) {
            YYERROR;
        }
      }
#line 1873 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 78:
#line 1132 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(dynamic_cast<actions::transformations::Transformation *>(i.release()));
            } else {
              a->push_back(i.release());
            }
        }
        std::unique_ptr<RuleUnconditional> rule(new RuleUnconditional(
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[1].location.end.filename)),
            /* line number */ yystack_[1].location.end.line
            ));
        driver.addSecAction(std::move(rule));
      }
#line 1896 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 79:
#line 1151 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string err;
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(dynamic_cast<actions::transformations::Transformation *>(i.release()));
            } else {
              a->push_back(i.release());
            }
        }
        std::unique_ptr<RuleScript> r(new RuleScript(
            /* path to script */ yystack_[1].value.as< std::string > (),
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[1].location.end.filename)),
            /* line number */ yystack_[1].location.end.line
            ));

        if (r->init(&err) == false) {
            driver.error(yystack_[2].location, "Failed to load script: " + err);
            YYERROR;
        }
        if (driver.addSecRuleScript(std::move(r)) == false) {
            YYERROR;
        }
      }
#line 1928 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 80:
#line 1179 "seclang-parser.yy" // lalr1.cc:859
    {
        bool hasDisruptive = false;
        std::vector<actions::Action *> *actions = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            actions->push_back(i.release());
        }
        std::vector<actions::Action *> checkedActions;
        int definedPhase = -1;
        int secRuleDefinedPhase = -1;
        for (actions::Action *a : *actions) {
            actions::Phase *phase = dynamic_cast<actions::Phase *>(a);
            if (a->isDisruptive() == true && dynamic_cast<actions::Block *>(a) == NULL) {
                hasDisruptive = true;
            }
            if (phase != NULL) {
                definedPhase = phase->m_phase;
                secRuleDefinedPhase = phase->m_secRulesPhase;
                delete phase;
            } else if (a->action_kind == actions::Action::RunTimeOnlyIfMatchKind ||
                a->action_kind == actions::Action::RunTimeBeforeMatchAttemptKind) {
                                actions::transformations::None *none = dynamic_cast<actions::transformations::None *>(a);
                if (none != NULL) {
                    driver.error(yystack_[2].location, "The transformation none is not suitable to be part of the SecDefaultActions");
                    YYERROR;
                }
                checkedActions.push_back(a);
            } else {
                driver.error(yystack_[2].location, "The action '" + *a->m_name.get() + "' is not suitable to be part of the SecDefaultActions");
                YYERROR;
            }
        }
        if (definedPhase == -1) {
            definedPhase = celeowaf::Phases::RequestHeadersPhase;
        }

        if (hasDisruptive == false) {
            driver.error(yystack_[2].location, "SecDefaultAction must specify a disruptive action.");
            YYERROR;
        }

        if (!driver.m_defaultActions[definedPhase].empty()) {
            std::stringstream ss;
            ss << "SecDefaultActions can only be placed once per phase and configuration context. Phase ";
            ss << secRuleDefinedPhase;
            ss << " was informed already.";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        for (actions::Action *a : checkedActions) {
            driver.m_defaultActions[definedPhase].push_back(
                std::unique_ptr<actions::Action>(a));
        }

        delete actions;
      }
#line 1989 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 81:
#line 1236 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.addSecMarker(celeowaf::utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()),
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[0].location.end.filename)),
            /* line number */ yystack_[0].location.end.line
        );
      }
#line 2000 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 82:
#line 1243 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::DisabledRuleEngine;
      }
#line 2008 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 83:
#line 1247 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::EnabledRuleEngine;
      }
#line 2016 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 84:
#line 1251 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::DetectionOnlyRuleEngine;
      }
#line 2024 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 85:
#line 1255 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2032 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 86:
#line 1259 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2040 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 87:
#line 1263 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2048 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 88:
#line 1267 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2056 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 89:
#line 1271 "seclang-parser.yy" // lalr1.cc:859
    {
        if (yystack_[0].value.as< std::string > ().length() != 1) {
          driver.error(yystack_[1].location, "Argument separator should be set to a single character.");
          YYERROR;
        }
        driver.m_secArgumentSeparator.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secArgumentSeparator.m_set = true;
      }
#line 2069 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 90:
#line 1280 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_components.push_back(yystack_[0].value.as< std::string > ());
      }
#line 2077 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 91:
#line 1284 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecConnEngine is not yet supported.");
        YYERROR;
      }
#line 2086 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 92:
#line 1289 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2093 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 93:
#line 1292 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secWebAppId.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secWebAppId.m_set = true;
      }
#line 2102 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 94:
#line 1297 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecServerSignature is not supported.");
        YYERROR;
      }
#line 2111 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 95:
#line 1302 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecCacheTransformations is not supported.");
        YYERROR;
      }
#line 2120 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 96:
#line 1307 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecDisableBackendCompression is not supported.");
        YYERROR;
      }
#line 2129 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 97:
#line 1312 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2136 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 98:
#line 1315 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecContentInjection is not yet supported.");
        YYERROR;
      }
#line 2145 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 99:
#line 1320 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2152 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 100:
#line 1323 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecChrootDir is not supported.");
        YYERROR;
      }
#line 2161 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 101:
#line 1328 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecHashEngine is not yet supported.");
        YYERROR;
      }
#line 2170 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 102:
#line 1333 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2177 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 103:
#line 1336 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashKey is not yet supported.");
        YYERROR;
      }
#line 2186 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 104:
#line 1341 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashParam is not yet supported.");
        YYERROR;
      }
#line 2195 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 105:
#line 1346 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashMethodRx is not yet supported.");
        YYERROR;
      }
#line 2204 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 106:
#line 1351 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashMethodPm is not yet supported.");
        YYERROR;
      }
#line 2213 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 107:
#line 1356 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecGsbLookupDb is not supported.");
        YYERROR;
      }
#line 2222 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 108:
#line 1361 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecGuardianLog is not supported.");
        YYERROR;
      }
#line 2231 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 109:
#line 1366 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecInterceptOnError is not yet supported.");
        YYERROR;
      }
#line 2240 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 110:
#line 1371 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2247 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 111:
#line 1374 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecConnReadStateLimit is not yet supported.");
        YYERROR;
      }
#line 2256 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 112:
#line 1379 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecConnWriteStateLimit is not yet supported.");
        YYERROR;
      }
#line 2265 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 113:
#line 1384 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecSensorId is not yet supported.");
        YYERROR;
      }
#line 2274 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 114:
#line 1389 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecRuleInheritance is not yet supported.");
        YYERROR;
      }
#line 2283 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 115:
#line 1394 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2290 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 116:
#line 1397 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecRulePerfTime is not yet supported.");
        YYERROR;
      }
#line 2299 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 117:
#line 1402 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecStreamInBodyInspection is not supported.");
        YYERROR;
      }
#line 2308 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 118:
#line 1407 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecStreamOutBodyInspection is not supported.");
        YYERROR;
      }
#line 2317 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 119:
#line 1412 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.load(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveById: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2334 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 120:
#line 1425 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByTag(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByTag: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2351 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 121:
#line 1438 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByMsg(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByMsg: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2368 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 122:
#line 1451 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByTag(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByTag: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2385 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 123:
#line 1464 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByMsg(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByMsg: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2402 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 124:
#line 1477 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        if (driver.m_exceptions.loadUpdateTargetById(ruleId, std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2432 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 125:
#line 1503 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateActionById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }


        if (driver.m_exceptions.loadUpdateActionById(ruleId, std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateActionById: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2463 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 126:
#line 1531 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
          driver.m_debugLog->setDebugLogLevel(atoi(yystack_[0].value.as< std::string > ().c_str()));
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2479 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 127:
#line 1543 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
            std::string error;
            driver.m_debugLog->setDebugLogFile(yystack_[0].value.as< std::string > (), &error);
            if (error.size() > 0) {
                std::stringstream ss;
                ss << "Failed to start DebugLog: " << error;
                driver.error(yystack_[1].location, ss.str());
                YYERROR;
            }
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2502 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 128:
#line 1563 "seclang-parser.yy" // lalr1.cc:859
    {
#if defined(WITH_GEOIP) or defined(WITH_MAXMIND)
        std::string err;
        std::string file = celeowaf::utils::find_resource(yystack_[0].value.as< std::string > (),
            *yystack_[0].location.end.filename, &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to load locate the GeoDB file from: " << yystack_[0].value.as< std::string > () << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        if (Utils::GeoLookup::getInstance().setDataBase(file, &err) == false) {
            std::stringstream ss;
            ss << "Failed to load the GeoDB from: ";
            ss << file << ". " << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
#else
        std::stringstream ss;
        ss << "This version of CeleoWAF was not compiled with GeoIP or MaxMind support.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
#endif  // WITH_GEOIP
      }
#line 2533 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 129:
#line 1590 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_argumentsLimit.m_set = true;
        driver.m_argumentsLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2542 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 130:
#line 1595 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyJsonDepthLimit.m_set = true;
        driver.m_requestBodyJsonDepthLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2551 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 131:
#line 1601 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2560 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 132:
#line 1606 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2569 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 133:
#line 1611 "seclang-parser.yy" // lalr1.cc:859
    {
        std::stringstream ss;
        ss << "As of CeleoWAF version 3.0, SecRequestBodyInMemoryLimit is no longer ";
        ss << "supported. Instead, you can use your web server configurations to control ";
        ss << "those values. CeleoWAF will follow the web server decision.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
      }
#line 2582 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 134:
#line 1620 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2591 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 135:
#line 1625 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2599 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 136:
#line 1629 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2607 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 137:
#line 1633 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2615 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 138:
#line 1637 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2623 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 139:
#line 1641 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = RulesSet::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 2631 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 140:
#line 1645 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = RulesSet::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 2639 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 143:
#line 1659 "seclang-parser.yy" // lalr1.cc:859
    {
        std::istringstream buf(yystack_[0].value.as< std::string > ());
        std::istream_iterator<std::string> beg(buf), end;
        std::set<std::string> tokens(beg, end);
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        for (std::set<std::string>::iterator it=tokens.begin();
            it!=tokens.end(); ++it)
        {
            driver.m_responseBodyTypeToBeInspected.m_value.insert(*it);
        }
      }
#line 2655 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 144:
#line 1671 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        driver.m_responseBodyTypeToBeInspected.m_clear = true;
        driver.m_responseBodyTypeToBeInspected.m_value.clear();
      }
#line 2665 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 145:
#line 1677 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2673 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 146:
#line 1681 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2681 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 147:
#line 1685 "seclang-parser.yy" // lalr1.cc:859
    {
/* Parser error disabled to avoid breaking default installations with celeowaf.conf-recommended
        std::stringstream ss;
        ss << "As of CeleoWAF version 3.0, SecTmpDir is no longer supported.";
        ss << " Instead, you can use your web server configurations to control when";
        ss << "and where to swap. CeleoWAF will follow the web server decision.";
        driver.error(@0, ss.str());
        YYERROR;
*/
      }
#line 2696 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 150:
#line 1706 "seclang-parser.yy" // lalr1.cc:859
    {
        if (atoi(yystack_[0].value.as< std::string > ().c_str()) == 1) {
          driver.error(yystack_[1].location, "SecCookieFormat 1 is not yet supported.");
          YYERROR;
        }
      }
#line 2707 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 151:
#line 1713 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecCookieV0Separator is not yet supported.");
        YYERROR;
      }
#line 2716 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 153:
#line 1723 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        std::vector<std::string> param;
        double num = 0;
        std::string f;
        std::string file;
        std::string err;
        param = utils::string::ssplit(yystack_[0].value.as< std::string > (), ' ');
        if (param.size() <= 1) {
            std::stringstream ss;
            ss << "Failed to process unicode map, missing ";
            ss << "parameter: " << yystack_[0].value.as< std::string > () << " ";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }

        try {
            num = std::stod(param.back());
        } catch (...) {
            std::stringstream ss;
            ss << "Failed to process unicode map, last parameter is ";
            ss << "expected to be a number: " << param.back() << " ";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        param.pop_back();

        while (param.size() > 0) {
            if (f.empty()) {
                f = param.back();
            } else {
                f = param.back() + " " + f;
            }
            param.pop_back();
        }

        file = celeowaf::utils::find_resource(f, *yystack_[0].location.end.filename, &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to locate the unicode map file from: " << f << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }

        ConfigUnicodeMap::loadConfig(file, num, &driver, &error);

        if (!error.empty()) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }

      }
#line 2774 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 154:
#line 1777 "seclang-parser.yy" // lalr1.cc:859
    {
/* Parser error disabled to avoid breaking default CRS installations with crs-setup.conf-recommended
        driver.error(@0, "SecCollectionTimeout is not yet supported.");
        YYERROR;
*/
      }
#line 2785 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 155:
#line 1784 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_httpblKey.m_set = true;
        driver.m_httpblKey.m_value = yystack_[0].value.as< std::string > ();
      }
#line 2794 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 156:
#line 1792 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable> > > originalList = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> newList(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> newNewList(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> exclusionVars(new std::vector<std::unique_ptr<Variable>>());
        while (!originalList->empty()) {
            std::unique_ptr<Variable> var = std::move(originalList->back());
            originalList->pop_back();
            if (dynamic_cast<VariableModificatorExclusion*>(var.get())) {
                exclusionVars->push_back(std::move(var));
            } else {
                newList->push_back(std::move(var));
            }
        }

        while (!newList->empty()) {
            bool doNotAdd = false;
            std::unique_ptr<Variable> var = std::move(newList->back());
            newList->pop_back();
            for (auto &i : *exclusionVars) {
                if (*var == *i) {
                    doNotAdd = true;
                }
                if (i->belongsToCollection(var.get())) {
                    var->addsKeyExclusion(i.get());
                }
            }
            if (!doNotAdd) {
                newNewList->push_back(std::move(var));
            }
        }
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(newNewList);
      }
#line 2832 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 157:
#line 1829 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2840 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 158:
#line 1833 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2848 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 159:
#line 1840 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2857 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 160:
#line 1845 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2867 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 161:
#line 1851 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2877 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 162:
#line 1857 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2887 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 163:
#line 1863 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2898 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 164:
#line 1870 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2909 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 165:
#line 1880 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2917 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 166:
#line 1884 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2925 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 167:
#line 1888 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_NoDictElement());
      }
#line 2933 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 168:
#line 1892 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2941 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 169:
#line 1896 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2949 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 170:
#line 1900 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_NoDictElement());
      }
#line 2957 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 171:
#line 1904 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2965 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 172:
#line 1908 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2973 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 173:
#line 1912 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_NoDictElement());
      }
#line 2981 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 174:
#line 1916 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2989 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 175:
#line 1920 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2997 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 176:
#line 1924 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_NoDictElement());
      }
#line 3005 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 177:
#line 1928 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3013 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 178:
#line 1932 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3021 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 179:
#line 1936 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_NoDictElement());
      }
#line 3029 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 180:
#line 1940 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3037 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 181:
#line 1944 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3045 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 182:
#line 1948 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_NoDictElement());
      }
#line 3053 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 183:
#line 1952 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3061 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 184:
#line 1956 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3069 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 185:
#line 1960 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_NoDictElement());
      }
#line 3077 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 186:
#line 1964 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3085 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 187:
#line 1968 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3093 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 188:
#line 1972 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_NoDictElement());
      }
#line 3101 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 189:
#line 1976 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3109 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 190:
#line 1980 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3117 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 191:
#line 1984 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_NoDictElement());
      }
#line 3125 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 192:
#line 1988 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3133 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 193:
#line 1992 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3141 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 194:
#line 1996 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_NoDictElement());
      }
#line 3149 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 195:
#line 2000 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3157 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 196:
#line 2004 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3165 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 197:
#line 2008 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_NoDictElement());
      }
#line 3173 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 198:
#line 2012 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3181 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 199:
#line 2016 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3189 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 200:
#line 2020 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_NoDictElement());
      }
#line 3197 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 201:
#line 2024 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3205 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 202:
#line 2028 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3213 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 203:
#line 2032 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_NoDictElement());
      }
#line 3221 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 204:
#line 2036 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3229 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 205:
#line 2040 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3237 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 206:
#line 2044 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_NoDictElement());
      }
#line 3245 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 207:
#line 2048 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3253 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 208:
#line 2052 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3261 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 209:
#line 2056 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_NoDictElement());
      }
#line 3269 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 210:
#line 2060 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3277 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 211:
#line 2064 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3285 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 212:
#line 2068 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_NoDictElement());
      }
#line 3293 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 213:
#line 2072 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3301 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 214:
#line 2076 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3309 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 215:
#line 2080 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_NoDictElement());
      }
#line 3317 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 216:
#line 2084 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3325 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 217:
#line 2088 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3333 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 218:
#line 2092 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_NoDictElement());
      }
#line 3341 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 219:
#line 2096 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3349 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 220:
#line 2100 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3357 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 221:
#line 2104 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV"));
      }
#line 3365 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 222:
#line 2108 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3373 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 223:
#line 2112 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3381 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 224:
#line 2116 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML_NoDictElement());
      }
#line 3389 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 225:
#line 2120 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3397 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 226:
#line 2124 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3405 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 227:
#line 2128 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_NoDictElement());
      }
#line 3413 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 228:
#line 2132 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3421 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 229:
#line 2136 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3429 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 230:
#line 2140 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3437 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 231:
#line 2144 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_NoDictElement());
      }
#line 3445 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 232:
#line 2148 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3453 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 233:
#line 2152 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3461 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 234:
#line 2156 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3469 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 235:
#line 2160 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_NoDictElement());
      }
#line 3477 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 236:
#line 2164 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3485 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 237:
#line 2168 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3493 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 238:
#line 2172 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3501 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 239:
#line 2176 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_NoDictElement());
      }
#line 3509 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 240:
#line 2180 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3517 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 241:
#line 2184 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3525 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 242:
#line 2188 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3533 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 243:
#line 2192 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_NoDictElement());
      }
#line 3541 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 244:
#line 2196 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3549 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 245:
#line 2200 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3557 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 246:
#line 2204 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3565 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 247:
#line 2208 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_NoDictElement());
      }
#line 3573 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 248:
#line 2212 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3581 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 249:
#line 2216 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3589 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 250:
#line 2220 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3597 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 251:
#line 2224 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_NoDictElement());
      }
#line 3605 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 252:
#line 2228 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3613 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 253:
#line 2232 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3621 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 254:
#line 2236 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_NoDictElement());
      }
#line 3629 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 255:
#line 2240 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3637 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 256:
#line 2244 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3645 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 257:
#line 2248 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_NoDictElement());
      }
#line 3653 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 258:
#line 2253 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3661 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 259:
#line 2257 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3669 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 260:
#line 2261 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_NoDictElement());
      }
#line 3677 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 261:
#line 2266 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3685 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 262:
#line 2270 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3693 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 263:
#line 2274 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_NoDictElement());
      }
#line 3701 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 264:
#line 2279 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseContentType());
      }
#line 3709 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 265:
#line 2284 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3717 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 266:
#line 2288 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3725 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 267:
#line 2292 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_NoDictElement());
      }
#line 3733 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 268:
#line 2296 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsCombinedSize());
      }
#line 3741 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 269:
#line 2300 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::AuthType());
      }
#line 3749 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 270:
#line 2304 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesCombinedSize());
      }
#line 3757 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 271:
#line 2308 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FullRequest());
      }
#line 3765 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 272:
#line 2312 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FullRequestLength());
      }
#line 3773 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 273:
#line 2316 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::InboundDataError());
      }
#line 3781 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 274:
#line 2320 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVar());
      }
#line 3789 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 275:
#line 2324 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarName());
      }
#line 3797 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 276:
#line 2328 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartBoundaryQuoted());
      }
#line 3805 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 277:
#line 2332 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartBoundaryWhiteSpace());
      }
#line 3813 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 278:
#line 2336 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartCrlfLFLines());
      }
#line 3821 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 279:
#line 2340 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartDateAfter());
      }
#line 3829 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 280:
#line 2344 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartDateBefore());
      }
#line 3837 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 281:
#line 2348 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartFileLimitExceeded());
      }
#line 3845 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 282:
#line 2352 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartHeaderFolding());
      }
#line 3853 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 283:
#line 2356 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidHeaderFolding());
      }
#line 3861 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 284:
#line 2360 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidPart());
      }
#line 3869 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 285:
#line 2364 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidQuoting());
      }
#line 3877 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 286:
#line 2368 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartLFLine());
      }
#line 3885 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 287:
#line 2372 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartMissingSemicolon());
      }
#line 3893 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 288:
#line 2376 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartMissingSemicolon());
      }
#line 3901 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 289:
#line 2380 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartStrictError());
      }
#line 3909 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 290:
#line 2384 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartUnmatchedBoundary());
      }
#line 3917 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 291:
#line 2388 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::OutboundDataError());
      }
#line 3925 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 292:
#line 2392 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::PathInfo());
      }
#line 3933 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 293:
#line 2396 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::QueryString());
      }
#line 3941 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 294:
#line 2400 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemoteAddr());
      }
#line 3949 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 295:
#line 2404 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemoteHost());
      }
#line 3957 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 296:
#line 2408 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemotePort());
      }
#line 3965 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 297:
#line 2412 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyError());
      }
#line 3973 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 298:
#line 2416 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyErrorMsg());
      }
#line 3981 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 299:
#line 2420 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessor());
      }
#line 3989 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 300:
#line 2424 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessorError());
      }
#line 3997 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 301:
#line 2428 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessorErrorMsg());
      }
#line 4005 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 302:
#line 2432 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBasename());
      }
#line 4013 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 303:
#line 2436 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBody());
      }
#line 4021 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 304:
#line 2440 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBodyLength());
      }
#line 4029 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 305:
#line 2444 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestFilename());
      }
#line 4037 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 306:
#line 2448 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestLine());
      }
#line 4045 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 307:
#line 2452 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestMethod());
      }
#line 4053 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 308:
#line 2456 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestProtocol());
      }
#line 4061 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 309:
#line 2460 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestURI());
      }
#line 4069 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 310:
#line 2464 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestURIRaw());
      }
#line 4077 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 311:
#line 2468 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseBody());
      }
#line 4085 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 312:
#line 2472 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseContentLength());
      }
#line 4093 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 313:
#line 2476 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseProtocol());
      }
#line 4101 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 314:
#line 2480 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseStatus());
      }
#line 4109 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 315:
#line 2484 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerAddr());
      }
#line 4117 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 316:
#line 2488 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerName());
      }
#line 4125 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 317:
#line 2492 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerPort());
      }
#line 4133 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 318:
#line 2496 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::SessionID());
      }
#line 4141 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 319:
#line 2500 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UniqueID());
      }
#line 4149 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 320:
#line 2504 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UrlEncodedError());
      }
#line 4157 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 321:
#line 2508 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UserID());
      }
#line 4165 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 322:
#line 2512 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Status());
      }
#line 4173 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 323:
#line 2516 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Status());
      }
#line 4181 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 324:
#line 2520 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::WebAppId());
      }
#line 4189 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 325:
#line 2524 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4200 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 326:
#line 2532 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new CWafBuild(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4211 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 327:
#line 2539 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4222 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 328:
#line 2546 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4233 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 329:
#line 2553 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4244 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 330:
#line 2560 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4255 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 331:
#line 2567 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4266 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 332:
#line 2574 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4277 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 333:
#line 2581 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4288 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 334:
#line 2588 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4299 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 335:
#line 2595 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4310 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 336:
#line 2602 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4321 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 337:
#line 2609 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4332 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 338:
#line 2619 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as< std::string > ()));
      }
#line 4340 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 339:
#line 2623 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as< std::string > ()));
      }
#line 4348 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 340:
#line 2627 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 4356 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 341:
#line 2631 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4364 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 342:
#line 2635 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Block(yystack_[0].value.as< std::string > ()));
      }
#line 4372 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 343:
#line 2639 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as< std::string > ()));
      }
#line 4380 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 344:
#line 2643 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as< std::string > ()));
      }
#line 4388 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 345:
#line 2647 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=on"));
        driver.m_auditLog->setCtlAuditEngineActive();
      }
#line 4397 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 346:
#line 2652 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=off"));
      }
#line 4405 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 347:
#line 2656 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=relevantonly"));
        driver.m_auditLog->setCtlAuditEngineActive();
      }
#line 4414 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 348:
#line 2661 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as< std::string > ()));
      }
#line 4422 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 349:
#line 2665 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as< std::string > ()));
      }
#line 4430 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 350:
#line 2669 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as< std::string > ()));
      }
#line 4438 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 351:
#line 2673 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorURLENCODED(yystack_[0].value.as< std::string > ()));
      }
#line 4446 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 352:
#line 2677 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4455 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 353:
#line 2682 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4464 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 354:
#line 2687 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "true"));
      }
#line 4472 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 355:
#line 2691 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "false"));
      }
#line 4480 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 356:
#line 2695 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=on"));
      }
#line 4488 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 357:
#line 2699 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=off"));
      }
#line 4496 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 358:
#line 2703 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=detectiononly"));
      }
#line 4504 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 359:
#line 2707 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as< std::string > ()));
      }
#line 4512 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 360:
#line 2711 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4520 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 361:
#line 2715 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as< std::string > ()));
      }
#line 4528 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 362:
#line 2719 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4536 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 363:
#line 2723 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as< std::string > ()));
      }
#line 4544 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 364:
#line 2727 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 4552 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 365:
#line 2731 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Drop(yystack_[0].value.as< std::string > ()));
      }
#line 4560 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 366:
#line 2735 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Exec(yystack_[0].value.as< std::string > ()));
      }
#line 4568 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 367:
#line 2739 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("ExpireVar", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 4577 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 368:
#line 2744 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as< std::string > ()));
      }
#line 4585 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 369:
#line 2748 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4593 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 370:
#line 2752 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::LogData(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4601 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 371:
#line 2756 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as< std::string > ()));
      }
#line 4609 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 372:
#line 2760 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as< std::string > ()));
      }
#line 4617 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 373:
#line 2764 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Msg(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4625 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 374:
#line 2768 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as< std::string > ()));
      }
#line 4633 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 375:
#line 2772 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4641 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 376:
#line 2776 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as< std::string > ()));
      }
#line 4649 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 377:
#line 2780 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as< std::string > ()));
      }
#line 4657 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 378:
#line 2784 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 4665 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 379:
#line 2788 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as< std::string > ()));
      }
#line 4673 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 380:
#line 2792 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 4681 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 381:
#line 2796 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 4689 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 382:
#line 2800 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4697 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 383:
#line 2804 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as< std::string > ()));
      }
#line 4705 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 384:
#line 2808 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseArg", yystack_[1].location);
      }
#line 4713 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 385:
#line 2812 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseMatched", yystack_[1].location);
      }
#line 4721 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 386:
#line 2816 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseMatchedBytes", yystack_[1].location);
      }
#line 4729 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 387:
#line 2820 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseRequestHeader", yystack_[1].location);
      }
#line 4737 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 388:
#line 2824 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseResponseHeader", yystack_[1].location);
      }
#line 4745 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 389:
#line 2828 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetENV(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4753 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 390:
#line 2832 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetRSC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4761 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 391:
#line 2836 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetSID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4769 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 392:
#line 2840 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetUID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4777 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 393:
#line 2844 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<actions::Action> > () = std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ());
      }
#line 4785 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 394:
#line 2848 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as< std::string > ()));
      }
#line 4793 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 395:
#line 2852 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as< std::string > ()));
      }
#line 4801 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 396:
#line 2856 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as< std::string > ()));
      }
#line 4809 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 397:
#line 2860 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as< std::string > ()));
      }
#line 4817 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 398:
#line 2864 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Tag(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4825 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 399:
#line 2868 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as< std::string > ()));
      }
#line 4833 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 400:
#line 2872 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as< std::string > ()));
      }
#line 4841 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 401:
#line 2876 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4849 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 402:
#line 2880 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4857 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 403:
#line 2884 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4865 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 404:
#line 2888 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4873 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 405:
#line 2892 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Encode(yystack_[0].value.as< std::string > ()));
      }
#line 4881 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 406:
#line 2896 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Decode(yystack_[0].value.as< std::string > ()));
      }
#line 4889 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 407:
#line 2900 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64DecodeExt(yystack_[0].value.as< std::string > ()));
      }
#line 4897 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 408:
#line 2904 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as< std::string > ()));
      }
#line 4905 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 409:
#line 2908 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as< std::string > ()));
      }
#line 4913 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 410:
#line 2912 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as< std::string > ()));
      }
#line 4921 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 411:
#line 2916 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::EscapeSeqDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4929 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 412:
#line 2920 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as< std::string > ()));
      }
#line 4937 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 413:
#line 2924 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4945 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 414:
#line 2928 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as< std::string > ()));
      }
#line 4953 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 415:
#line 2932 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UpperCase(yystack_[0].value.as< std::string > ()));
      }
#line 4961 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 416:
#line 2936 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as< std::string > ()));
      }
#line 4969 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 417:
#line 2940 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4977 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 418:
#line 2944 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlEncode(yystack_[0].value.as< std::string > ()));
      }
#line 4985 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 419:
#line 2948 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as< std::string > ()));
      }
#line 4993 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 420:
#line 2952 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 5001 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 421:
#line 2956 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 5009 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 422:
#line 2960 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as< std::string > ()));
      }
#line 5017 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 423:
#line 2964 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as< std::string > ()));
      }
#line 5025 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 424:
#line 2968 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5033 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 425:
#line 2972 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5041 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 426:
#line 2976 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5049 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 427:
#line 2980 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as< std::string > ()));
      }
#line 5057 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 428:
#line 2984 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::TrimLeft(yystack_[0].value.as< std::string > ()));
      }
#line 5065 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 429:
#line 2988 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::TrimRight(yystack_[0].value.as< std::string > ()));
      }
#line 5073 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 430:
#line 2992 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as< std::string > ()));
      }
#line 5081 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 431:
#line 2996 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as< std::string > ()));
      }
#line 5089 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 432:
#line 3000 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as< std::string > ()));
      }
#line 5097 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 433:
#line 3004 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as< std::string > ()));
      }
#line 5105 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 434:
#line 3008 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as< std::string > ()));
      }
#line 5113 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 435:
#line 3012 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as< std::string > ()));
      }
#line 5121 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 436:
#line 3016 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as< std::string > ()));
      }
#line 5129 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 437:
#line 3023 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 5137 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 438:
#line 3027 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 5145 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 439:
#line 3031 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5153 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 440:
#line 3035 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5161 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 441:
#line 3039 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5169 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 442:
#line 3046 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 5178 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 443:
#line 3051 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 5187 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 444:
#line 3056 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5197 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 445:
#line 3062 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5207 "seclang-parser.cc" // lalr1.cc:859
    break;


#line 5211 "seclang-parser.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  seclang_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  seclang_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int seclang_parser::yypact_ninf_ = -405;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short int
  seclang_parser::yypact_[] =
  {
    2783,  -405,  -257,  -405,     6,  -405,  -156,  -405,  -405,  -405,
    -405,  -405,  -293,  -405,  -405,  -405,  -405,  -405,  -275,  -405,
    -405,  -405,  -154,  -149,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -147,
    -405,  -405,  -148,  -405,  -136,  -405,  -135,  -134,  -405,  -260,
     -90,   -90,  -405,  -405,  -405,  -405,  -130,  -301,  -405,  -405,
    -405,  1495,  1495,  1495,   -90,  -272,  -128,  -405,  -405,  -405,
    -126,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    1495,   -90,  2927,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  2345,  -255,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -266,  -405,  -405,  -405,  -405,
    -124,  -122,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  2478,  -405,  2478,  -405,  2478,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  2478,  -405,  -405,  -405,  -405,
    -405,  -405,  2478,  2478,  2478,  2478,  -405,  -405,  -405,  -405,
    2478,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  3114,
    -405,     3,  -405,  -405,  -405,  -405,  -405,  -405,  2678,  2678,
    -155,  -153,  -151,  -146,  -143,  -141,  -139,  -133,  -131,  -129,
    -127,  -125,  -123,  -121,  -119,  -117,  -115,  -405,  -113,  -111,
    -109,  -107,  -405,  -405,  -104,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -102,  -405,  -405,  -405,  -405,  -405,   461,  -405,  -405,  -405,
    -100,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,   551,   641,   977,  1067,  1157,   -98,   -94,
    1587,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,    18,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  2012,  -405,  -405,
    -405,  -405,  2678,   -80,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  2568,  2568,  2568,
    2568,  2568,  2568,  2568,  2568,  2568,     2,  3114,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  2568,  -405,
    -405,  -405,  -405,  2568,  -405,  -405,  2568,  -405,  -405,  2568,
    -405,  -405,  2568,  -405,  -405,  2568,  -405,  -405,  -405,  -405,
       7,  1679,  2145,  2478,  2478,  2478,  -405,  -405,  2478,  2478,
    2478,  -405,  2478,  2478,  2478,  2478,  2478,  2478,  2478,  2478,
    2478,  2478,  2478,  2478,  2478,  2478,  2478,  2478,  -405,  2478,
    2478,  2478,  2478,  -405,  -405,  2478,  2478,  2478,  2478,  2478,
     -90,  -405,  2568,  -405,  2478,  2478,  2478,  -405,  -405,  -405,
    -405,  -405,  2678,  2678,  -405,  -405,  2568,  2568,  2568,  2568,
    2568,  2568,  2568,  2568,  2568,  2568,  2568,  2568,  2568,  2568,
    2568,  2568,  2568,  2568,  2568,  2568,  2568,  2568,  2568,  2568,
    2568,  2568,  2568,  2568,  2568,  2568,  2568,  2568,  -405,  2568,
    2568,  2568,  -405,  -405
  };

  const unsigned short int
  seclang_parser::yydefact_[] =
  {
       0,     2,     0,   144,     0,    90,     0,    89,    93,    94,
       7,     6,     0,    11,    14,    12,    13,    17,     0,   127,
     126,    95,     0,     0,   103,   104,   105,   106,   100,   128,
     107,   108,   142,   141,   111,   112,   113,   129,   130,     0,
     133,   131,     0,   132,     0,   134,     0,     0,   116,     0,
       0,     0,    81,   153,   154,   155,     0,     0,   119,   121,
     120,     0,     0,     0,     0,     0,     0,    27,    25,    26,
       0,   143,   149,   150,   151,   148,   152,   117,   118,   147,
       0,     0,     0,     4,    75,     5,    99,    98,    15,    16,
      92,    91,     9,    10,     8,    20,    21,    19,    18,    97,
      96,   102,   101,    86,    85,   135,   136,    88,    87,   137,
     138,   115,   114,    84,    82,    83,     0,     0,   338,   339,
     340,   341,   342,   343,   344,     0,   348,   349,   350,   351,
       0,     0,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,     0,   371,     0,   372,     0,   374,   375,   376,
     377,   378,   379,   380,   381,     0,   383,   384,   385,   386,
     387,   388,     0,     0,     0,     0,   394,   395,   396,   397,
       0,   405,   406,   407,   408,   420,   426,   411,   412,   413,
     424,   425,   432,   414,   410,   419,   431,   430,   403,   402,
     401,   435,   434,   423,   421,   436,   422,   409,   404,   427,
     428,   429,   415,   418,   417,   416,   433,   399,   400,     0,
      78,    31,    33,    80,   110,   109,   139,   140,     0,     0,
     167,   170,   173,   176,   179,   182,   185,   188,   191,   194,
     197,   200,   203,   206,   209,   212,   215,   268,   257,   218,
     254,   260,   269,   270,   227,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   298,   297,   301,   300,   299,   302,   304,   303,   305,
     263,   306,   307,   308,   310,   309,   231,   311,   312,   264,
     267,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     324,   322,   323,   235,   239,   247,   251,   243,   221,   224,
       0,   326,   325,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   122,   157,   162,   123,   124,   125,
      23,    22,    24,    29,    28,   145,   146,     0,   156,    79,
       1,     3,     0,   438,   393,   358,   357,   356,   346,   345,
     347,   353,   352,   355,   354,   444,   445,   369,   370,   373,
     382,   389,   390,   391,   392,   398,     0,     0,   164,   163,
     165,   166,   168,   169,   171,   172,   174,   175,   177,   178,
     180,   181,   183,   184,   186,   187,   189,   190,   192,   193,
     195,   196,   198,   199,   201,   202,   204,   205,   207,   208,
     210,   211,   213,   214,   255,   256,   216,   217,   252,   253,
     258,   259,   225,   226,   261,   262,   229,   230,   228,   265,
     266,   233,   234,   232,   237,   238,   236,   245,   246,   244,
     249,   250,   248,   241,   242,   240,   219,   220,   222,   223,
       0,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
      77,    34,    36,   437,     0,     0,     0,   442,   443,    30,
      32,   158,     0,     0,   159,    35,    37,    73,    57,    56,
      58,    59,    44,    60,    53,    61,    43,    62,    63,    64,
      65,    66,    67,    68,    54,    69,    70,    71,    72,    45,
      46,    47,    48,    49,    50,    51,    52,    55,    76,   439,
     440,   441,   161,   160
  };

  const short int
  seclang_parser::yypgoto_[] =
  {
    -405,  -405,   -74,  -405,   -47,  -179,  -405,  -404,  -405,  -405,
     -51,  -270,   -61,  -323,  -405,  -137
  };

  const short int
  seclang_parser::yydefgoto_[] =
  {
      -1,    82,    83,    84,   210,   211,   480,   481,    85,   337,
     324,   325,   356,   212,   344,   357
  };

  const unsigned short int
  seclang_parser::yytable_[] =
  {
     326,   326,   326,   216,   213,   367,   367,   358,   341,   359,
     116,   327,   328,   441,   217,    92,    93,   329,   360,   326,
      94,   484,   485,   486,   441,   361,   362,   363,   364,   338,
     366,    95,    96,   365,   339,    97,   330,   331,   495,    98,
     440,   332,   348,   349,   490,   113,     0,   350,   114,   115,
     345,    86,    87,   346,   347,   343,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,     0,   418,
      88,    89,    90,    91,    99,   100,     0,   368,   369,   101,
     102,   103,   104,   105,   106,     0,   423,   426,   429,   432,
     435,     0,   107,   108,   111,   112,   109,   110,   214,   215,
     333,   334,   335,   336,   351,   352,   353,   354,     0,   370,
     371,   372,   373,   374,   375,     0,     0,     0,   376,   377,
     482,   378,   379,   380,   381,   382,   383,     0,     0,     0,
       0,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   209,
     412,   413,   414,   415,   419,   420,   436,   437,     0,   326,
     438,   439,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   483,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   496,   497,   498,   499,     0,
       0,   500,   501,   502,     0,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   489,   519,   520,   521,   522,   491,     0,   523,   524,
     525,   526,   527,     0,     0,     0,     0,   529,   530,   531,
       0,     0,     0,     0,     0,     0,     0,   488,     0,     0,
       0,     0,   488,     0,     0,   488,     0,     0,   488,     0,
       0,   488,     0,     0,   488,     0,     0,     0,     0,     0,
     494,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   488,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   532,   533,   528,     0,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,     0,   488,   488,
     488,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,   416,   417,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,   421,   422,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   355,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,   424,   425,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   355,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,   427,   428,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   355,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,   430,   431,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   355,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,   433,   434,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   492,   493,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,     0,     0,     0,     0,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,     0,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     0,     0,     0,     0,     0,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,     0,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     355,     0,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     0,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   355,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,     0,     0,
       0,     0,     0,     0,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     2,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   355,     0,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   487,     0,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,   340,     0,     0,
       0,     2,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       4,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   116,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208
  };

  const short int
  seclang_parser::yycheck_[] =
  {
      61,    62,    63,   304,    51,     3,     3,   144,    82,   146,
     100,    62,    63,     6,   315,   308,   309,    64,   155,    80,
     313,   101,   102,   103,     6,   162,   163,   164,   165,    80,
     209,   306,   307,   170,    81,   310,   308,   309,   442,   314,
     310,   313,   308,   309,   367,   305,    -1,   313,   308,   309,
     305,   308,   309,   308,   309,   116,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,    -1,   286,
     144,   145,   308,   309,   308,   309,    -1,   218,   219,   308,
     309,   308,   309,   311,   312,    -1,   303,   304,   305,   306,
     307,    -1,   308,   309,   308,   309,   311,   312,   308,   309,
     308,   309,   308,   309,   308,   309,   308,   309,    -1,   344,
     345,   344,   345,   344,   345,    -1,    -1,    -1,   344,   345,
     337,   344,   345,   344,   345,   344,   345,    -1,    -1,    -1,
      -1,   344,   345,   344,   345,   344,   345,   344,   345,   344,
     345,   344,   345,   344,   345,   344,   345,   344,   345,   344,
     345,   344,   345,   344,   345,   344,   345,   344,   345,   329,
     344,   345,   344,   345,   344,   345,   344,   345,    -1,   310,
     344,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   442,   443,   444,   445,    -1,
      -1,   448,   449,   450,    -1,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   329,   469,   470,   471,   472,   329,    -1,   475,   476,
     477,   478,   479,    -1,    -1,    -1,    -1,   484,   485,   486,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,
      -1,    -1,   423,    -1,    -1,   426,    -1,    -1,   429,    -1,
      -1,   432,    -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,
     441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   492,   493,   480,    -1,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,    -1,   529,   530,
     531,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,   344,   345,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,   344,   345,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,   344,   345,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   328,    -1,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
      -1,   344,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   328,    -1,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
      -1,   344,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   328,    -1,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
      -1,   344,   345,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   328,    -1,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,    -1,     0,    -1,    -1,    -1,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,     0,    -1,    -1,
      -1,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     143,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   100,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,    -1,    -1,    -1,    -1,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237
  };

  const unsigned short int
  seclang_parser::yystos_[] =
  {
       0,     0,     4,     5,   143,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   347,   348,   349,   354,   308,   309,   144,   145,
     308,   309,   308,   309,   313,   306,   307,   310,   314,   308,
     309,   308,   309,   308,   309,   311,   312,   308,   309,   311,
     312,   308,   309,   305,   308,   309,   100,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   329,
     350,   351,   359,   350,   308,   309,   304,   315,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   356,   357,   358,   356,   356,   350,
     308,   309,   313,   308,   309,   308,   309,   355,   356,   350,
       0,   348,   104,   358,   360,   305,   308,   309,   308,   309,
     313,   308,   309,   308,   309,   328,   358,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   351,     3,   358,   358,
     344,   345,   344,   345,   344,   345,   344,   345,   344,   345,
     344,   345,   344,   345,   344,   345,   344,   345,   344,   345,
     344,   345,   344,   345,   344,   345,   344,   345,   344,   345,
     344,   345,   344,   345,   344,   345,   344,   345,   344,   345,
     344,   345,   344,   345,   344,   345,   344,   345,   361,   344,
     345,   344,   345,   361,   344,   345,   361,   344,   345,   361,
     344,   345,   361,   344,   345,   361,   344,   345,   344,   345,
     357,     6,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     352,   353,   361,   358,   101,   102,   103,   328,   358,   329,
     359,   329,     8,     9,   358,   353,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   350,   361,
     361,   361,   358,   358
  };

  const unsigned short int
  seclang_parser::yyr1_[] =
  {
       0,   346,   347,   347,   347,   348,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     350,   350,   351,   351,   352,   352,   352,   352,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   355,   356,   356,   357,
     357,   357,   357,   357,   357,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   360,   360,   360,
     360,   360,   361,   361,   361,   361
  };

  const unsigned char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     2,     2,
       3,     1,     3,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     4,     3,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     2,     2,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     1,     2,     2,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     2,     2,     1,
       2,     2,     2,     1,     2,     2,     2,     1,     2,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       3,     3,     2,     2,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const seclang_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"",
  "\"CONFIG_CONTENT_INJECTION\"", "\"CONGIG_DIR_RESPONSE_BODY_MP_CLEAR\"",
  "PIPE", "NEW_LINE", "VAR_COUNT", "VAR_EXCLUSION", "VARIABLE_ARGS",
  "VARIABLE_ARGS_POST", "VARIABLE_ARGS_GET", "VARIABLE_FILES_SIZES",
  "VARIABLE_FILES_NAMES", "VARIABLE_FILES_TMP_CONTENT",
  "VARIABLE_MULTIPART_FILENAME", "VARIABLE_MULTIPART_NAME",
  "VARIABLE_MATCHED_VARS_NAMES", "VARIABLE_MATCHED_VARS", "VARIABLE_FILES",
  "VARIABLE_REQUEST_COOKIES", "VARIABLE_REQUEST_HEADERS",
  "VARIABLE_RESPONSE_HEADERS", "VARIABLE_GEO",
  "VARIABLE_REQUEST_COOKIES_NAMES", "VARIABLE_MULTIPART_PART_HEADERS",
  "VARIABLE_ARGS_COMBINED_SIZE", "VARIABLE_ARGS_GET_NAMES",
  "VARIABLE_RULE", "\"Variable ARGS_NAMES\"", "VARIABLE_ARGS_POST_NAMES",
  "\"AUTH_TYPE\"", "\"FILES_COMBINED_SIZE\"", "\"FILES_TMPNAMES\"",
  "\"FULL_REQUEST\"", "\"FULL_REQUEST_LENGTH\"", "\"INBOUND_DATA_ERROR\"",
  "\"MATCHED_VAR\"", "\"MATCHED_VAR_NAME\"",
  "VARIABLE_MULTIPART_BOUNDARY_QUOTED",
  "VARIABLE_MULTIPART_BOUNDARY_WHITESPACE", "\"MULTIPART_CRLF_LF_LINES\"",
  "\"MULTIPART_DATA_AFTER\"", "VARIABLE_MULTIPART_DATA_BEFORE",
  "\"MULTIPART_FILE_LIMIT_EXCEEDED\"", "\"MULTIPART_HEADER_FOLDING\"",
  "\"MULTIPART_INVALID_HEADER_FOLDING\"",
  "VARIABLE_MULTIPART_INVALID_PART", "\"MULTIPART_INVALID_QUOTING\"",
  "VARIABLE_MULTIPART_LF_LINE", "VARIABLE_MULTIPART_MISSING_SEMICOLON",
  "VARIABLE_MULTIPART_SEMICOLON_MISSING", "\"MULTIPART_STRICT_ERROR\"",
  "\"MULTIPART_UNMATCHED_BOUNDARY\"", "\"OUTBOUND_DATA_ERROR\"",
  "\"PATH_INFO\"", "\"QUERY_STRING\"", "\"REMOTE_ADDR\"",
  "\"REMOTE_HOST\"", "\"REMOTE_PORT\"", "\"REQBODY_ERROR_MSG\"",
  "\"REQBODY_ERROR\"", "\"REQBODY_PROCESSOR_ERROR_MSG\"",
  "\"REQBODY_PROCESSOR_ERROR\"", "\"REQBODY_PROCESSOR\"",
  "\"REQUEST_BASENAME\"", "\"REQUEST_BODY_LENGTH\"", "\"REQUEST_BODY\"",
  "\"REQUEST_FILENAME\"", "VARIABLE_REQUEST_HEADERS_NAMES",
  "\"REQUEST_LINE\"", "\"REQUEST_METHOD\"", "\"REQUEST_PROTOCOL\"",
  "\"REQUEST_URI_RAW\"", "\"REQUEST_URI\"", "\"RESOURCE\"",
  "\"RESPONSE_BODY\"", "\"RESPONSE_CONTENT_LENGTH\"",
  "VARIABLE_RESPONSE_CONTENT_TYPE", "VARIABLE_RESPONSE_HEADERS_NAMES",
  "\"RESPONSE_PROTOCOL\"", "\"RESPONSE_STATUS\"", "\"SERVER_ADDR\"",
  "\"SERVER_NAME\"", "\"SERVER_PORT\"", "\"SESSIONID\"", "\"UNIQUE_ID\"",
  "\"URLENCODED_ERROR\"", "\"USERID\"", "\"WEBAPPID\"",
  "\"VARIABLE_STATUS\"", "\"VARIABLE_STATUS_LINE\"", "\"VARIABLE_IP\"",
  "\"VARIABLE_GLOBAL\"", "\"VARIABLE_TX\"", "\"VARIABLE_SESSION\"",
  "\"VARIABLE_USER\"", "\"RUN_TIME_VAR_ENV\"", "\"RUN_TIME_VAR_XML\"",
  "\"SetVar\"", "SETVAR_OPERATION_EQUALS", "SETVAR_OPERATION_EQUALS_PLUS",
  "SETVAR_OPERATION_EQUALS_MINUS", "\"NOT\"", "\"OPERATOR_BEGINS_WITH\"",
  "\"OPERATOR_CONTAINS\"", "\"OPERATOR_CONTAINS_WORD\"",
  "\"OPERATOR_DETECT_SQLI\"", "\"OPERATOR_DETECT_XSS\"",
  "\"OPERATOR_ENDS_WITH\"", "\"OPERATOR_EQ\"", "\"OPERATOR_FUZZY_HASH\"",
  "\"OPERATOR_GEOLOOKUP\"", "\"OPERATOR_GE\"", "\"OPERATOR_GSB_LOOKUP\"",
  "\"OPERATOR_GT\"", "\"OPERATOR_INSPECT_FILE\"",
  "\"OPERATOR_IP_MATCH_FROM_FILE\"", "\"OPERATOR_IP_MATCH\"",
  "\"OPERATOR_LE\"", "\"OPERATOR_LT\"", "\"OPERATOR_PM_FROM_FILE\"",
  "\"OPERATOR_PM\"", "\"OPERATOR_RBL\"", "\"OPERATOR_RSUB\"",
  "\"Operator RX (content only)\"", "\"OPERATOR_RX\"",
  "\"OPERATOR_RX_GLOBAL\"", "\"OPERATOR_STR_EQ\"",
  "\"OPERATOR_STR_MATCH\"", "\"OPERATOR_UNCONDITIONAL_MATCH\"",
  "\"OPERATOR_VALIDATE_BYTE_RANGE\"", "\"OPERATOR_VALIDATE_DTD\"",
  "\"OPERATOR_VALIDATE_HASH\"", "\"OPERATOR_VALIDATE_SCHEMA\"",
  "\"OPERATOR_VALIDATE_URL_ENCODING\"",
  "\"OPERATOR_VALIDATE_UTF8_ENCODING\"", "\"OPERATOR_VERIFY_CC\"",
  "\"OPERATOR_VERIFY_CPF\"", "\"OPERATOR_VERIFY_SSN\"",
  "\"OPERATOR_VERIFY_SVNR\"", "\"OPERATOR_WITHIN\"",
  "CONFIG_DIR_AUDIT_LOG_FMT", "JSON", "NATIVE",
  "\"ACTION_CTL_RULE_ENGINE\"", "\"Accuracy\"", "\"Allow\"", "\"Append\"",
  "\"AuditLog\"", "\"Block\"", "\"Capture\"", "\"Chain\"",
  "\"ACTION_CTL_AUDIT_ENGINE\"", "\"ACTION_CTL_AUDIT_LOG_PARTS\"",
  "\"ACTION_CTL_BDY_JSON\"", "\"ACTION_CTL_BDY_XML\"",
  "\"ACTION_CTL_BDY_URLENCODED\"", "\"ACTION_CTL_FORCE_REQ_BODY_VAR\"",
  "\"ACTION_CTL_REQUEST_BODY_ACCESS\"", "\"ACTION_CTL_RULE_REMOVE_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_BY_TAG\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG\"", "\"Deny\"",
  "\"DeprecateVar\"", "\"Drop\"", "\"Exec\"", "\"ExpireVar\"", "\"Id\"",
  "\"InitCol\"", "\"Log\"", "\"LogData\"", "\"Maturity\"", "\"Msg\"",
  "\"MultiMatch\"", "\"NoAuditLog\"", "\"NoLog\"", "\"Pass\"", "\"Pause\"",
  "\"Phase\"", "\"Prepend\"", "\"Proxy\"", "\"Redirect\"", "\"Rev\"",
  "\"SanitiseArg\"", "\"SanitiseMatched\"", "\"SanitiseMatchedBytes\"",
  "\"SanitiseRequestHeader\"", "\"SanitiseResponseHeader\"", "\"SetEnv\"",
  "\"SetRsc\"", "\"SetSid\"", "\"SetUID\"", "\"Severity\"", "\"Skip\"",
  "\"SkipAfter\"", "\"Status\"", "\"Tag\"",
  "\"ACTION_TRANSFORMATION_BASE_64_ENCODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE_EXT\"",
  "\"ACTION_TRANSFORMATION_CMD_LINE\"",
  "\"ACTION_TRANSFORMATION_COMPRESS_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_CSS_DECODE\"",
  "\"ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE\"",
  "\"ACTION_TRANSFORMATION_HEX_ENCODE\"",
  "\"ACTION_TRANSFORMATION_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_HTML_ENTITY_DECODE\"",
  "\"ACTION_TRANSFORMATION_JS_DECODE\"",
  "\"ACTION_TRANSFORMATION_LENGTH\"",
  "\"ACTION_TRANSFORMATION_LOWERCASE\"", "\"ACTION_TRANSFORMATION_MD5\"",
  "\"ACTION_TRANSFORMATION_NONE\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH_WIN\"",
  "\"ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ODD_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR\"",
  "\"ACTION_TRANSFORMATION_REMOVE_NULLS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_REPLACE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REPLACE_NULLS\"",
  "\"ACTION_TRANSFORMATION_SHA1\"",
  "\"ACTION_TRANSFORMATION_SQL_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_TRIM\"", "\"ACTION_TRANSFORMATION_TRIM_LEFT\"",
  "\"ACTION_TRANSFORMATION_TRIM_RIGHT\"",
  "\"ACTION_TRANSFORMATION_UPPERCASE\"",
  "\"ACTION_TRANSFORMATION_URL_ENCODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE_UNI\"",
  "\"ACTION_TRANSFORMATION_UTF8_TO_UNICODE\"", "\"Ver\"", "\"xmlns\"",
  "\"CONFIG_COMPONENT_SIG\"", "\"CONFIG_CONN_ENGINE\"",
  "\"CONFIG_SEC_ARGUMENT_SEPARATOR\"", "\"CONFIG_SEC_WEB_APP_ID\"",
  "\"CONFIG_SEC_SERVER_SIG\"", "\"CONFIG_DIR_AUDIT_DIR\"",
  "\"CONFIG_DIR_AUDIT_DIR_MOD\"", "\"CONFIG_DIR_AUDIT_ENG\"",
  "\"CONFIG_DIR_AUDIT_FLE_MOD\"", "\"CONFIG_DIR_AUDIT_LOG\"",
  "\"CONFIG_DIR_AUDIT_LOG2\"", "\"CONFIG_DIR_AUDIT_LOG_P\"",
  "\"CONFIG_DIR_AUDIT_STS\"", "\"CONFIG_DIR_AUDIT_TPE\"",
  "\"CONFIG_DIR_DEBUG_LOG\"", "\"CONFIG_DIR_DEBUG_LVL\"",
  "\"CONFIG_SEC_CACHE_TRANSFORMATIONS\"",
  "\"CONFIG_SEC_DISABLE_BACKEND_COMPRESS\"", "\"CONFIG_SEC_HASH_ENGINE\"",
  "\"CONFIG_SEC_HASH_KEY\"", "\"CONFIG_SEC_HASH_PARAM\"",
  "\"CONFIG_SEC_HASH_METHOD_RX\"", "\"CONFIG_SEC_HASH_METHOD_PM\"",
  "\"CONFIG_SEC_CHROOT_DIR\"", "\"CONFIG_DIR_GEO_DB\"",
  "\"CONFIG_DIR_GSB_DB\"", "\"CONFIG_SEC_GUARDIAN_LOG\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION\"",
  "\"CONFIG_SEC_CONN_R_STATE_LIMIT\"", "\"CONFIG_SEC_CONN_W_STATE_LIMIT\"",
  "\"CONFIG_SEC_SENSOR_ID\"", "\"CONFIG_DIR_ARGS_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT\"", "\"CONFIG_DIR_REQ_BODY\"",
  "\"CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_LIMIT\"", "\"CONFIG_DIR_REQ_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT\"", "\"CONFIG_DIR_RES_BODY\"",
  "\"CONFIG_DIR_RES_BODY_LIMIT\"", "\"CONFIG_DIR_RES_BODY_LIMIT_ACTION\"",
  "\"CONFIG_SEC_RULE_INHERITANCE\"", "\"CONFIG_SEC_RULE_PERF_TIME\"",
  "\"CONFIG_DIR_RULE_ENG\"", "\"CONFIG_DIR_SEC_ACTION\"",
  "\"CONFIG_DIR_SEC_DEFAULT_ACTION\"", "\"CONFIG_DIR_SEC_MARKER\"",
  "\"CONFIG_DIR_UNICODE_MAP_FILE\"", "\"CONFIG_DIR_UNICODE_CODE_PAGE\"",
  "\"CONFIG_SEC_COLLECTION_TIMEOUT\"", "\"CONFIG_SEC_HTTP_BLKEY\"",
  "\"CONFIG_SEC_INTERCEPT_ON_ERROR\"",
  "\"CONFIG_SEC_REMOTE_RULES_FAIL_ACTION\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_ID\"", "\"CONFIG_SEC_RULE_REMOVE_BY_MSG\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID\"",
  "\"CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID\"",
  "\"CONFIG_UPDLOAD_KEEP_FILES\"", "\"CONFIG_UPDLOAD_SAVE_TMP_FILES\"",
  "\"CONFIG_UPLOAD_DIR\"", "\"CONFIG_UPLOAD_FILE_LIMIT\"",
  "\"CONFIG_UPLOAD_FILE_MODE\"", "\"CONFIG_VALUE_ABORT\"",
  "\"CONFIG_VALUE_DETC\"", "\"CONFIG_VALUE_HTTPS\"",
  "\"CONFIG_VALUE_AMQP\"", "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
  "\"CONFIG_VALUE_PARALLEL\"", "\"CONFIG_VALUE_PROCESS_PARTIAL\"",
  "\"CONFIG_VALUE_REJECT\"", "\"CONFIG_VALUE_RELEVANT_ONLY\"",
  "\"CONFIG_VALUE_SERIAL\"", "\"CONFIG_VALUE_WARN\"",
  "\"CONFIG_XML_EXTERNAL_ENTITY\"", "\"CONGIG_DIR_RESPONSE_BODY_MP\"",
  "\"CONGIG_DIR_SEC_ARG_SEP\"", "\"CONGIG_DIR_SEC_COOKIE_FORMAT\"",
  "\"CONFIG_SEC_COOKIEV0_SEPARATOR\"", "\"CONGIG_DIR_SEC_DATA_DIR\"",
  "\"CONGIG_DIR_SEC_STATUS_ENGINE\"",
  "\"CONFIG_SEC_STREAM_IN_BODY_INSPECTION\"",
  "\"CONFIG_SEC_STREAM_OUT_BODY_INSPECTION\"",
  "\"CONGIG_DIR_SEC_TMP_DIR\"", "\"DIRECTIVE\"",
  "\"DIRECTIVE_SECRULESCRIPT\"", "\"FREE_TEXT_QUOTE_MACRO_EXPANSION\"",
  "\"QUOTATION_MARK\"", "\"RUN_TIME_VAR_BLD\"", "\"RUN_TIME_VAR_DUR\"",
  "\"RUN_TIME_VAR_HSV\"", "\"RUN_TIME_VAR_REMOTE_USER\"",
  "\"RUN_TIME_VAR_TIME\"", "\"RUN_TIME_VAR_TIME_DAY\"",
  "\"RUN_TIME_VAR_TIME_EPOCH\"", "\"RUN_TIME_VAR_TIME_HOUR\"",
  "\"RUN_TIME_VAR_TIME_MIN\"", "\"RUN_TIME_VAR_TIME_MON\"",
  "\"RUN_TIME_VAR_TIME_SEC\"", "\"RUN_TIME_VAR_TIME_WDAY\"",
  "\"RUN_TIME_VAR_TIME_YEAR\"", "\"VARIABLE\"", "\"Dictionary element\"",
  "\"Dictionary element, selected by regexp\"", "$accept", "input", "line",
  "audit_log", "actions", "actions_may_quoted", "op", "op_before_init",
  "expression", "variables", "variables_pre_process",
  "variables_may_be_quoted", "var", "act", "setvar_action",
  "run_time_string", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  seclang_parser::yyrline_[] =
  {
       0,   715,   715,   719,   720,   723,   728,   734,   740,   744,
     748,   754,   760,   766,   772,   777,   782,   788,   795,   799,
     803,   807,   813,   817,   821,   826,   831,   836,   841,   845,
     852,   856,   863,   869,   879,   888,   898,   907,   920,   924,
     928,   932,   936,   940,   944,   948,   952,   956,   961,   965,
     969,   973,   977,   981,   986,   991,   995,   999,  1003,  1007,
    1011,  1015,  1019,  1023,  1027,  1031,  1035,  1039,  1043,  1047,
    1051,  1055,  1059,  1063,  1067,  1081,  1082,  1112,  1131,  1150,
    1178,  1235,  1242,  1246,  1250,  1254,  1258,  1262,  1266,  1270,
    1279,  1283,  1288,  1291,  1296,  1301,  1306,  1311,  1314,  1319,
    1322,  1327,  1332,  1335,  1340,  1345,  1350,  1355,  1360,  1365,
    1370,  1373,  1378,  1383,  1388,  1393,  1396,  1401,  1406,  1411,
    1424,  1437,  1450,  1463,  1476,  1502,  1530,  1542,  1562,  1589,
    1594,  1600,  1605,  1610,  1619,  1624,  1628,  1632,  1636,  1640,
    1644,  1648,  1653,  1658,  1670,  1676,  1680,  1684,  1695,  1704,
    1705,  1712,  1717,  1722,  1776,  1783,  1791,  1828,  1832,  1839,
    1844,  1850,  1856,  1862,  1869,  1879,  1883,  1887,  1891,  1895,
    1899,  1903,  1907,  1911,  1915,  1919,  1923,  1927,  1931,  1935,
    1939,  1943,  1947,  1951,  1955,  1959,  1963,  1967,  1971,  1975,
    1979,  1983,  1987,  1991,  1995,  1999,  2003,  2007,  2011,  2015,
    2019,  2023,  2027,  2031,  2035,  2039,  2043,  2047,  2051,  2055,
    2059,  2063,  2067,  2071,  2075,  2079,  2083,  2087,  2091,  2095,
    2099,  2103,  2107,  2111,  2115,  2119,  2123,  2127,  2131,  2135,
    2139,  2143,  2147,  2151,  2155,  2159,  2163,  2167,  2171,  2175,
    2179,  2183,  2187,  2191,  2195,  2199,  2203,  2207,  2211,  2215,
    2219,  2223,  2227,  2231,  2235,  2239,  2243,  2247,  2252,  2256,
    2260,  2265,  2269,  2273,  2278,  2283,  2287,  2291,  2295,  2299,
    2303,  2307,  2311,  2315,  2319,  2323,  2327,  2331,  2335,  2339,
    2343,  2347,  2351,  2355,  2359,  2363,  2367,  2371,  2375,  2379,
    2383,  2387,  2391,  2395,  2399,  2403,  2407,  2411,  2415,  2419,
    2423,  2427,  2431,  2435,  2439,  2443,  2447,  2451,  2455,  2459,
    2463,  2467,  2471,  2475,  2479,  2483,  2487,  2491,  2495,  2499,
    2503,  2507,  2511,  2515,  2519,  2523,  2531,  2538,  2545,  2552,
    2559,  2566,  2573,  2580,  2587,  2594,  2601,  2608,  2618,  2622,
    2626,  2630,  2634,  2638,  2642,  2646,  2651,  2655,  2660,  2664,
    2668,  2672,  2676,  2681,  2686,  2690,  2694,  2698,  2702,  2706,
    2710,  2714,  2718,  2722,  2726,  2730,  2734,  2738,  2743,  2747,
    2751,  2755,  2759,  2763,  2767,  2771,  2775,  2779,  2783,  2787,
    2791,  2795,  2799,  2803,  2807,  2811,  2815,  2819,  2823,  2827,
    2831,  2835,  2839,  2843,  2847,  2851,  2855,  2859,  2863,  2867,
    2871,  2875,  2879,  2883,  2887,  2891,  2895,  2899,  2903,  2907,
    2911,  2915,  2919,  2923,  2927,  2931,  2935,  2939,  2943,  2947,
    2951,  2955,  2959,  2963,  2967,  2971,  2975,  2979,  2983,  2987,
    2991,  2995,  2999,  3003,  3007,  3011,  3015,  3022,  3026,  3030,
    3034,  3038,  3045,  3050,  3055,  3061
  };

  // Print the state stack on the debug stream.
  void
  seclang_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  seclang_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 6710 "seclang-parser.cc" // lalr1.cc:1167
#line 3068 "seclang-parser.yy" // lalr1.cc:1168


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}
