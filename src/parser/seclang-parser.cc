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
      case 307: // "CONFIG_VALUE_OFF"
      case 308: // "CONFIG_VALUE_ON"
      case 309: // "CONFIG_VALUE_PARALLEL"
      case 310: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 311: // "CONFIG_VALUE_REJECT"
      case 312: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 313: // "CONFIG_VALUE_SERIAL"
      case 314: // "CONFIG_VALUE_WARN"
      case 315: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 316: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 317: // "CONGIG_DIR_SEC_ARG_SEP"
      case 318: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 319: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 320: // "CONGIG_DIR_SEC_DATA_DIR"
      case 321: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 322: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 323: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 324: // "CONGIG_DIR_SEC_TMP_DIR"
      case 325: // "DIRECTIVE"
      case 326: // "DIRECTIVE_SECRULESCRIPT"
      case 327: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 328: // "QUOTATION_MARK"
      case 329: // "RUN_TIME_VAR_BLD"
      case 330: // "RUN_TIME_VAR_DUR"
      case 331: // "RUN_TIME_VAR_HSV"
      case 332: // "RUN_TIME_VAR_REMOTE_USER"
      case 333: // "RUN_TIME_VAR_TIME"
      case 334: // "RUN_TIME_VAR_TIME_DAY"
      case 335: // "RUN_TIME_VAR_TIME_EPOCH"
      case 336: // "RUN_TIME_VAR_TIME_HOUR"
      case 337: // "RUN_TIME_VAR_TIME_MIN"
      case 338: // "RUN_TIME_VAR_TIME_MON"
      case 339: // "RUN_TIME_VAR_TIME_SEC"
      case 340: // "RUN_TIME_VAR_TIME_WDAY"
      case 341: // "RUN_TIME_VAR_TIME_YEAR"
      case 342: // "VARIABLE"
      case 343: // "Dictionary element"
      case 344: // "Dictionary element, selected by regexp"
        value.move< std::string > (that.value);
        break;

      case 351: // op
      case 352: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case 360: // run_time_string
        value.move< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 357: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case 358: // act
      case 359: // setvar_action
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 354: // variables
      case 355: // variables_pre_process
      case 356: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 349: // actions
      case 350: // actions_may_quoted
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
      case 307: // "CONFIG_VALUE_OFF"
      case 308: // "CONFIG_VALUE_ON"
      case 309: // "CONFIG_VALUE_PARALLEL"
      case 310: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 311: // "CONFIG_VALUE_REJECT"
      case 312: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 313: // "CONFIG_VALUE_SERIAL"
      case 314: // "CONFIG_VALUE_WARN"
      case 315: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 316: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 317: // "CONGIG_DIR_SEC_ARG_SEP"
      case 318: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 319: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 320: // "CONGIG_DIR_SEC_DATA_DIR"
      case 321: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 322: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 323: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 324: // "CONGIG_DIR_SEC_TMP_DIR"
      case 325: // "DIRECTIVE"
      case 326: // "DIRECTIVE_SECRULESCRIPT"
      case 327: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 328: // "QUOTATION_MARK"
      case 329: // "RUN_TIME_VAR_BLD"
      case 330: // "RUN_TIME_VAR_DUR"
      case 331: // "RUN_TIME_VAR_HSV"
      case 332: // "RUN_TIME_VAR_REMOTE_USER"
      case 333: // "RUN_TIME_VAR_TIME"
      case 334: // "RUN_TIME_VAR_TIME_DAY"
      case 335: // "RUN_TIME_VAR_TIME_EPOCH"
      case 336: // "RUN_TIME_VAR_TIME_HOUR"
      case 337: // "RUN_TIME_VAR_TIME_MIN"
      case 338: // "RUN_TIME_VAR_TIME_MON"
      case 339: // "RUN_TIME_VAR_TIME_SEC"
      case 340: // "RUN_TIME_VAR_TIME_WDAY"
      case 341: // "RUN_TIME_VAR_TIME_YEAR"
      case 342: // "VARIABLE"
      case 343: // "Dictionary element"
      case 344: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case 351: // op
      case 352: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 360: // run_time_string
        value.copy< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 357: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 358: // act
      case 359: // setvar_action
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 354: // variables
      case 355: // variables_pre_process
      case 356: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 349: // actions
      case 350: // actions_may_quoted
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

#line 877 "seclang-parser.cc" // lalr1.cc:741

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
      case 307: // "CONFIG_VALUE_OFF"
      case 308: // "CONFIG_VALUE_ON"
      case 309: // "CONFIG_VALUE_PARALLEL"
      case 310: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 311: // "CONFIG_VALUE_REJECT"
      case 312: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 313: // "CONFIG_VALUE_SERIAL"
      case 314: // "CONFIG_VALUE_WARN"
      case 315: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 316: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 317: // "CONGIG_DIR_SEC_ARG_SEP"
      case 318: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 319: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 320: // "CONGIG_DIR_SEC_DATA_DIR"
      case 321: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 322: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 323: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 324: // "CONGIG_DIR_SEC_TMP_DIR"
      case 325: // "DIRECTIVE"
      case 326: // "DIRECTIVE_SECRULESCRIPT"
      case 327: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 328: // "QUOTATION_MARK"
      case 329: // "RUN_TIME_VAR_BLD"
      case 330: // "RUN_TIME_VAR_DUR"
      case 331: // "RUN_TIME_VAR_HSV"
      case 332: // "RUN_TIME_VAR_REMOTE_USER"
      case 333: // "RUN_TIME_VAR_TIME"
      case 334: // "RUN_TIME_VAR_TIME_DAY"
      case 335: // "RUN_TIME_VAR_TIME_EPOCH"
      case 336: // "RUN_TIME_VAR_TIME_HOUR"
      case 337: // "RUN_TIME_VAR_TIME_MIN"
      case 338: // "RUN_TIME_VAR_TIME_MON"
      case 339: // "RUN_TIME_VAR_TIME_SEC"
      case 340: // "RUN_TIME_VAR_TIME_WDAY"
      case 341: // "RUN_TIME_VAR_TIME_YEAR"
      case 342: // "VARIABLE"
      case 343: // "Dictionary element"
      case 344: // "Dictionary element, selected by regexp"
        yylhs.value.build< std::string > ();
        break;

      case 351: // op
      case 352: // op_before_init
        yylhs.value.build< std::unique_ptr<Operator> > ();
        break;

      case 360: // run_time_string
        yylhs.value.build< std::unique_ptr<RunTimeString> > ();
        break;

      case 357: // var
        yylhs.value.build< std::unique_ptr<Variable> > ();
        break;

      case 358: // act
      case 359: // setvar_action
        yylhs.value.build< std::unique_ptr<actions::Action> > ();
        break;

      case 354: // variables
      case 355: // variables_pre_process
      case 356: // variables_may_be_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case 349: // actions
      case 350: // actions_may_quoted
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
#line 715 "seclang-parser.yy" // lalr1.cc:859
    {
        return 0;
      }
#line 1219 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 728 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1227 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 7:
#line 734 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as< std::string > ());
      }
#line 1235 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 740 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1243 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 9:
#line 744 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1251 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 748 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1259 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 11:
#line 754 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1267 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 760 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as< std::string > ());
      }
#line 1275 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 13:
#line 766 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setParts(yystack_[0].value.as< std::string > ());
      }
#line 1283 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 772 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as< std::string > ());
      }
#line 1291 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 15:
#line 777 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFormat(celeowaf::audit_log::AuditLog::JSONAuditLogFormat);
      }
#line 1299 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 782 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFormat(celeowaf::audit_log::AuditLog::NativeAuditLogFormat);
      }
#line 1307 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 17:
#line 788 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string relevant_status(yystack_[0].value.as< std::string > ());
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1316 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 795 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1324 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 19:
#line 799 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1332 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 803 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1340 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 21:
#line 809 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 1348 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 813 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 1356 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 23:
#line 817 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecUploadKeepFiles RelevantOnly is not currently supported. Accepted values are On or Off");
        YYERROR;
      }
#line 1365 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 822 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 10);
      }
#line 1374 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 25:
#line 827 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8);
      }
#line 1383 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 832 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as< std::string > ();
      }
#line 1392 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 27:
#line 837 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 1400 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 841 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 1408 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 29:
#line 848 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1416 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 852 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1424 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 31:
#line 859 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1434 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 32:
#line 865 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1445 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 33:
#line 875 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[0].location.end.filename, &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1458 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 34:
#line 884 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[1].location.end.filename, &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1472 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 35:
#line 894 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[0].location.end.filename, &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1485 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 903 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[1].location.end.filename, &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1499 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 916 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1507 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 920 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 1515 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 924 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 1523 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 928 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 1531 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 41:
#line 932 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 1539 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 42:
#line 936 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::InspectFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1547 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 43:
#line 940 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::FuzzyHash(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1555 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 44:
#line 944 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateByteRange(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1563 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 45:
#line 948 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateDTD(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1571 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 46:
#line 952 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 1580 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 47:
#line 957 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateSchema(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1588 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 48:
#line 961 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1596 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 49:
#line 965 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCPF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1604 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 50:
#line 969 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifySSN(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1612 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 51:
#line 973 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifySVNR(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1620 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 52:
#line 977 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 1629 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 53:
#line 982 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 1638 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 54:
#line 987 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Within(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1646 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 55:
#line 991 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ContainsWord(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1654 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 56:
#line 995 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Contains(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1662 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 57:
#line 999 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::EndsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1670 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 58:
#line 1003 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Eq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1678 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 59:
#line 1007 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Ge(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1686 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 60:
#line 1011 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Gt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1694 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 61:
#line 1015 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatchF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1702 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 62:
#line 1019 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1710 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 63:
#line 1023 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Le(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1718 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 64:
#line 1027 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Lt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1726 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 65:
#line 1031 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::PmFromFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1734 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 66:
#line 1035 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Pm(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1742 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 67:
#line 1039 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rbl(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1750 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 68:
#line 1043 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1758 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 69:
#line 1047 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::RxGlobal(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1766 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 70:
#line 1051 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrEq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1774 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 71:
#line 1055 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1782 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 72:
#line 1059 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::BeginsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1790 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 73:
#line 1063 "seclang-parser.yy" // lalr1.cc:859
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
#line 1805 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 75:
#line 1078 "seclang-parser.yy" // lalr1.cc:859
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
#line 1839 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 76:
#line 1108 "seclang-parser.yy" // lalr1.cc:859
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
#line 1862 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 77:
#line 1127 "seclang-parser.yy" // lalr1.cc:859
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
#line 1885 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 78:
#line 1146 "seclang-parser.yy" // lalr1.cc:859
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
#line 1917 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 79:
#line 1174 "seclang-parser.yy" // lalr1.cc:859
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
#line 1978 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 80:
#line 1231 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.addSecMarker(celeowaf::utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()),
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[0].location.end.filename)),
            /* line number */ yystack_[0].location.end.line
        );
      }
#line 1989 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 81:
#line 1238 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::DisabledRuleEngine;
      }
#line 1997 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 82:
#line 1242 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::EnabledRuleEngine;
      }
#line 2005 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 83:
#line 1246 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::DetectionOnlyRuleEngine;
      }
#line 2013 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 84:
#line 1250 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2021 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 85:
#line 1254 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2029 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 86:
#line 1258 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2037 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 87:
#line 1262 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2045 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 88:
#line 1266 "seclang-parser.yy" // lalr1.cc:859
    {
        if (yystack_[0].value.as< std::string > ().length() != 1) {
          driver.error(yystack_[1].location, "Argument separator should be set to a single character.");
          YYERROR;
        }
        driver.m_secArgumentSeparator.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secArgumentSeparator.m_set = true;
      }
#line 2058 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 89:
#line 1275 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_components.push_back(yystack_[0].value.as< std::string > ());
      }
#line 2066 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 90:
#line 1279 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecConnEngine is not yet supported.");
        YYERROR;
      }
#line 2075 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 91:
#line 1284 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2082 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 92:
#line 1287 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secWebAppId.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secWebAppId.m_set = true;
      }
#line 2091 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 93:
#line 1292 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecServerSignature is not supported.");
        YYERROR;
      }
#line 2100 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 94:
#line 1297 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecCacheTransformations is not supported.");
        YYERROR;
      }
#line 2109 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 95:
#line 1302 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecDisableBackendCompression is not supported.");
        YYERROR;
      }
#line 2118 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 96:
#line 1307 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2125 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 97:
#line 1310 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecContentInjection is not yet supported.");
        YYERROR;
      }
#line 2134 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 98:
#line 1315 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2141 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 99:
#line 1318 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecChrootDir is not supported.");
        YYERROR;
      }
#line 2150 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 100:
#line 1323 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecHashEngine is not yet supported.");
        YYERROR;
      }
#line 2159 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 101:
#line 1328 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2166 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 102:
#line 1331 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashKey is not yet supported.");
        YYERROR;
      }
#line 2175 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 103:
#line 1336 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashParam is not yet supported.");
        YYERROR;
      }
#line 2184 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 104:
#line 1341 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashMethodRx is not yet supported.");
        YYERROR;
      }
#line 2193 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 105:
#line 1346 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashMethodPm is not yet supported.");
        YYERROR;
      }
#line 2202 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 106:
#line 1351 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecGsbLookupDb is not supported.");
        YYERROR;
      }
#line 2211 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 107:
#line 1356 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecGuardianLog is not supported.");
        YYERROR;
      }
#line 2220 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 108:
#line 1361 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecInterceptOnError is not yet supported.");
        YYERROR;
      }
#line 2229 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 109:
#line 1366 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2236 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 110:
#line 1369 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecConnReadStateLimit is not yet supported.");
        YYERROR;
      }
#line 2245 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 111:
#line 1374 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecConnWriteStateLimit is not yet supported.");
        YYERROR;
      }
#line 2254 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 112:
#line 1379 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecSensorId is not yet supported.");
        YYERROR;
      }
#line 2263 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 113:
#line 1384 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecRuleInheritance is not yet supported.");
        YYERROR;
      }
#line 2272 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 114:
#line 1389 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2279 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 115:
#line 1392 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecRulePerfTime is not yet supported.");
        YYERROR;
      }
#line 2288 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 116:
#line 1397 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecStreamInBodyInspection is not supported.");
        YYERROR;
      }
#line 2297 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 117:
#line 1402 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecStreamOutBodyInspection is not supported.");
        YYERROR;
      }
#line 2306 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 118:
#line 1407 "seclang-parser.yy" // lalr1.cc:859
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
#line 2323 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 119:
#line 1420 "seclang-parser.yy" // lalr1.cc:859
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
#line 2340 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 120:
#line 1433 "seclang-parser.yy" // lalr1.cc:859
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
#line 2357 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 121:
#line 1446 "seclang-parser.yy" // lalr1.cc:859
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
#line 2374 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 122:
#line 1459 "seclang-parser.yy" // lalr1.cc:859
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
#line 2391 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 123:
#line 1472 "seclang-parser.yy" // lalr1.cc:859
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
#line 2421 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 124:
#line 1498 "seclang-parser.yy" // lalr1.cc:859
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
#line 2452 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 125:
#line 1526 "seclang-parser.yy" // lalr1.cc:859
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
#line 2468 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 126:
#line 1538 "seclang-parser.yy" // lalr1.cc:859
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
#line 2491 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 127:
#line 1558 "seclang-parser.yy" // lalr1.cc:859
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
#line 2522 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 128:
#line 1585 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_argumentsLimit.m_set = true;
        driver.m_argumentsLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2531 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 129:
#line 1590 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyJsonDepthLimit.m_set = true;
        driver.m_requestBodyJsonDepthLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2540 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 130:
#line 1596 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2549 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 131:
#line 1601 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2558 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 132:
#line 1606 "seclang-parser.yy" // lalr1.cc:859
    {
        std::stringstream ss;
        ss << "As of CeleoWAF version 3.0, SecRequestBodyInMemoryLimit is no longer ";
        ss << "supported. Instead, you can use your web server configurations to control ";
        ss << "those values. CeleoWAF will follow the web server decision.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
      }
#line 2571 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 133:
#line 1615 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2580 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 134:
#line 1620 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2588 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 135:
#line 1624 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2596 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 136:
#line 1628 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2604 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 137:
#line 1632 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2612 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 138:
#line 1636 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = RulesSet::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 2620 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 139:
#line 1640 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = RulesSet::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 2628 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 142:
#line 1654 "seclang-parser.yy" // lalr1.cc:859
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
#line 2644 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 143:
#line 1666 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        driver.m_responseBodyTypeToBeInspected.m_clear = true;
        driver.m_responseBodyTypeToBeInspected.m_value.clear();
      }
#line 2654 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 144:
#line 1672 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2662 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 145:
#line 1676 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2670 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 146:
#line 1680 "seclang-parser.yy" // lalr1.cc:859
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
#line 2685 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 149:
#line 1701 "seclang-parser.yy" // lalr1.cc:859
    {
        if (atoi(yystack_[0].value.as< std::string > ().c_str()) == 1) {
          driver.error(yystack_[1].location, "SecCookieFormat 1 is not yet supported.");
          YYERROR;
        }
      }
#line 2696 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 150:
#line 1708 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecCookieV0Separator is not yet supported.");
        YYERROR;
      }
#line 2705 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 152:
#line 1718 "seclang-parser.yy" // lalr1.cc:859
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
#line 2763 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 153:
#line 1772 "seclang-parser.yy" // lalr1.cc:859
    {
/* Parser error disabled to avoid breaking default CRS installations with crs-setup.conf-recommended
        driver.error(@0, "SecCollectionTimeout is not yet supported.");
        YYERROR;
*/
      }
#line 2774 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 154:
#line 1779 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_httpblKey.m_set = true;
        driver.m_httpblKey.m_value = yystack_[0].value.as< std::string > ();
      }
#line 2783 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 155:
#line 1787 "seclang-parser.yy" // lalr1.cc:859
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
#line 2821 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 156:
#line 1824 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2829 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 157:
#line 1828 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2837 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 158:
#line 1835 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2846 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 159:
#line 1840 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2856 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 160:
#line 1846 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2866 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 161:
#line 1852 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2876 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 162:
#line 1858 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2887 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 163:
#line 1865 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2898 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 164:
#line 1875 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2906 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 165:
#line 1879 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2914 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 166:
#line 1883 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_NoDictElement());
      }
#line 2922 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 167:
#line 1887 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2930 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 168:
#line 1891 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2938 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 169:
#line 1895 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_NoDictElement());
      }
#line 2946 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 170:
#line 1899 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2954 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 171:
#line 1903 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2962 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 172:
#line 1907 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_NoDictElement());
      }
#line 2970 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 173:
#line 1911 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2978 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 174:
#line 1915 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2986 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 175:
#line 1919 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_NoDictElement());
      }
#line 2994 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 176:
#line 1923 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3002 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 177:
#line 1927 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3010 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 178:
#line 1931 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_NoDictElement());
      }
#line 3018 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 179:
#line 1935 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3026 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 180:
#line 1939 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3034 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 181:
#line 1943 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_NoDictElement());
      }
#line 3042 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 182:
#line 1947 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3050 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 183:
#line 1951 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3058 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 184:
#line 1955 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_NoDictElement());
      }
#line 3066 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 185:
#line 1959 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3074 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 186:
#line 1963 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3082 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 187:
#line 1967 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_NoDictElement());
      }
#line 3090 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 188:
#line 1971 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3098 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 189:
#line 1975 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3106 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 190:
#line 1979 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_NoDictElement());
      }
#line 3114 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 191:
#line 1983 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3122 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 192:
#line 1987 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3130 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 193:
#line 1991 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_NoDictElement());
      }
#line 3138 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 194:
#line 1995 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3146 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 195:
#line 1999 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3154 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 196:
#line 2003 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_NoDictElement());
      }
#line 3162 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 197:
#line 2007 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3170 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 198:
#line 2011 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3178 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 199:
#line 2015 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_NoDictElement());
      }
#line 3186 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 200:
#line 2019 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3194 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 201:
#line 2023 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3202 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 202:
#line 2027 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_NoDictElement());
      }
#line 3210 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 203:
#line 2031 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3218 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 204:
#line 2035 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3226 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 205:
#line 2039 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_NoDictElement());
      }
#line 3234 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 206:
#line 2043 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3242 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 207:
#line 2047 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3250 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 208:
#line 2051 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_NoDictElement());
      }
#line 3258 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 209:
#line 2055 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3266 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 210:
#line 2059 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3274 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 211:
#line 2063 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_NoDictElement());
      }
#line 3282 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 212:
#line 2067 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3290 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 213:
#line 2071 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3298 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 214:
#line 2075 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_NoDictElement());
      }
#line 3306 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 215:
#line 2079 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3314 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 216:
#line 2083 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3322 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 217:
#line 2087 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_NoDictElement());
      }
#line 3330 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 218:
#line 2091 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3338 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 219:
#line 2095 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3346 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 220:
#line 2099 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV"));
      }
#line 3354 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 221:
#line 2103 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3362 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 222:
#line 2107 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3370 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 223:
#line 2111 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML_NoDictElement());
      }
#line 3378 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 224:
#line 2115 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3386 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 225:
#line 2119 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3394 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 226:
#line 2123 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_NoDictElement());
      }
#line 3402 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 227:
#line 2127 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3410 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 228:
#line 2131 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3418 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 229:
#line 2135 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3426 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 230:
#line 2139 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_NoDictElement());
      }
#line 3434 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 231:
#line 2143 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3442 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 232:
#line 2147 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3450 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 233:
#line 2151 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3458 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 234:
#line 2155 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_NoDictElement());
      }
#line 3466 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 235:
#line 2159 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3474 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 236:
#line 2163 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3482 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 237:
#line 2167 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3490 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 238:
#line 2171 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_NoDictElement());
      }
#line 3498 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 239:
#line 2175 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3506 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 240:
#line 2179 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3514 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 241:
#line 2183 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3522 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 242:
#line 2187 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_NoDictElement());
      }
#line 3530 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 243:
#line 2191 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3538 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 244:
#line 2195 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3546 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 245:
#line 2199 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3554 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 246:
#line 2203 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_NoDictElement());
      }
#line 3562 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 247:
#line 2207 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3570 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 248:
#line 2211 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3578 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 249:
#line 2215 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3586 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 250:
#line 2219 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_NoDictElement());
      }
#line 3594 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 251:
#line 2223 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3602 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 252:
#line 2227 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3610 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 253:
#line 2231 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_NoDictElement());
      }
#line 3618 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 254:
#line 2235 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3626 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 255:
#line 2239 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3634 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 256:
#line 2243 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_NoDictElement());
      }
#line 3642 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 257:
#line 2248 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3650 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 258:
#line 2252 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3658 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 259:
#line 2256 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_NoDictElement());
      }
#line 3666 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 260:
#line 2261 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3674 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 261:
#line 2265 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3682 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 262:
#line 2269 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_NoDictElement());
      }
#line 3690 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 263:
#line 2274 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseContentType());
      }
#line 3698 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 264:
#line 2279 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3706 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 265:
#line 2283 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3714 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 266:
#line 2287 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_NoDictElement());
      }
#line 3722 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 267:
#line 2291 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsCombinedSize());
      }
#line 3730 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 268:
#line 2295 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::AuthType());
      }
#line 3738 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 269:
#line 2299 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesCombinedSize());
      }
#line 3746 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 270:
#line 2303 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FullRequest());
      }
#line 3754 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 271:
#line 2307 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FullRequestLength());
      }
#line 3762 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 272:
#line 2311 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::InboundDataError());
      }
#line 3770 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 273:
#line 2315 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVar());
      }
#line 3778 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 274:
#line 2319 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarName());
      }
#line 3786 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 275:
#line 2323 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartBoundaryQuoted());
      }
#line 3794 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 276:
#line 2327 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartBoundaryWhiteSpace());
      }
#line 3802 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 277:
#line 2331 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartCrlfLFLines());
      }
#line 3810 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 278:
#line 2335 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartDateAfter());
      }
#line 3818 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 279:
#line 2339 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartDateBefore());
      }
#line 3826 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 280:
#line 2343 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartFileLimitExceeded());
      }
#line 3834 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 281:
#line 2347 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartHeaderFolding());
      }
#line 3842 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 282:
#line 2351 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidHeaderFolding());
      }
#line 3850 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 283:
#line 2355 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidPart());
      }
#line 3858 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 284:
#line 2359 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidQuoting());
      }
#line 3866 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 285:
#line 2363 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartLFLine());
      }
#line 3874 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 286:
#line 2367 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartMissingSemicolon());
      }
#line 3882 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 287:
#line 2371 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartMissingSemicolon());
      }
#line 3890 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 288:
#line 2375 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartStrictError());
      }
#line 3898 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 289:
#line 2379 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartUnmatchedBoundary());
      }
#line 3906 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 290:
#line 2383 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::OutboundDataError());
      }
#line 3914 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 291:
#line 2387 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::PathInfo());
      }
#line 3922 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 292:
#line 2391 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::QueryString());
      }
#line 3930 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 293:
#line 2395 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemoteAddr());
      }
#line 3938 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 294:
#line 2399 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemoteHost());
      }
#line 3946 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 295:
#line 2403 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemotePort());
      }
#line 3954 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 296:
#line 2407 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyError());
      }
#line 3962 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 297:
#line 2411 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyErrorMsg());
      }
#line 3970 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 298:
#line 2415 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessor());
      }
#line 3978 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 299:
#line 2419 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessorError());
      }
#line 3986 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 300:
#line 2423 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessorErrorMsg());
      }
#line 3994 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 301:
#line 2427 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBasename());
      }
#line 4002 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 302:
#line 2431 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBody());
      }
#line 4010 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 303:
#line 2435 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBodyLength());
      }
#line 4018 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 304:
#line 2439 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestFilename());
      }
#line 4026 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 305:
#line 2443 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestLine());
      }
#line 4034 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 306:
#line 2447 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestMethod());
      }
#line 4042 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 307:
#line 2451 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestProtocol());
      }
#line 4050 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 308:
#line 2455 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestURI());
      }
#line 4058 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 309:
#line 2459 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestURIRaw());
      }
#line 4066 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 310:
#line 2463 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseBody());
      }
#line 4074 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 311:
#line 2467 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseContentLength());
      }
#line 4082 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 312:
#line 2471 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseProtocol());
      }
#line 4090 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 313:
#line 2475 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseStatus());
      }
#line 4098 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 314:
#line 2479 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerAddr());
      }
#line 4106 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 315:
#line 2483 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerName());
      }
#line 4114 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 316:
#line 2487 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerPort());
      }
#line 4122 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 317:
#line 2491 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::SessionID());
      }
#line 4130 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 318:
#line 2495 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UniqueID());
      }
#line 4138 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 319:
#line 2499 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UrlEncodedError());
      }
#line 4146 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 320:
#line 2503 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UserID());
      }
#line 4154 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 321:
#line 2507 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Status());
      }
#line 4162 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 322:
#line 2511 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Status());
      }
#line 4170 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 323:
#line 2515 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::WebAppId());
      }
#line 4178 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 324:
#line 2519 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4189 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 325:
#line 2527 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new CWafBuild(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4200 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 326:
#line 2534 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4211 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 327:
#line 2541 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4222 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 328:
#line 2548 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4233 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 329:
#line 2555 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4244 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 330:
#line 2562 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4255 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 331:
#line 2569 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4266 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 332:
#line 2576 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4277 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 333:
#line 2583 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4288 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 334:
#line 2590 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4299 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 335:
#line 2597 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4310 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 336:
#line 2604 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4321 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 337:
#line 2614 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as< std::string > ()));
      }
#line 4329 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 338:
#line 2618 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as< std::string > ()));
      }
#line 4337 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 339:
#line 2622 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 4345 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 340:
#line 2626 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4353 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 341:
#line 2630 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Block(yystack_[0].value.as< std::string > ()));
      }
#line 4361 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 342:
#line 2634 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as< std::string > ()));
      }
#line 4369 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 343:
#line 2638 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as< std::string > ()));
      }
#line 4377 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 344:
#line 2642 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=on"));
        driver.m_auditLog->setCtlAuditEngineActive();
      }
#line 4386 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 345:
#line 2647 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=off"));
      }
#line 4394 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 346:
#line 2651 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=relevantonly"));
        driver.m_auditLog->setCtlAuditEngineActive();
      }
#line 4403 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 347:
#line 2656 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as< std::string > ()));
      }
#line 4411 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 348:
#line 2660 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as< std::string > ()));
      }
#line 4419 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 349:
#line 2664 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as< std::string > ()));
      }
#line 4427 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 350:
#line 2668 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorURLENCODED(yystack_[0].value.as< std::string > ()));
      }
#line 4435 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 351:
#line 2672 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4444 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 352:
#line 2677 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4453 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 353:
#line 2682 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "true"));
      }
#line 4461 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 354:
#line 2686 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "false"));
      }
#line 4469 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 355:
#line 2690 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=on"));
      }
#line 4477 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 356:
#line 2694 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=off"));
      }
#line 4485 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 357:
#line 2698 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=detectiononly"));
      }
#line 4493 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 358:
#line 2702 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as< std::string > ()));
      }
#line 4501 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 359:
#line 2706 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4509 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 360:
#line 2710 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as< std::string > ()));
      }
#line 4517 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 361:
#line 2714 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4525 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 362:
#line 2718 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as< std::string > ()));
      }
#line 4533 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 363:
#line 2722 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 4541 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 364:
#line 2726 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Drop(yystack_[0].value.as< std::string > ()));
      }
#line 4549 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 365:
#line 2730 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Exec(yystack_[0].value.as< std::string > ()));
      }
#line 4557 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 366:
#line 2734 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("ExpireVar", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 4566 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 367:
#line 2739 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as< std::string > ()));
      }
#line 4574 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 368:
#line 2743 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4582 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 369:
#line 2747 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::LogData(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4590 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 370:
#line 2751 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as< std::string > ()));
      }
#line 4598 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 371:
#line 2755 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as< std::string > ()));
      }
#line 4606 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 372:
#line 2759 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Msg(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4614 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 373:
#line 2763 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as< std::string > ()));
      }
#line 4622 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 374:
#line 2767 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4630 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 375:
#line 2771 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as< std::string > ()));
      }
#line 4638 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 376:
#line 2775 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as< std::string > ()));
      }
#line 4646 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 377:
#line 2779 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 4654 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 378:
#line 2783 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as< std::string > ()));
      }
#line 4662 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 379:
#line 2787 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 4670 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 380:
#line 2791 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 4678 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 381:
#line 2795 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4686 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 382:
#line 2799 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as< std::string > ()));
      }
#line 4694 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 383:
#line 2803 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseArg", yystack_[1].location);
      }
#line 4702 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 384:
#line 2807 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseMatched", yystack_[1].location);
      }
#line 4710 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 385:
#line 2811 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseMatchedBytes", yystack_[1].location);
      }
#line 4718 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 386:
#line 2815 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseRequestHeader", yystack_[1].location);
      }
#line 4726 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 387:
#line 2819 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseResponseHeader", yystack_[1].location);
      }
#line 4734 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 388:
#line 2823 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetENV(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4742 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 389:
#line 2827 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetRSC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4750 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 390:
#line 2831 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetSID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4758 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 391:
#line 2835 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetUID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4766 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 392:
#line 2839 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<actions::Action> > () = std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ());
      }
#line 4774 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 393:
#line 2843 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as< std::string > ()));
      }
#line 4782 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 394:
#line 2847 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as< std::string > ()));
      }
#line 4790 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 395:
#line 2851 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as< std::string > ()));
      }
#line 4798 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 396:
#line 2855 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as< std::string > ()));
      }
#line 4806 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 397:
#line 2859 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Tag(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4814 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 398:
#line 2863 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as< std::string > ()));
      }
#line 4822 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 399:
#line 2867 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as< std::string > ()));
      }
#line 4830 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 400:
#line 2871 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4838 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 401:
#line 2875 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4846 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 402:
#line 2879 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4854 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 403:
#line 2883 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4862 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 404:
#line 2887 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Encode(yystack_[0].value.as< std::string > ()));
      }
#line 4870 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 405:
#line 2891 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Decode(yystack_[0].value.as< std::string > ()));
      }
#line 4878 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 406:
#line 2895 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64DecodeExt(yystack_[0].value.as< std::string > ()));
      }
#line 4886 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 407:
#line 2899 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as< std::string > ()));
      }
#line 4894 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 408:
#line 2903 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as< std::string > ()));
      }
#line 4902 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 409:
#line 2907 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as< std::string > ()));
      }
#line 4910 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 410:
#line 2911 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::EscapeSeqDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4918 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 411:
#line 2915 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as< std::string > ()));
      }
#line 4926 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 412:
#line 2919 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4934 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 413:
#line 2923 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as< std::string > ()));
      }
#line 4942 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 414:
#line 2927 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UpperCase(yystack_[0].value.as< std::string > ()));
      }
#line 4950 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 415:
#line 2931 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as< std::string > ()));
      }
#line 4958 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 416:
#line 2935 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4966 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 417:
#line 2939 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlEncode(yystack_[0].value.as< std::string > ()));
      }
#line 4974 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 418:
#line 2943 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as< std::string > ()));
      }
#line 4982 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 419:
#line 2947 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4990 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 420:
#line 2951 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4998 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 421:
#line 2955 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as< std::string > ()));
      }
#line 5006 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 422:
#line 2959 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as< std::string > ()));
      }
#line 5014 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 423:
#line 2963 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5022 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 424:
#line 2967 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5030 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 425:
#line 2971 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5038 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 426:
#line 2975 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as< std::string > ()));
      }
#line 5046 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 427:
#line 2979 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::TrimLeft(yystack_[0].value.as< std::string > ()));
      }
#line 5054 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 428:
#line 2983 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::TrimRight(yystack_[0].value.as< std::string > ()));
      }
#line 5062 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 429:
#line 2987 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as< std::string > ()));
      }
#line 5070 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 430:
#line 2991 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as< std::string > ()));
      }
#line 5078 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 431:
#line 2995 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as< std::string > ()));
      }
#line 5086 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 432:
#line 2999 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as< std::string > ()));
      }
#line 5094 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 433:
#line 3003 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as< std::string > ()));
      }
#line 5102 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 434:
#line 3007 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as< std::string > ()));
      }
#line 5110 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 435:
#line 3011 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as< std::string > ()));
      }
#line 5118 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 436:
#line 3018 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 5126 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 437:
#line 3022 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 5134 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 438:
#line 3026 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5142 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 439:
#line 3030 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5150 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 440:
#line 3034 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5158 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 441:
#line 3041 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 5167 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 442:
#line 3046 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 5176 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 443:
#line 3051 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5186 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 444:
#line 3057 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5196 "seclang-parser.cc" // lalr1.cc:859
    break;


#line 5200 "seclang-parser.cc" // lalr1.cc:859
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


  const short int seclang_parser::yypact_ninf_ = -402;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short int
  seclang_parser::yypact_[] =
  {
    2776,  -402,  -277,  -402,  -100,  -402,  -157,  -402,  -402,  -402,
    -402,  -402,  -292,  -402,  -402,  -402,  -402,  -402,  -274,  -402,
    -402,  -402,  -155,  -153,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -149,
    -402,  -402,  -150,  -402,  -145,  -402,  -146,  -135,  -402,  -284,
     -90,   -90,  -402,  -402,  -402,  -402,  -133,  -301,  -402,  -402,
    -402,  1492,  1492,  1492,   -90,  -271,  -131,  -402,  -402,  -402,
    -129,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    1492,   -90,  2920,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  2340,  -259,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -265,  -402,  -402,  -402,  -402,  -127,
    -125,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  2473,  -402,  2473,  -402,  2473,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  2473,  -402,  -402,  -402,  -402,  -402,
    -402,  2473,  2473,  2473,  2473,  -402,  -402,  -402,  -402,  2473,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  3107,  -402,
       2,  -402,  -402,  -402,  -402,  -402,  -402,  2672,  2672,  -159,
    -156,  -154,  -152,  -148,  -142,  -140,  -138,  -134,  -132,  -130,
    -128,  -126,  -124,  -122,  -120,  -118,  -402,  -116,  -114,  -112,
    -110,  -402,  -402,  -108,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -104,
    -402,  -402,  -402,  -402,  -402,   460,  -402,  -402,  -402,  -102,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,   550,   640,   975,  1065,  1155,   -99,   -97,  1584,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,    16,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  2008,  -402,  -402,  -402,
    -402,  2672,   -50,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  2563,  2563,  2563,  2563,
    2563,  2563,  2563,  2563,  2563,     3,  3107,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  2563,  -402,  -402,
    -402,  -402,  2563,  -402,  -402,  2563,  -402,  -402,  2563,  -402,
    -402,  2563,  -402,  -402,  2563,  -402,  -402,  -402,  -402,     8,
    1676,  2141,  2473,  2473,  2473,  -402,  -402,  2473,  2473,  2473,
    -402,  2473,  2473,  2473,  2473,  2473,  2473,  2473,  2473,  2473,
    2473,  2473,  2473,  2473,  2473,  2473,  2473,  -402,  2473,  2473,
    2473,  2473,  -402,  -402,  2473,  2473,  2473,  2473,  2473,   -90,
    -402,  2563,  -402,  2473,  2473,  2473,  -402,  -402,  -402,  -402,
    -402,  2672,  2672,  -402,  -402,  2563,  2563,  2563,  2563,  2563,
    2563,  2563,  2563,  2563,  2563,  2563,  2563,  2563,  2563,  2563,
    2563,  2563,  2563,  2563,  2563,  2563,  2563,  2563,  2563,  2563,
    2563,  2563,  2563,  2563,  2563,  2563,  2563,  -402,  2563,  2563,
    2563,  -402,  -402
  };

  const unsigned short int
  seclang_parser::yydefact_[] =
  {
       0,     2,     0,   143,     0,    89,     0,    88,    92,    93,
       7,     6,     0,    11,    14,    12,    13,    17,     0,   126,
     125,    94,     0,     0,   102,   103,   104,   105,    99,   127,
     106,   107,   141,   140,   110,   111,   112,   128,   129,     0,
     132,   130,     0,   131,     0,   133,     0,     0,   115,     0,
       0,     0,    80,   152,   153,   154,     0,     0,   118,   120,
     119,     0,     0,     0,     0,     0,     0,    26,    24,    25,
       0,   142,   148,   149,   150,   147,   151,   116,   117,   146,
       0,     0,     0,     4,    74,     5,    98,    97,    15,    16,
      91,    90,     9,    10,     8,    20,    19,    18,    96,    95,
     101,   100,    85,    84,   134,   135,    87,    86,   136,   137,
     114,   113,    83,    81,    82,     0,     0,   337,   338,   339,
     340,   341,   342,   343,     0,   347,   348,   349,   350,     0,
       0,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,     0,   370,     0,   371,     0,   373,   374,   375,   376,
     377,   378,   379,   380,     0,   382,   383,   384,   385,   386,
     387,     0,     0,     0,     0,   393,   394,   395,   396,     0,
     404,   405,   406,   407,   419,   425,   410,   411,   412,   423,
     424,   431,   413,   409,   418,   430,   429,   402,   401,   400,
     434,   433,   422,   420,   435,   421,   408,   403,   426,   427,
     428,   414,   417,   416,   415,   432,   398,   399,     0,    77,
      30,    32,    79,   109,   108,   138,   139,     0,     0,   166,
     169,   172,   175,   178,   181,   184,   187,   190,   193,   196,
     199,   202,   205,   208,   211,   214,   267,   256,   217,   253,
     259,   268,   269,   226,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     297,   296,   300,   299,   298,   301,   303,   302,   304,   262,
     305,   306,   307,   309,   308,   230,   310,   311,   263,   266,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   323,
     321,   322,   234,   238,   246,   250,   242,   220,   223,     0,
     325,   324,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   121,   156,   161,   122,   123,   124,    22,
      21,    23,    28,    27,   144,   145,     0,   155,    78,     1,
       3,     0,   437,   392,   357,   356,   355,   345,   344,   346,
     352,   351,   354,   353,   443,   444,   368,   369,   372,   381,
     388,   389,   390,   391,   397,     0,     0,   163,   162,   164,
     165,   167,   168,   170,   171,   173,   174,   176,   177,   179,
     180,   182,   183,   185,   186,   188,   189,   191,   192,   194,
     195,   197,   198,   200,   201,   203,   204,   206,   207,   209,
     210,   212,   213,   254,   255,   215,   216,   251,   252,   257,
     258,   224,   225,   260,   261,   228,   229,   227,   264,   265,
     232,   233,   231,   236,   237,   235,   244,   245,   243,   248,
     249,   247,   240,   241,   239,   218,   219,   221,   222,     0,
       0,     0,     0,     0,     0,    38,    39,     0,     0,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,    76,
      33,    35,   436,     0,     0,     0,   441,   442,    29,    31,
     157,     0,     0,   158,    34,    36,    72,    56,    55,    57,
      58,    43,    59,    52,    60,    42,    61,    62,    63,    64,
      65,    66,    67,    53,    68,    69,    70,    71,    44,    45,
      46,    47,    48,    49,    50,    51,    54,    75,   438,   439,
     440,   160,   159
  };

  const short int
  seclang_parser::yypgoto_[] =
  {
    -402,  -402,   -74,  -402,   -47,  -170,  -402,  -401,  -402,  -402,
     -51,  -254,   -61,  -316,  -402,  -136
  };

  const short int
  seclang_parser::yydefgoto_[] =
  {
      -1,    82,    83,    84,   209,   210,   479,   480,    85,   336,
     323,   324,   355,   211,   343,   356
  };

  const unsigned short int
  seclang_parser::yytable_[] =
  {
     325,   325,   325,   215,   212,   366,   366,   357,   340,   358,
     115,   326,   327,   216,   440,    92,    93,   328,   359,   325,
      94,   112,   440,   113,   114,   360,   361,   362,   363,   337,
      86,    87,    95,   364,   338,    96,   329,   330,   365,    97,
     494,   331,   347,   348,    88,    89,   344,   349,   345,   346,
     489,   483,   484,   485,   342,   439,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   417,
      90,    91,    98,    99,   100,   101,   367,   368,   102,   103,
     104,   105,   106,   107,   108,   109,   422,   425,   428,   431,
     434,     0,   110,   111,   213,   214,   332,   333,   334,   335,
     350,   351,   352,   353,   369,   370,     0,   371,   372,   373,
     374,   375,   376,     0,     0,   377,   378,     0,     0,     0,
     481,   379,   380,   381,   382,   383,   384,     0,     0,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,     0,   208,   413,
     414,   418,   419,     0,   435,   436,   437,   438,   325,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     482,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   487,   487,   487,   487,   487,
     487,   487,   487,   487,     0,   495,   496,   497,   498,     0,
       0,   499,   500,   501,     0,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   488,   518,   519,   520,   521,   490,     0,   522,   523,
     524,   525,   526,     0,     0,     0,     0,   528,   529,   530,
       0,     0,     0,     0,     0,     0,   487,     0,     0,     0,
       0,   487,     0,     0,   487,     0,     0,   487,     0,     0,
     487,     0,     0,   487,     0,     0,     0,     0,     0,   493,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     487,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     531,   532,   527,     0,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,     0,   487,   487,   487,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,     0,   415,   416,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,     0,   420,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   354,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,     0,   423,   424,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,     0,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,     0,   426,   427,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,     0,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,     0,   429,   430,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,     0,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,     0,   432,   433,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   491,   492,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,     0,     0,
       0,     0,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     0,     0,     0,     0,     0,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,     0,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   354,     0,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
       0,     0,     0,     0,   341,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,     0,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,     0,     0,     0,     0,     0,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,     0,     0,     0,     0,     1,     0,     0,     0,
       2,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,     0,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     486,     0,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
     339,     0,     0,     0,     2,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     4,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   115,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207
  };

  const short int
  seclang_parser::yycheck_[] =
  {
      61,    62,    63,   304,    51,     3,     3,   143,    82,   145,
     100,    62,    63,   314,     6,   307,   308,    64,   154,    80,
     312,   305,     6,   307,   308,   161,   162,   163,   164,    80,
     307,   308,   306,   169,    81,   309,   307,   308,   208,   313,
     441,   312,   307,   308,   144,   145,   305,   312,   307,   308,
     366,   101,   102,   103,   115,   309,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,    -1,   285,
     307,   308,   307,   308,   307,   308,   217,   218,   307,   308,
     310,   311,   307,   308,   310,   311,   302,   303,   304,   305,
     306,    -1,   307,   308,   307,   308,   307,   308,   307,   308,
     307,   308,   307,   308,   343,   344,    -1,   343,   344,   343,
     344,   343,   344,    -1,    -1,   343,   344,    -1,    -1,    -1,
     336,   343,   344,   343,   344,   343,   344,    -1,    -1,   343,
     344,   343,   344,   343,   344,   343,   344,   343,   344,   343,
     344,   343,   344,   343,   344,   343,   344,   343,   344,   343,
     344,   343,   344,   343,   344,   343,   344,    -1,   328,   343,
     344,   343,   344,    -1,   343,   344,   343,   344,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,    -1,   441,   442,   443,   444,    -1,
      -1,   447,   448,   449,    -1,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   328,   468,   469,   470,   471,   328,    -1,   474,   475,
     476,   477,   478,    -1,    -1,    -1,    -1,   483,   484,   485,
      -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,
      -1,   422,    -1,    -1,   425,    -1,    -1,   428,    -1,    -1,
     431,    -1,    -1,   434,    -1,    -1,    -1,    -1,    -1,   440,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     491,   492,   479,    -1,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,    -1,   528,   529,   530,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,    -1,   343,   344,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,    -1,   343,   344,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,    -1,   343,   344,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,   343,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,   343,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,   343,   344,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    -1,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,    -1,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,    -1,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
       0,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   143,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   100,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,    -1,    -1,    -1,
      -1,    -1,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   346,   347,   348,   353,   307,   308,   144,   145,
     307,   308,   307,   308,   312,   306,   309,   313,   307,   308,
     307,   308,   307,   308,   310,   311,   307,   308,   310,   311,
     307,   308,   305,   307,   308,   100,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   328,   349,
     350,   358,   349,   307,   308,   304,   314,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   355,   356,   357,   355,   355,   349,   307,
     308,   312,   307,   308,   307,   308,   354,   355,   349,     0,
     347,   104,   357,   359,   305,   307,   308,   307,   308,   312,
     307,   308,   307,   308,   327,   357,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   350,     3,   357,   357,   343,
     344,   343,   344,   343,   344,   343,   344,   343,   344,   343,
     344,   343,   344,   343,   344,   343,   344,   343,   344,   343,
     344,   343,   344,   343,   344,   343,   344,   343,   344,   343,
     344,   343,   344,   343,   344,   343,   344,   343,   344,   343,
     344,   343,   344,   343,   344,   343,   344,   360,   343,   344,
     343,   344,   360,   343,   344,   360,   343,   344,   360,   343,
     344,   360,   343,   344,   360,   343,   344,   343,   344,   356,
       6,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   351,
     352,   360,   357,   101,   102,   103,   327,   357,   328,   358,
     328,     8,     9,   357,   352,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   349,   360,   360,
     360,   357,   357
  };

  const unsigned short int
  seclang_parser::yyr1_[] =
  {
       0,   345,   346,   346,   346,   347,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   349,
     349,   350,   350,   351,   351,   351,   351,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   354,   355,   355,   356,   356,
     356,   356,   356,   356,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   359,   359,   359,   359,
     359,   360,   360,   360,   360
  };

  const unsigned char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     3,
       1,     3,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     4,     3,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     1,     2,     2,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     2,
       1,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       2,     2,     1,     2,     2,     2,     1,     2,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     3,
       3,     2,     2,     1,     1
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
  "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
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
       0,   714,   714,   718,   719,   722,   727,   733,   739,   743,
     747,   753,   759,   765,   771,   776,   781,   787,   794,   798,
     802,   808,   812,   816,   821,   826,   831,   836,   840,   847,
     851,   858,   864,   874,   883,   893,   902,   915,   919,   923,
     927,   931,   935,   939,   943,   947,   951,   956,   960,   964,
     968,   972,   976,   981,   986,   990,   994,   998,  1002,  1006,
    1010,  1014,  1018,  1022,  1026,  1030,  1034,  1038,  1042,  1046,
    1050,  1054,  1058,  1062,  1076,  1077,  1107,  1126,  1145,  1173,
    1230,  1237,  1241,  1245,  1249,  1253,  1257,  1261,  1265,  1274,
    1278,  1283,  1286,  1291,  1296,  1301,  1306,  1309,  1314,  1317,
    1322,  1327,  1330,  1335,  1340,  1345,  1350,  1355,  1360,  1365,
    1368,  1373,  1378,  1383,  1388,  1391,  1396,  1401,  1406,  1419,
    1432,  1445,  1458,  1471,  1497,  1525,  1537,  1557,  1584,  1589,
    1595,  1600,  1605,  1614,  1619,  1623,  1627,  1631,  1635,  1639,
    1643,  1648,  1653,  1665,  1671,  1675,  1679,  1690,  1699,  1700,
    1707,  1712,  1717,  1771,  1778,  1786,  1823,  1827,  1834,  1839,
    1845,  1851,  1857,  1864,  1874,  1878,  1882,  1886,  1890,  1894,
    1898,  1902,  1906,  1910,  1914,  1918,  1922,  1926,  1930,  1934,
    1938,  1942,  1946,  1950,  1954,  1958,  1962,  1966,  1970,  1974,
    1978,  1982,  1986,  1990,  1994,  1998,  2002,  2006,  2010,  2014,
    2018,  2022,  2026,  2030,  2034,  2038,  2042,  2046,  2050,  2054,
    2058,  2062,  2066,  2070,  2074,  2078,  2082,  2086,  2090,  2094,
    2098,  2102,  2106,  2110,  2114,  2118,  2122,  2126,  2130,  2134,
    2138,  2142,  2146,  2150,  2154,  2158,  2162,  2166,  2170,  2174,
    2178,  2182,  2186,  2190,  2194,  2198,  2202,  2206,  2210,  2214,
    2218,  2222,  2226,  2230,  2234,  2238,  2242,  2247,  2251,  2255,
    2260,  2264,  2268,  2273,  2278,  2282,  2286,  2290,  2294,  2298,
    2302,  2306,  2310,  2314,  2318,  2322,  2326,  2330,  2334,  2338,
    2342,  2346,  2350,  2354,  2358,  2362,  2366,  2370,  2374,  2378,
    2382,  2386,  2390,  2394,  2398,  2402,  2406,  2410,  2414,  2418,
    2422,  2426,  2430,  2434,  2438,  2442,  2446,  2450,  2454,  2458,
    2462,  2466,  2470,  2474,  2478,  2482,  2486,  2490,  2494,  2498,
    2502,  2506,  2510,  2514,  2518,  2526,  2533,  2540,  2547,  2554,
    2561,  2568,  2575,  2582,  2589,  2596,  2603,  2613,  2617,  2621,
    2625,  2629,  2633,  2637,  2641,  2646,  2650,  2655,  2659,  2663,
    2667,  2671,  2676,  2681,  2685,  2689,  2693,  2697,  2701,  2705,
    2709,  2713,  2717,  2721,  2725,  2729,  2733,  2738,  2742,  2746,
    2750,  2754,  2758,  2762,  2766,  2770,  2774,  2778,  2782,  2786,
    2790,  2794,  2798,  2802,  2806,  2810,  2814,  2818,  2822,  2826,
    2830,  2834,  2838,  2842,  2846,  2850,  2854,  2858,  2862,  2866,
    2870,  2874,  2878,  2882,  2886,  2890,  2894,  2898,  2902,  2906,
    2910,  2914,  2918,  2922,  2926,  2930,  2934,  2938,  2942,  2946,
    2950,  2954,  2958,  2962,  2966,  2970,  2974,  2978,  2982,  2986,
    2990,  2994,  2998,  3002,  3006,  3010,  3017,  3021,  3025,  3029,
    3033,  3040,  3045,  3050,  3056
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
#line 6697 "seclang-parser.cc" // lalr1.cc:1167
#line 3063 "seclang-parser.yy" // lalr1.cc:1168


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}
