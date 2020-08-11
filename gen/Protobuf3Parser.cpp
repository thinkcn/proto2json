
// Generated from Protobuf3.g4 by ANTLR 4.7.1


#include "Protobuf3Listener.h"
#include "Protobuf3Visitor.h"

#include "Protobuf3Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Protobuf3Parser::Protobuf3Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Protobuf3Parser::~Protobuf3Parser() {
  delete _interpreter;
}

std::string Protobuf3Parser::getGrammarFileName() const {
  return "Protobuf3.g4";
}

const std::vector<std::string>& Protobuf3Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Protobuf3Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProtoContext ------------------------------------------------------------------

Protobuf3Parser::ProtoContext::ProtoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::SyntaxContext* Protobuf3Parser::ProtoContext::syntax() {
  return getRuleContext<Protobuf3Parser::SyntaxContext>(0);
}

tree::TerminalNode* Protobuf3Parser::ProtoContext::EOF() {
  return getToken(Protobuf3Parser::EOF, 0);
}

std::vector<Protobuf3Parser::ImportStatementContext *> Protobuf3Parser::ProtoContext::importStatement() {
  return getRuleContexts<Protobuf3Parser::ImportStatementContext>();
}

Protobuf3Parser::ImportStatementContext* Protobuf3Parser::ProtoContext::importStatement(size_t i) {
  return getRuleContext<Protobuf3Parser::ImportStatementContext>(i);
}

std::vector<Protobuf3Parser::PackageStatementContext *> Protobuf3Parser::ProtoContext::packageStatement() {
  return getRuleContexts<Protobuf3Parser::PackageStatementContext>();
}

Protobuf3Parser::PackageStatementContext* Protobuf3Parser::ProtoContext::packageStatement(size_t i) {
  return getRuleContext<Protobuf3Parser::PackageStatementContext>(i);
}

std::vector<Protobuf3Parser::OptionContext *> Protobuf3Parser::ProtoContext::option() {
  return getRuleContexts<Protobuf3Parser::OptionContext>();
}

Protobuf3Parser::OptionContext* Protobuf3Parser::ProtoContext::option(size_t i) {
  return getRuleContext<Protobuf3Parser::OptionContext>(i);
}

std::vector<Protobuf3Parser::TopLevelDefContext *> Protobuf3Parser::ProtoContext::topLevelDef() {
  return getRuleContexts<Protobuf3Parser::TopLevelDefContext>();
}

Protobuf3Parser::TopLevelDefContext* Protobuf3Parser::ProtoContext::topLevelDef(size_t i) {
  return getRuleContext<Protobuf3Parser::TopLevelDefContext>(i);
}

std::vector<Protobuf3Parser::EmptyStatementContext *> Protobuf3Parser::ProtoContext::emptyStatement() {
  return getRuleContexts<Protobuf3Parser::EmptyStatementContext>();
}

Protobuf3Parser::EmptyStatementContext* Protobuf3Parser::ProtoContext::emptyStatement(size_t i) {
  return getRuleContext<Protobuf3Parser::EmptyStatementContext>(i);
}


size_t Protobuf3Parser::ProtoContext::getRuleIndex() const {
  return Protobuf3Parser::RuleProto;
}

void Protobuf3Parser::ProtoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProto(this);
}

void Protobuf3Parser::ProtoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProto(this);
}


antlrcpp::Any Protobuf3Parser::ProtoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitProto(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::ProtoContext* Protobuf3Parser::proto() {
  ProtoContext *_localctx = _tracker.createInstance<ProtoContext>(_ctx, getState());
  enterRule(_localctx, 0, Protobuf3Parser::RuleProto);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    syntax();
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Protobuf3Parser::ENUM)
      | (1ULL << Protobuf3Parser::EXTEND)
      | (1ULL << Protobuf3Parser::IMPORT)
      | (1ULL << Protobuf3Parser::MESSAGE)
      | (1ULL << Protobuf3Parser::OPTION)
      | (1ULL << Protobuf3Parser::PACKAGE)
      | (1ULL << Protobuf3Parser::SERVICE)
      | (1ULL << Protobuf3Parser::SEMI))) != 0)) {
      setState(96);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Protobuf3Parser::IMPORT: {
          setState(91);
          importStatement();
          break;
        }

        case Protobuf3Parser::PACKAGE: {
          setState(92);
          packageStatement();
          break;
        }

        case Protobuf3Parser::OPTION: {
          setState(93);
          option();
          break;
        }

        case Protobuf3Parser::ENUM:
        case Protobuf3Parser::EXTEND:
        case Protobuf3Parser::MESSAGE:
        case Protobuf3Parser::SERVICE: {
          setState(94);
          topLevelDef();
          break;
        }

        case Protobuf3Parser::SEMI: {
          setState(95);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(101);
    match(Protobuf3Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SyntaxContext ------------------------------------------------------------------

Protobuf3Parser::SyntaxContext::SyntaxContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Protobuf3Parser::SyntaxContext::getRuleIndex() const {
  return Protobuf3Parser::RuleSyntax;
}

void Protobuf3Parser::SyntaxContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSyntax(this);
}

void Protobuf3Parser::SyntaxContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSyntax(this);
}


antlrcpp::Any Protobuf3Parser::SyntaxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitSyntax(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::SyntaxContext* Protobuf3Parser::syntax() {
  SyntaxContext *_localctx = _tracker.createInstance<SyntaxContext>(_ctx, getState());
  enterRule(_localctx, 2, Protobuf3Parser::RuleSyntax);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(Protobuf3Parser::SYNTAX);
    setState(104);
    match(Protobuf3Parser::ASSIGN);
    setState(105);
    _la = _input->LA(1);
    if (!(_la == Protobuf3Parser::PROTO3_DOUBLE

    || _la == Protobuf3Parser::PROTO3_SINGLE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(106);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

Protobuf3Parser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::ImportStatementContext::StrLit() {
  return getToken(Protobuf3Parser::StrLit, 0);
}


size_t Protobuf3Parser::ImportStatementContext::getRuleIndex() const {
  return Protobuf3Parser::RuleImportStatement;
}

void Protobuf3Parser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void Protobuf3Parser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}


antlrcpp::Any Protobuf3Parser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::ImportStatementContext* Protobuf3Parser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, Protobuf3Parser::RuleImportStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(Protobuf3Parser::IMPORT);
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::PUBLIC

    || _la == Protobuf3Parser::WEAK) {
      setState(109);
      _la = _input->LA(1);
      if (!(_la == Protobuf3Parser::PUBLIC

      || _la == Protobuf3Parser::WEAK)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(112);
    match(Protobuf3Parser::StrLit);
    setState(113);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageStatementContext ------------------------------------------------------------------

Protobuf3Parser::PackageStatementContext::PackageStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::FullIdentContext* Protobuf3Parser::PackageStatementContext::fullIdent() {
  return getRuleContext<Protobuf3Parser::FullIdentContext>(0);
}


size_t Protobuf3Parser::PackageStatementContext::getRuleIndex() const {
  return Protobuf3Parser::RulePackageStatement;
}

void Protobuf3Parser::PackageStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageStatement(this);
}

void Protobuf3Parser::PackageStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageStatement(this);
}


antlrcpp::Any Protobuf3Parser::PackageStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitPackageStatement(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::PackageStatementContext* Protobuf3Parser::packageStatement() {
  PackageStatementContext *_localctx = _tracker.createInstance<PackageStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, Protobuf3Parser::RulePackageStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(Protobuf3Parser::PACKAGE);
    setState(116);
    fullIdent();
    setState(117);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionContext ------------------------------------------------------------------

Protobuf3Parser::OptionContext::OptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::OptionNameContext* Protobuf3Parser::OptionContext::optionName() {
  return getRuleContext<Protobuf3Parser::OptionNameContext>(0);
}

Protobuf3Parser::ConstantContext* Protobuf3Parser::OptionContext::constant() {
  return getRuleContext<Protobuf3Parser::ConstantContext>(0);
}

Protobuf3Parser::OptionBodyContext* Protobuf3Parser::OptionContext::optionBody() {
  return getRuleContext<Protobuf3Parser::OptionBodyContext>(0);
}


size_t Protobuf3Parser::OptionContext::getRuleIndex() const {
  return Protobuf3Parser::RuleOption;
}

void Protobuf3Parser::OptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOption(this);
}

void Protobuf3Parser::OptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOption(this);
}


antlrcpp::Any Protobuf3Parser::OptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitOption(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::OptionContext* Protobuf3Parser::option() {
  OptionContext *_localctx = _tracker.createInstance<OptionContext>(_ctx, getState());
  enterRule(_localctx, 8, Protobuf3Parser::RuleOption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(Protobuf3Parser::OPTION);
    setState(120);
    optionName();
    setState(121);
    match(Protobuf3Parser::ASSIGN);
    setState(124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Protobuf3Parser::Ident:
      case Protobuf3Parser::IntLit:
      case Protobuf3Parser::FloatLit:
      case Protobuf3Parser::BoolLit:
      case Protobuf3Parser::StrLit:
      case Protobuf3Parser::MINUS:
      case Protobuf3Parser::PLUS: {
        setState(122);
        constant();
        break;
      }

      case Protobuf3Parser::LBRACE: {
        setState(123);
        optionBody();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(126);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionNameContext ------------------------------------------------------------------

Protobuf3Parser::OptionNameContext::OptionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Protobuf3Parser::OptionNameContext::Ident() {
  return getTokens(Protobuf3Parser::Ident);
}

tree::TerminalNode* Protobuf3Parser::OptionNameContext::Ident(size_t i) {
  return getToken(Protobuf3Parser::Ident, i);
}

Protobuf3Parser::FullIdentContext* Protobuf3Parser::OptionNameContext::fullIdent() {
  return getRuleContext<Protobuf3Parser::FullIdentContext>(0);
}

std::vector<Protobuf3Parser::ReservedWordContext *> Protobuf3Parser::OptionNameContext::reservedWord() {
  return getRuleContexts<Protobuf3Parser::ReservedWordContext>();
}

Protobuf3Parser::ReservedWordContext* Protobuf3Parser::OptionNameContext::reservedWord(size_t i) {
  return getRuleContext<Protobuf3Parser::ReservedWordContext>(i);
}


size_t Protobuf3Parser::OptionNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleOptionName;
}

void Protobuf3Parser::OptionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionName(this);
}

void Protobuf3Parser::OptionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionName(this);
}


antlrcpp::Any Protobuf3Parser::OptionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitOptionName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::OptionNameContext* Protobuf3Parser::optionName() {
  OptionNameContext *_localctx = _tracker.createInstance<OptionNameContext>(_ctx, getState());
  enterRule(_localctx, 10, Protobuf3Parser::RuleOptionName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Protobuf3Parser::Ident: {
        setState(128);
        match(Protobuf3Parser::Ident);
        break;
      }

      case Protobuf3Parser::LPAREN: {
        setState(129);
        match(Protobuf3Parser::LPAREN);
        setState(130);
        fullIdent();
        setState(131);
        match(Protobuf3Parser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Protobuf3Parser::DOT) {
      setState(135);
      match(Protobuf3Parser::DOT);
      setState(138);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Protobuf3Parser::Ident: {
          setState(136);
          match(Protobuf3Parser::Ident);
          break;
        }

        case Protobuf3Parser::EXTEND:
        case Protobuf3Parser::MESSAGE:
        case Protobuf3Parser::OPTION:
        case Protobuf3Parser::PACKAGE:
        case Protobuf3Parser::RPC:
        case Protobuf3Parser::SERVICE:
        case Protobuf3Parser::STREAM:
        case Protobuf3Parser::STRING:
        case Protobuf3Parser::SYNTAX:
        case Protobuf3Parser::WEAK: {
          setState(137);
          reservedWord();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionBodyContext ------------------------------------------------------------------

Protobuf3Parser::OptionBodyContext::OptionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Protobuf3Parser::OptionBodyVariableContext *> Protobuf3Parser::OptionBodyContext::optionBodyVariable() {
  return getRuleContexts<Protobuf3Parser::OptionBodyVariableContext>();
}

Protobuf3Parser::OptionBodyVariableContext* Protobuf3Parser::OptionBodyContext::optionBodyVariable(size_t i) {
  return getRuleContext<Protobuf3Parser::OptionBodyVariableContext>(i);
}


size_t Protobuf3Parser::OptionBodyContext::getRuleIndex() const {
  return Protobuf3Parser::RuleOptionBody;
}

void Protobuf3Parser::OptionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionBody(this);
}

void Protobuf3Parser::OptionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionBody(this);
}


antlrcpp::Any Protobuf3Parser::OptionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitOptionBody(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::OptionBodyContext* Protobuf3Parser::optionBody() {
  OptionBodyContext *_localctx = _tracker.createInstance<OptionBodyContext>(_ctx, getState());
  enterRule(_localctx, 12, Protobuf3Parser::RuleOptionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(Protobuf3Parser::LBRACE);
    setState(149);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Protobuf3Parser::Ident

    || _la == Protobuf3Parser::LPAREN) {
      setState(146);
      optionBodyVariable();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(152);
    match(Protobuf3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionBodyVariableContext ------------------------------------------------------------------

Protobuf3Parser::OptionBodyVariableContext::OptionBodyVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::OptionNameContext* Protobuf3Parser::OptionBodyVariableContext::optionName() {
  return getRuleContext<Protobuf3Parser::OptionNameContext>(0);
}

Protobuf3Parser::ConstantContext* Protobuf3Parser::OptionBodyVariableContext::constant() {
  return getRuleContext<Protobuf3Parser::ConstantContext>(0);
}


size_t Protobuf3Parser::OptionBodyVariableContext::getRuleIndex() const {
  return Protobuf3Parser::RuleOptionBodyVariable;
}

void Protobuf3Parser::OptionBodyVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionBodyVariable(this);
}

void Protobuf3Parser::OptionBodyVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionBodyVariable(this);
}


antlrcpp::Any Protobuf3Parser::OptionBodyVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitOptionBodyVariable(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::OptionBodyVariableContext* Protobuf3Parser::optionBodyVariable() {
  OptionBodyVariableContext *_localctx = _tracker.createInstance<OptionBodyVariableContext>(_ctx, getState());
  enterRule(_localctx, 14, Protobuf3Parser::RuleOptionBodyVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    optionName();
    setState(155);
    match(Protobuf3Parser::T__0);
    setState(156);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelDefContext ------------------------------------------------------------------

Protobuf3Parser::TopLevelDefContext::TopLevelDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::MessageContext* Protobuf3Parser::TopLevelDefContext::message() {
  return getRuleContext<Protobuf3Parser::MessageContext>(0);
}

Protobuf3Parser::EnumDefinitionContext* Protobuf3Parser::TopLevelDefContext::enumDefinition() {
  return getRuleContext<Protobuf3Parser::EnumDefinitionContext>(0);
}

Protobuf3Parser::ExtendContext* Protobuf3Parser::TopLevelDefContext::extend() {
  return getRuleContext<Protobuf3Parser::ExtendContext>(0);
}

Protobuf3Parser::ServiceContext* Protobuf3Parser::TopLevelDefContext::service() {
  return getRuleContext<Protobuf3Parser::ServiceContext>(0);
}


size_t Protobuf3Parser::TopLevelDefContext::getRuleIndex() const {
  return Protobuf3Parser::RuleTopLevelDef;
}

void Protobuf3Parser::TopLevelDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelDef(this);
}

void Protobuf3Parser::TopLevelDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelDef(this);
}


antlrcpp::Any Protobuf3Parser::TopLevelDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitTopLevelDef(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::TopLevelDefContext* Protobuf3Parser::topLevelDef() {
  TopLevelDefContext *_localctx = _tracker.createInstance<TopLevelDefContext>(_ctx, getState());
  enterRule(_localctx, 16, Protobuf3Parser::RuleTopLevelDef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Protobuf3Parser::MESSAGE: {
        enterOuterAlt(_localctx, 1);
        setState(158);
        message();
        break;
      }

      case Protobuf3Parser::ENUM: {
        enterOuterAlt(_localctx, 2);
        setState(159);
        enumDefinition();
        break;
      }

      case Protobuf3Parser::EXTEND: {
        enterOuterAlt(_localctx, 3);
        setState(160);
        extend();
        break;
      }

      case Protobuf3Parser::SERVICE: {
        enterOuterAlt(_localctx, 4);
        setState(161);
        service();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageContext ------------------------------------------------------------------

Protobuf3Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::MessageNameContext* Protobuf3Parser::MessageContext::messageName() {
  return getRuleContext<Protobuf3Parser::MessageNameContext>(0);
}

Protobuf3Parser::MessageBodyContext* Protobuf3Parser::MessageContext::messageBody() {
  return getRuleContext<Protobuf3Parser::MessageBodyContext>(0);
}


size_t Protobuf3Parser::MessageContext::getRuleIndex() const {
  return Protobuf3Parser::RuleMessage;
}

void Protobuf3Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void Protobuf3Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}


antlrcpp::Any Protobuf3Parser::MessageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitMessage(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::MessageContext* Protobuf3Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 18, Protobuf3Parser::RuleMessage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(Protobuf3Parser::MESSAGE);
    setState(165);
    messageName();
    setState(166);
    messageBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageBodyContext ------------------------------------------------------------------

Protobuf3Parser::MessageBodyContext::MessageBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Protobuf3Parser::FieldContext *> Protobuf3Parser::MessageBodyContext::field() {
  return getRuleContexts<Protobuf3Parser::FieldContext>();
}

Protobuf3Parser::FieldContext* Protobuf3Parser::MessageBodyContext::field(size_t i) {
  return getRuleContext<Protobuf3Parser::FieldContext>(i);
}

std::vector<Protobuf3Parser::EnumDefinitionContext *> Protobuf3Parser::MessageBodyContext::enumDefinition() {
  return getRuleContexts<Protobuf3Parser::EnumDefinitionContext>();
}

Protobuf3Parser::EnumDefinitionContext* Protobuf3Parser::MessageBodyContext::enumDefinition(size_t i) {
  return getRuleContext<Protobuf3Parser::EnumDefinitionContext>(i);
}

std::vector<Protobuf3Parser::MessageContext *> Protobuf3Parser::MessageBodyContext::message() {
  return getRuleContexts<Protobuf3Parser::MessageContext>();
}

Protobuf3Parser::MessageContext* Protobuf3Parser::MessageBodyContext::message(size_t i) {
  return getRuleContext<Protobuf3Parser::MessageContext>(i);
}

std::vector<Protobuf3Parser::ExtendContext *> Protobuf3Parser::MessageBodyContext::extend() {
  return getRuleContexts<Protobuf3Parser::ExtendContext>();
}

Protobuf3Parser::ExtendContext* Protobuf3Parser::MessageBodyContext::extend(size_t i) {
  return getRuleContext<Protobuf3Parser::ExtendContext>(i);
}

std::vector<Protobuf3Parser::OptionContext *> Protobuf3Parser::MessageBodyContext::option() {
  return getRuleContexts<Protobuf3Parser::OptionContext>();
}

Protobuf3Parser::OptionContext* Protobuf3Parser::MessageBodyContext::option(size_t i) {
  return getRuleContext<Protobuf3Parser::OptionContext>(i);
}

std::vector<Protobuf3Parser::OneofContext *> Protobuf3Parser::MessageBodyContext::oneof() {
  return getRuleContexts<Protobuf3Parser::OneofContext>();
}

Protobuf3Parser::OneofContext* Protobuf3Parser::MessageBodyContext::oneof(size_t i) {
  return getRuleContext<Protobuf3Parser::OneofContext>(i);
}

std::vector<Protobuf3Parser::MapFieldContext *> Protobuf3Parser::MessageBodyContext::mapField() {
  return getRuleContexts<Protobuf3Parser::MapFieldContext>();
}

Protobuf3Parser::MapFieldContext* Protobuf3Parser::MessageBodyContext::mapField(size_t i) {
  return getRuleContext<Protobuf3Parser::MapFieldContext>(i);
}

std::vector<Protobuf3Parser::ReservedContext *> Protobuf3Parser::MessageBodyContext::reserved() {
  return getRuleContexts<Protobuf3Parser::ReservedContext>();
}

Protobuf3Parser::ReservedContext* Protobuf3Parser::MessageBodyContext::reserved(size_t i) {
  return getRuleContext<Protobuf3Parser::ReservedContext>(i);
}

std::vector<Protobuf3Parser::EmptyStatementContext *> Protobuf3Parser::MessageBodyContext::emptyStatement() {
  return getRuleContexts<Protobuf3Parser::EmptyStatementContext>();
}

Protobuf3Parser::EmptyStatementContext* Protobuf3Parser::MessageBodyContext::emptyStatement(size_t i) {
  return getRuleContext<Protobuf3Parser::EmptyStatementContext>(i);
}


size_t Protobuf3Parser::MessageBodyContext::getRuleIndex() const {
  return Protobuf3Parser::RuleMessageBody;
}

void Protobuf3Parser::MessageBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageBody(this);
}

void Protobuf3Parser::MessageBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageBody(this);
}


antlrcpp::Any Protobuf3Parser::MessageBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitMessageBody(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::MessageBodyContext* Protobuf3Parser::messageBody() {
  MessageBodyContext *_localctx = _tracker.createInstance<MessageBodyContext>(_ctx, getState());
  enterRule(_localctx, 20, Protobuf3Parser::RuleMessageBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(Protobuf3Parser::LBRACE);
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Protobuf3Parser::BOOL)
      | (1ULL << Protobuf3Parser::BYTES)
      | (1ULL << Protobuf3Parser::DOUBLE)
      | (1ULL << Protobuf3Parser::ENUM)
      | (1ULL << Protobuf3Parser::EXTEND)
      | (1ULL << Protobuf3Parser::FIXED32)
      | (1ULL << Protobuf3Parser::FIXED64)
      | (1ULL << Protobuf3Parser::FLOAT)
      | (1ULL << Protobuf3Parser::INT32)
      | (1ULL << Protobuf3Parser::INT64)
      | (1ULL << Protobuf3Parser::MAP)
      | (1ULL << Protobuf3Parser::MESSAGE)
      | (1ULL << Protobuf3Parser::ONEOF)
      | (1ULL << Protobuf3Parser::OPTION)
      | (1ULL << Protobuf3Parser::PACKAGE)
      | (1ULL << Protobuf3Parser::REPEATED)
      | (1ULL << Protobuf3Parser::RESERVED)
      | (1ULL << Protobuf3Parser::RPC)
      | (1ULL << Protobuf3Parser::SERVICE)
      | (1ULL << Protobuf3Parser::SFIXED32)
      | (1ULL << Protobuf3Parser::SFIXED64)
      | (1ULL << Protobuf3Parser::SINT32)
      | (1ULL << Protobuf3Parser::SINT64)
      | (1ULL << Protobuf3Parser::STREAM)
      | (1ULL << Protobuf3Parser::STRING)
      | (1ULL << Protobuf3Parser::SYNTAX)
      | (1ULL << Protobuf3Parser::UINT32)
      | (1ULL << Protobuf3Parser::UINT64)
      | (1ULL << Protobuf3Parser::WEAK)
      | (1ULL << Protobuf3Parser::Ident)
      | (1ULL << Protobuf3Parser::SEMI)
      | (1ULL << Protobuf3Parser::DOT))) != 0)) {
      setState(178);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(169);
        field();
        break;
      }

      case 2: {
        setState(170);
        enumDefinition();
        break;
      }

      case 3: {
        setState(171);
        message();
        break;
      }

      case 4: {
        setState(172);
        extend();
        break;
      }

      case 5: {
        setState(173);
        option();
        break;
      }

      case 6: {
        setState(174);
        oneof();
        break;
      }

      case 7: {
        setState(175);
        mapField();
        break;
      }

      case 8: {
        setState(176);
        reserved();
        break;
      }

      case 9: {
        setState(177);
        emptyStatement();
        break;
      }

      }
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(183);
    match(Protobuf3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDefinitionContext ------------------------------------------------------------------

Protobuf3Parser::EnumDefinitionContext::EnumDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::EnumNameContext* Protobuf3Parser::EnumDefinitionContext::enumName() {
  return getRuleContext<Protobuf3Parser::EnumNameContext>(0);
}

Protobuf3Parser::EnumBodyContext* Protobuf3Parser::EnumDefinitionContext::enumBody() {
  return getRuleContext<Protobuf3Parser::EnumBodyContext>(0);
}


size_t Protobuf3Parser::EnumDefinitionContext::getRuleIndex() const {
  return Protobuf3Parser::RuleEnumDefinition;
}

void Protobuf3Parser::EnumDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDefinition(this);
}

void Protobuf3Parser::EnumDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDefinition(this);
}


antlrcpp::Any Protobuf3Parser::EnumDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitEnumDefinition(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::EnumDefinitionContext* Protobuf3Parser::enumDefinition() {
  EnumDefinitionContext *_localctx = _tracker.createInstance<EnumDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, Protobuf3Parser::RuleEnumDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(Protobuf3Parser::ENUM);
    setState(186);
    enumName();
    setState(187);
    enumBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

Protobuf3Parser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Protobuf3Parser::OptionContext *> Protobuf3Parser::EnumBodyContext::option() {
  return getRuleContexts<Protobuf3Parser::OptionContext>();
}

Protobuf3Parser::OptionContext* Protobuf3Parser::EnumBodyContext::option(size_t i) {
  return getRuleContext<Protobuf3Parser::OptionContext>(i);
}

std::vector<Protobuf3Parser::EnumFieldContext *> Protobuf3Parser::EnumBodyContext::enumField() {
  return getRuleContexts<Protobuf3Parser::EnumFieldContext>();
}

Protobuf3Parser::EnumFieldContext* Protobuf3Parser::EnumBodyContext::enumField(size_t i) {
  return getRuleContext<Protobuf3Parser::EnumFieldContext>(i);
}

std::vector<Protobuf3Parser::EmptyStatementContext *> Protobuf3Parser::EnumBodyContext::emptyStatement() {
  return getRuleContexts<Protobuf3Parser::EmptyStatementContext>();
}

Protobuf3Parser::EmptyStatementContext* Protobuf3Parser::EnumBodyContext::emptyStatement(size_t i) {
  return getRuleContext<Protobuf3Parser::EmptyStatementContext>(i);
}


size_t Protobuf3Parser::EnumBodyContext::getRuleIndex() const {
  return Protobuf3Parser::RuleEnumBody;
}

void Protobuf3Parser::EnumBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBody(this);
}

void Protobuf3Parser::EnumBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBody(this);
}


antlrcpp::Any Protobuf3Parser::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::EnumBodyContext* Protobuf3Parser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 24, Protobuf3Parser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(Protobuf3Parser::LBRACE);
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Protobuf3Parser::OPTION)
      | (1ULL << Protobuf3Parser::Ident)
      | (1ULL << Protobuf3Parser::SEMI))) != 0)) {
      setState(193);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Protobuf3Parser::OPTION: {
          setState(190);
          option();
          break;
        }

        case Protobuf3Parser::Ident: {
          setState(191);
          enumField();
          break;
        }

        case Protobuf3Parser::SEMI: {
          setState(192);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(197);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(198);
    match(Protobuf3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumFieldContext ------------------------------------------------------------------

Protobuf3Parser::EnumFieldContext::EnumFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::EnumFieldContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}

tree::TerminalNode* Protobuf3Parser::EnumFieldContext::IntLit() {
  return getToken(Protobuf3Parser::IntLit, 0);
}

std::vector<Protobuf3Parser::EnumValueOptionContext *> Protobuf3Parser::EnumFieldContext::enumValueOption() {
  return getRuleContexts<Protobuf3Parser::EnumValueOptionContext>();
}

Protobuf3Parser::EnumValueOptionContext* Protobuf3Parser::EnumFieldContext::enumValueOption(size_t i) {
  return getRuleContext<Protobuf3Parser::EnumValueOptionContext>(i);
}


size_t Protobuf3Parser::EnumFieldContext::getRuleIndex() const {
  return Protobuf3Parser::RuleEnumField;
}

void Protobuf3Parser::EnumFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumField(this);
}

void Protobuf3Parser::EnumFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumField(this);
}


antlrcpp::Any Protobuf3Parser::EnumFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitEnumField(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::EnumFieldContext* Protobuf3Parser::enumField() {
  EnumFieldContext *_localctx = _tracker.createInstance<EnumFieldContext>(_ctx, getState());
  enterRule(_localctx, 26, Protobuf3Parser::RuleEnumField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(Protobuf3Parser::Ident);
    setState(201);
    match(Protobuf3Parser::ASSIGN);
    setState(203);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::MINUS) {
      setState(202);
      match(Protobuf3Parser::MINUS);
    }
    setState(205);
    match(Protobuf3Parser::IntLit);
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::LBRACK) {
      setState(206);
      match(Protobuf3Parser::LBRACK);
      setState(207);
      enumValueOption();
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Protobuf3Parser::COMMA) {
        setState(208);
        match(Protobuf3Parser::COMMA);
        setState(209);
        enumValueOption();
        setState(214);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(215);
      match(Protobuf3Parser::RBRACK);
    }
    setState(219);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumValueOptionContext ------------------------------------------------------------------

Protobuf3Parser::EnumValueOptionContext::EnumValueOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::OptionNameContext* Protobuf3Parser::EnumValueOptionContext::optionName() {
  return getRuleContext<Protobuf3Parser::OptionNameContext>(0);
}

Protobuf3Parser::ConstantContext* Protobuf3Parser::EnumValueOptionContext::constant() {
  return getRuleContext<Protobuf3Parser::ConstantContext>(0);
}


size_t Protobuf3Parser::EnumValueOptionContext::getRuleIndex() const {
  return Protobuf3Parser::RuleEnumValueOption;
}

void Protobuf3Parser::EnumValueOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumValueOption(this);
}

void Protobuf3Parser::EnumValueOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumValueOption(this);
}


antlrcpp::Any Protobuf3Parser::EnumValueOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitEnumValueOption(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::EnumValueOptionContext* Protobuf3Parser::enumValueOption() {
  EnumValueOptionContext *_localctx = _tracker.createInstance<EnumValueOptionContext>(_ctx, getState());
  enterRule(_localctx, 28, Protobuf3Parser::RuleEnumValueOption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    optionName();
    setState(222);
    match(Protobuf3Parser::ASSIGN);
    setState(223);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtendContext ------------------------------------------------------------------

Protobuf3Parser::ExtendContext::ExtendContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::MessageTypeContext* Protobuf3Parser::ExtendContext::messageType() {
  return getRuleContext<Protobuf3Parser::MessageTypeContext>(0);
}

Protobuf3Parser::FieldContext* Protobuf3Parser::ExtendContext::field() {
  return getRuleContext<Protobuf3Parser::FieldContext>(0);
}

Protobuf3Parser::EmptyStatementContext* Protobuf3Parser::ExtendContext::emptyStatement() {
  return getRuleContext<Protobuf3Parser::EmptyStatementContext>(0);
}


size_t Protobuf3Parser::ExtendContext::getRuleIndex() const {
  return Protobuf3Parser::RuleExtend;
}

void Protobuf3Parser::ExtendContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtend(this);
}

void Protobuf3Parser::ExtendContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtend(this);
}


antlrcpp::Any Protobuf3Parser::ExtendContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitExtend(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::ExtendContext* Protobuf3Parser::extend() {
  ExtendContext *_localctx = _tracker.createInstance<ExtendContext>(_ctx, getState());
  enterRule(_localctx, 30, Protobuf3Parser::RuleExtend);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(Protobuf3Parser::EXTEND);
    setState(226);
    messageType();
    setState(227);
    match(Protobuf3Parser::LBRACE);
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Protobuf3Parser::BOOL:
      case Protobuf3Parser::BYTES:
      case Protobuf3Parser::DOUBLE:
      case Protobuf3Parser::EXTEND:
      case Protobuf3Parser::FIXED32:
      case Protobuf3Parser::FIXED64:
      case Protobuf3Parser::FLOAT:
      case Protobuf3Parser::INT32:
      case Protobuf3Parser::INT64:
      case Protobuf3Parser::MESSAGE:
      case Protobuf3Parser::OPTION:
      case Protobuf3Parser::PACKAGE:
      case Protobuf3Parser::REPEATED:
      case Protobuf3Parser::RPC:
      case Protobuf3Parser::SERVICE:
      case Protobuf3Parser::SFIXED32:
      case Protobuf3Parser::SFIXED64:
      case Protobuf3Parser::SINT32:
      case Protobuf3Parser::SINT64:
      case Protobuf3Parser::STREAM:
      case Protobuf3Parser::STRING:
      case Protobuf3Parser::SYNTAX:
      case Protobuf3Parser::UINT32:
      case Protobuf3Parser::UINT64:
      case Protobuf3Parser::WEAK:
      case Protobuf3Parser::Ident:
      case Protobuf3Parser::DOT: {
        setState(228);
        field();
        break;
      }

      case Protobuf3Parser::SEMI: {
        setState(229);
        emptyStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(232);
    match(Protobuf3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ServiceContext ------------------------------------------------------------------

Protobuf3Parser::ServiceContext::ServiceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::ServiceNameContext* Protobuf3Parser::ServiceContext::serviceName() {
  return getRuleContext<Protobuf3Parser::ServiceNameContext>(0);
}

std::vector<Protobuf3Parser::OptionContext *> Protobuf3Parser::ServiceContext::option() {
  return getRuleContexts<Protobuf3Parser::OptionContext>();
}

Protobuf3Parser::OptionContext* Protobuf3Parser::ServiceContext::option(size_t i) {
  return getRuleContext<Protobuf3Parser::OptionContext>(i);
}

std::vector<Protobuf3Parser::RpcContext *> Protobuf3Parser::ServiceContext::rpc() {
  return getRuleContexts<Protobuf3Parser::RpcContext>();
}

Protobuf3Parser::RpcContext* Protobuf3Parser::ServiceContext::rpc(size_t i) {
  return getRuleContext<Protobuf3Parser::RpcContext>(i);
}

std::vector<Protobuf3Parser::EmptyStatementContext *> Protobuf3Parser::ServiceContext::emptyStatement() {
  return getRuleContexts<Protobuf3Parser::EmptyStatementContext>();
}

Protobuf3Parser::EmptyStatementContext* Protobuf3Parser::ServiceContext::emptyStatement(size_t i) {
  return getRuleContext<Protobuf3Parser::EmptyStatementContext>(i);
}


size_t Protobuf3Parser::ServiceContext::getRuleIndex() const {
  return Protobuf3Parser::RuleService;
}

void Protobuf3Parser::ServiceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterService(this);
}

void Protobuf3Parser::ServiceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitService(this);
}


antlrcpp::Any Protobuf3Parser::ServiceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitService(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::ServiceContext* Protobuf3Parser::service() {
  ServiceContext *_localctx = _tracker.createInstance<ServiceContext>(_ctx, getState());
  enterRule(_localctx, 32, Protobuf3Parser::RuleService);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(Protobuf3Parser::SERVICE);
    setState(235);
    serviceName();
    setState(236);
    match(Protobuf3Parser::LBRACE);
    setState(242);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Protobuf3Parser::OPTION)
      | (1ULL << Protobuf3Parser::RPC)
      | (1ULL << Protobuf3Parser::SEMI))) != 0)) {
      setState(240);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Protobuf3Parser::OPTION: {
          setState(237);
          option();
          break;
        }

        case Protobuf3Parser::RPC: {
          setState(238);
          rpc();
          break;
        }

        case Protobuf3Parser::SEMI: {
          setState(239);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(244);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(245);
    match(Protobuf3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RpcContext ------------------------------------------------------------------

Protobuf3Parser::RpcContext::RpcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::RpcNameContext* Protobuf3Parser::RpcContext::rpcName() {
  return getRuleContext<Protobuf3Parser::RpcNameContext>(0);
}

std::vector<Protobuf3Parser::MessageTypeContext *> Protobuf3Parser::RpcContext::messageType() {
  return getRuleContexts<Protobuf3Parser::MessageTypeContext>();
}

Protobuf3Parser::MessageTypeContext* Protobuf3Parser::RpcContext::messageType(size_t i) {
  return getRuleContext<Protobuf3Parser::MessageTypeContext>(i);
}

std::vector<Protobuf3Parser::OptionContext *> Protobuf3Parser::RpcContext::option() {
  return getRuleContexts<Protobuf3Parser::OptionContext>();
}

Protobuf3Parser::OptionContext* Protobuf3Parser::RpcContext::option(size_t i) {
  return getRuleContext<Protobuf3Parser::OptionContext>(i);
}

std::vector<Protobuf3Parser::EmptyStatementContext *> Protobuf3Parser::RpcContext::emptyStatement() {
  return getRuleContexts<Protobuf3Parser::EmptyStatementContext>();
}

Protobuf3Parser::EmptyStatementContext* Protobuf3Parser::RpcContext::emptyStatement(size_t i) {
  return getRuleContext<Protobuf3Parser::EmptyStatementContext>(i);
}


size_t Protobuf3Parser::RpcContext::getRuleIndex() const {
  return Protobuf3Parser::RuleRpc;
}

void Protobuf3Parser::RpcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpc(this);
}

void Protobuf3Parser::RpcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpc(this);
}


antlrcpp::Any Protobuf3Parser::RpcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitRpc(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::RpcContext* Protobuf3Parser::rpc() {
  RpcContext *_localctx = _tracker.createInstance<RpcContext>(_ctx, getState());
  enterRule(_localctx, 34, Protobuf3Parser::RuleRpc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(Protobuf3Parser::RPC);
    setState(248);
    rpcName();
    setState(249);
    match(Protobuf3Parser::LPAREN);
    setState(251);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::STREAM) {
      setState(250);
      match(Protobuf3Parser::STREAM);
    }
    setState(253);
    messageType();
    setState(254);
    match(Protobuf3Parser::RPAREN);
    setState(255);
    match(Protobuf3Parser::RETURNS);
    setState(256);
    match(Protobuf3Parser::LPAREN);
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::STREAM) {
      setState(257);
      match(Protobuf3Parser::STREAM);
    }
    setState(260);
    messageType();
    setState(261);
    match(Protobuf3Parser::RPAREN);
    setState(272);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Protobuf3Parser::LBRACE: {
        setState(262);
        match(Protobuf3Parser::LBRACE);
        setState(267);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == Protobuf3Parser::OPTION

        || _la == Protobuf3Parser::SEMI) {
          setState(265);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case Protobuf3Parser::OPTION: {
              setState(263);
              option();
              break;
            }

            case Protobuf3Parser::SEMI: {
              setState(264);
              emptyStatement();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(269);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(270);
        match(Protobuf3Parser::RBRACE);
        break;
      }

      case Protobuf3Parser::SEMI: {
        setState(271);
        match(Protobuf3Parser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservedContext ------------------------------------------------------------------

Protobuf3Parser::ReservedContext::ReservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::RangesContext* Protobuf3Parser::ReservedContext::ranges() {
  return getRuleContext<Protobuf3Parser::RangesContext>(0);
}

Protobuf3Parser::FieldNamesContext* Protobuf3Parser::ReservedContext::fieldNames() {
  return getRuleContext<Protobuf3Parser::FieldNamesContext>(0);
}


size_t Protobuf3Parser::ReservedContext::getRuleIndex() const {
  return Protobuf3Parser::RuleReserved;
}

void Protobuf3Parser::ReservedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReserved(this);
}

void Protobuf3Parser::ReservedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReserved(this);
}


antlrcpp::Any Protobuf3Parser::ReservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitReserved(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::ReservedContext* Protobuf3Parser::reserved() {
  ReservedContext *_localctx = _tracker.createInstance<ReservedContext>(_ctx, getState());
  enterRule(_localctx, 36, Protobuf3Parser::RuleReserved);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(Protobuf3Parser::RESERVED);
    setState(277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Protobuf3Parser::IntLit: {
        setState(275);
        ranges();
        break;
      }

      case Protobuf3Parser::StrLit: {
        setState(276);
        fieldNames();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(279);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangesContext ------------------------------------------------------------------

Protobuf3Parser::RangesContext::RangesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Protobuf3Parser::RangeRuleContext *> Protobuf3Parser::RangesContext::rangeRule() {
  return getRuleContexts<Protobuf3Parser::RangeRuleContext>();
}

Protobuf3Parser::RangeRuleContext* Protobuf3Parser::RangesContext::rangeRule(size_t i) {
  return getRuleContext<Protobuf3Parser::RangeRuleContext>(i);
}


size_t Protobuf3Parser::RangesContext::getRuleIndex() const {
  return Protobuf3Parser::RuleRanges;
}

void Protobuf3Parser::RangesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRanges(this);
}

void Protobuf3Parser::RangesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRanges(this);
}


antlrcpp::Any Protobuf3Parser::RangesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitRanges(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::RangesContext* Protobuf3Parser::ranges() {
  RangesContext *_localctx = _tracker.createInstance<RangesContext>(_ctx, getState());
  enterRule(_localctx, 38, Protobuf3Parser::RuleRanges);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    rangeRule();
    setState(286);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Protobuf3Parser::COMMA) {
      setState(282);
      match(Protobuf3Parser::COMMA);
      setState(283);
      rangeRule();
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeRuleContext ------------------------------------------------------------------

Protobuf3Parser::RangeRuleContext::RangeRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Protobuf3Parser::RangeRuleContext::IntLit() {
  return getTokens(Protobuf3Parser::IntLit);
}

tree::TerminalNode* Protobuf3Parser::RangeRuleContext::IntLit(size_t i) {
  return getToken(Protobuf3Parser::IntLit, i);
}


size_t Protobuf3Parser::RangeRuleContext::getRuleIndex() const {
  return Protobuf3Parser::RuleRangeRule;
}

void Protobuf3Parser::RangeRuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeRule(this);
}

void Protobuf3Parser::RangeRuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeRule(this);
}


antlrcpp::Any Protobuf3Parser::RangeRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitRangeRule(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::RangeRuleContext* Protobuf3Parser::rangeRule() {
  RangeRuleContext *_localctx = _tracker.createInstance<RangeRuleContext>(_ctx, getState());
  enterRule(_localctx, 40, Protobuf3Parser::RuleRangeRule);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(289);
      match(Protobuf3Parser::IntLit);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(290);
      match(Protobuf3Parser::IntLit);
      setState(291);
      match(Protobuf3Parser::TO);
      setState(292);
      match(Protobuf3Parser::IntLit);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldNamesContext ------------------------------------------------------------------

Protobuf3Parser::FieldNamesContext::FieldNamesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Protobuf3Parser::FieldNamesContext::StrLit() {
  return getTokens(Protobuf3Parser::StrLit);
}

tree::TerminalNode* Protobuf3Parser::FieldNamesContext::StrLit(size_t i) {
  return getToken(Protobuf3Parser::StrLit, i);
}


size_t Protobuf3Parser::FieldNamesContext::getRuleIndex() const {
  return Protobuf3Parser::RuleFieldNames;
}

void Protobuf3Parser::FieldNamesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldNames(this);
}

void Protobuf3Parser::FieldNamesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldNames(this);
}


antlrcpp::Any Protobuf3Parser::FieldNamesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitFieldNames(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::FieldNamesContext* Protobuf3Parser::fieldNames() {
  FieldNamesContext *_localctx = _tracker.createInstance<FieldNamesContext>(_ctx, getState());
  enterRule(_localctx, 42, Protobuf3Parser::RuleFieldNames);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(Protobuf3Parser::StrLit);
    setState(300);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Protobuf3Parser::COMMA) {
      setState(296);
      match(Protobuf3Parser::COMMA);
      setState(297);
      match(Protobuf3Parser::StrLit);
      setState(302);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeRuleContext ------------------------------------------------------------------

Protobuf3Parser::TypeRuleContext::TypeRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::MessageOrEnumTypeContext* Protobuf3Parser::TypeRuleContext::messageOrEnumType() {
  return getRuleContext<Protobuf3Parser::MessageOrEnumTypeContext>(0);
}


size_t Protobuf3Parser::TypeRuleContext::getRuleIndex() const {
  return Protobuf3Parser::RuleTypeRule;
}

void Protobuf3Parser::TypeRuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeRule(this);
}

void Protobuf3Parser::TypeRuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeRule(this);
}


antlrcpp::Any Protobuf3Parser::TypeRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitTypeRule(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::TypeRuleContext* Protobuf3Parser::typeRule() {
  TypeRuleContext *_localctx = _tracker.createInstance<TypeRuleContext>(_ctx, getState());
  enterRule(_localctx, 44, Protobuf3Parser::RuleTypeRule);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(303);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << Protobuf3Parser::BOOL)
        | (1ULL << Protobuf3Parser::BYTES)
        | (1ULL << Protobuf3Parser::DOUBLE)
        | (1ULL << Protobuf3Parser::FIXED32)
        | (1ULL << Protobuf3Parser::FIXED64)
        | (1ULL << Protobuf3Parser::FLOAT)
        | (1ULL << Protobuf3Parser::INT32)
        | (1ULL << Protobuf3Parser::INT64)
        | (1ULL << Protobuf3Parser::SFIXED32)
        | (1ULL << Protobuf3Parser::SFIXED64)
        | (1ULL << Protobuf3Parser::SINT32)
        | (1ULL << Protobuf3Parser::SINT64)
        | (1ULL << Protobuf3Parser::STRING)
        | (1ULL << Protobuf3Parser::UINT32)
        | (1ULL << Protobuf3Parser::UINT64))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(304);
      messageOrEnumType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldNumberContext ------------------------------------------------------------------

Protobuf3Parser::FieldNumberContext::FieldNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::FieldNumberContext::IntLit() {
  return getToken(Protobuf3Parser::IntLit, 0);
}


size_t Protobuf3Parser::FieldNumberContext::getRuleIndex() const {
  return Protobuf3Parser::RuleFieldNumber;
}

void Protobuf3Parser::FieldNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldNumber(this);
}

void Protobuf3Parser::FieldNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldNumber(this);
}


antlrcpp::Any Protobuf3Parser::FieldNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitFieldNumber(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::FieldNumberContext* Protobuf3Parser::fieldNumber() {
  FieldNumberContext *_localctx = _tracker.createInstance<FieldNumberContext>(_ctx, getState());
  enterRule(_localctx, 46, Protobuf3Parser::RuleFieldNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(Protobuf3Parser::IntLit);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

Protobuf3Parser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::TypeRuleContext* Protobuf3Parser::FieldContext::typeRule() {
  return getRuleContext<Protobuf3Parser::TypeRuleContext>(0);
}

Protobuf3Parser::FieldNameContext* Protobuf3Parser::FieldContext::fieldName() {
  return getRuleContext<Protobuf3Parser::FieldNameContext>(0);
}

Protobuf3Parser::FieldNumberContext* Protobuf3Parser::FieldContext::fieldNumber() {
  return getRuleContext<Protobuf3Parser::FieldNumberContext>(0);
}

Protobuf3Parser::FieldOptionsContext* Protobuf3Parser::FieldContext::fieldOptions() {
  return getRuleContext<Protobuf3Parser::FieldOptionsContext>(0);
}


size_t Protobuf3Parser::FieldContext::getRuleIndex() const {
  return Protobuf3Parser::RuleField;
}

void Protobuf3Parser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void Protobuf3Parser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}


antlrcpp::Any Protobuf3Parser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::FieldContext* Protobuf3Parser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 48, Protobuf3Parser::RuleField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::REPEATED) {
      setState(309);
      match(Protobuf3Parser::REPEATED);
    }
    setState(312);
    typeRule();
    setState(313);
    fieldName();
    setState(314);
    match(Protobuf3Parser::ASSIGN);
    setState(315);
    fieldNumber();
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::LBRACK) {
      setState(316);
      match(Protobuf3Parser::LBRACK);
      setState(317);
      fieldOptions();
      setState(318);
      match(Protobuf3Parser::RBRACK);
    }
    setState(322);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldOptionsContext ------------------------------------------------------------------

Protobuf3Parser::FieldOptionsContext::FieldOptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Protobuf3Parser::FieldOptionContext *> Protobuf3Parser::FieldOptionsContext::fieldOption() {
  return getRuleContexts<Protobuf3Parser::FieldOptionContext>();
}

Protobuf3Parser::FieldOptionContext* Protobuf3Parser::FieldOptionsContext::fieldOption(size_t i) {
  return getRuleContext<Protobuf3Parser::FieldOptionContext>(i);
}


size_t Protobuf3Parser::FieldOptionsContext::getRuleIndex() const {
  return Protobuf3Parser::RuleFieldOptions;
}

void Protobuf3Parser::FieldOptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldOptions(this);
}

void Protobuf3Parser::FieldOptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldOptions(this);
}


antlrcpp::Any Protobuf3Parser::FieldOptionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitFieldOptions(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::FieldOptionsContext* Protobuf3Parser::fieldOptions() {
  FieldOptionsContext *_localctx = _tracker.createInstance<FieldOptionsContext>(_ctx, getState());
  enterRule(_localctx, 50, Protobuf3Parser::RuleFieldOptions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    fieldOption();
    setState(329);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Protobuf3Parser::COMMA) {
      setState(325);
      match(Protobuf3Parser::COMMA);
      setState(326);
      fieldOption();
      setState(331);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldOptionContext ------------------------------------------------------------------

Protobuf3Parser::FieldOptionContext::FieldOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::OptionNameContext* Protobuf3Parser::FieldOptionContext::optionName() {
  return getRuleContext<Protobuf3Parser::OptionNameContext>(0);
}

Protobuf3Parser::ConstantContext* Protobuf3Parser::FieldOptionContext::constant() {
  return getRuleContext<Protobuf3Parser::ConstantContext>(0);
}


size_t Protobuf3Parser::FieldOptionContext::getRuleIndex() const {
  return Protobuf3Parser::RuleFieldOption;
}

void Protobuf3Parser::FieldOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldOption(this);
}

void Protobuf3Parser::FieldOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldOption(this);
}


antlrcpp::Any Protobuf3Parser::FieldOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitFieldOption(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::FieldOptionContext* Protobuf3Parser::fieldOption() {
  FieldOptionContext *_localctx = _tracker.createInstance<FieldOptionContext>(_ctx, getState());
  enterRule(_localctx, 52, Protobuf3Parser::RuleFieldOption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    optionName();
    setState(333);
    match(Protobuf3Parser::ASSIGN);
    setState(334);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OneofContext ------------------------------------------------------------------

Protobuf3Parser::OneofContext::OneofContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::OneofNameContext* Protobuf3Parser::OneofContext::oneofName() {
  return getRuleContext<Protobuf3Parser::OneofNameContext>(0);
}

std::vector<Protobuf3Parser::OneofFieldContext *> Protobuf3Parser::OneofContext::oneofField() {
  return getRuleContexts<Protobuf3Parser::OneofFieldContext>();
}

Protobuf3Parser::OneofFieldContext* Protobuf3Parser::OneofContext::oneofField(size_t i) {
  return getRuleContext<Protobuf3Parser::OneofFieldContext>(i);
}

std::vector<Protobuf3Parser::EmptyStatementContext *> Protobuf3Parser::OneofContext::emptyStatement() {
  return getRuleContexts<Protobuf3Parser::EmptyStatementContext>();
}

Protobuf3Parser::EmptyStatementContext* Protobuf3Parser::OneofContext::emptyStatement(size_t i) {
  return getRuleContext<Protobuf3Parser::EmptyStatementContext>(i);
}


size_t Protobuf3Parser::OneofContext::getRuleIndex() const {
  return Protobuf3Parser::RuleOneof;
}

void Protobuf3Parser::OneofContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneof(this);
}

void Protobuf3Parser::OneofContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneof(this);
}


antlrcpp::Any Protobuf3Parser::OneofContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitOneof(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::OneofContext* Protobuf3Parser::oneof() {
  OneofContext *_localctx = _tracker.createInstance<OneofContext>(_ctx, getState());
  enterRule(_localctx, 54, Protobuf3Parser::RuleOneof);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(Protobuf3Parser::ONEOF);
    setState(337);
    oneofName();
    setState(338);
    match(Protobuf3Parser::LBRACE);
    setState(343);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Protobuf3Parser::BOOL)
      | (1ULL << Protobuf3Parser::BYTES)
      | (1ULL << Protobuf3Parser::DOUBLE)
      | (1ULL << Protobuf3Parser::EXTEND)
      | (1ULL << Protobuf3Parser::FIXED32)
      | (1ULL << Protobuf3Parser::FIXED64)
      | (1ULL << Protobuf3Parser::FLOAT)
      | (1ULL << Protobuf3Parser::INT32)
      | (1ULL << Protobuf3Parser::INT64)
      | (1ULL << Protobuf3Parser::MESSAGE)
      | (1ULL << Protobuf3Parser::OPTION)
      | (1ULL << Protobuf3Parser::PACKAGE)
      | (1ULL << Protobuf3Parser::RPC)
      | (1ULL << Protobuf3Parser::SERVICE)
      | (1ULL << Protobuf3Parser::SFIXED32)
      | (1ULL << Protobuf3Parser::SFIXED64)
      | (1ULL << Protobuf3Parser::SINT32)
      | (1ULL << Protobuf3Parser::SINT64)
      | (1ULL << Protobuf3Parser::STREAM)
      | (1ULL << Protobuf3Parser::STRING)
      | (1ULL << Protobuf3Parser::SYNTAX)
      | (1ULL << Protobuf3Parser::UINT32)
      | (1ULL << Protobuf3Parser::UINT64)
      | (1ULL << Protobuf3Parser::WEAK)
      | (1ULL << Protobuf3Parser::Ident)
      | (1ULL << Protobuf3Parser::SEMI)
      | (1ULL << Protobuf3Parser::DOT))) != 0)) {
      setState(341);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case Protobuf3Parser::BOOL:
        case Protobuf3Parser::BYTES:
        case Protobuf3Parser::DOUBLE:
        case Protobuf3Parser::EXTEND:
        case Protobuf3Parser::FIXED32:
        case Protobuf3Parser::FIXED64:
        case Protobuf3Parser::FLOAT:
        case Protobuf3Parser::INT32:
        case Protobuf3Parser::INT64:
        case Protobuf3Parser::MESSAGE:
        case Protobuf3Parser::OPTION:
        case Protobuf3Parser::PACKAGE:
        case Protobuf3Parser::RPC:
        case Protobuf3Parser::SERVICE:
        case Protobuf3Parser::SFIXED32:
        case Protobuf3Parser::SFIXED64:
        case Protobuf3Parser::SINT32:
        case Protobuf3Parser::SINT64:
        case Protobuf3Parser::STREAM:
        case Protobuf3Parser::STRING:
        case Protobuf3Parser::SYNTAX:
        case Protobuf3Parser::UINT32:
        case Protobuf3Parser::UINT64:
        case Protobuf3Parser::WEAK:
        case Protobuf3Parser::Ident:
        case Protobuf3Parser::DOT: {
          setState(339);
          oneofField();
          break;
        }

        case Protobuf3Parser::SEMI: {
          setState(340);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(345);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(346);
    match(Protobuf3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OneofFieldContext ------------------------------------------------------------------

Protobuf3Parser::OneofFieldContext::OneofFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::TypeRuleContext* Protobuf3Parser::OneofFieldContext::typeRule() {
  return getRuleContext<Protobuf3Parser::TypeRuleContext>(0);
}

Protobuf3Parser::FieldNameContext* Protobuf3Parser::OneofFieldContext::fieldName() {
  return getRuleContext<Protobuf3Parser::FieldNameContext>(0);
}

Protobuf3Parser::FieldNumberContext* Protobuf3Parser::OneofFieldContext::fieldNumber() {
  return getRuleContext<Protobuf3Parser::FieldNumberContext>(0);
}

Protobuf3Parser::FieldOptionsContext* Protobuf3Parser::OneofFieldContext::fieldOptions() {
  return getRuleContext<Protobuf3Parser::FieldOptionsContext>(0);
}


size_t Protobuf3Parser::OneofFieldContext::getRuleIndex() const {
  return Protobuf3Parser::RuleOneofField;
}

void Protobuf3Parser::OneofFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneofField(this);
}

void Protobuf3Parser::OneofFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneofField(this);
}


antlrcpp::Any Protobuf3Parser::OneofFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitOneofField(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::OneofFieldContext* Protobuf3Parser::oneofField() {
  OneofFieldContext *_localctx = _tracker.createInstance<OneofFieldContext>(_ctx, getState());
  enterRule(_localctx, 56, Protobuf3Parser::RuleOneofField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    typeRule();
    setState(349);
    fieldName();
    setState(350);
    match(Protobuf3Parser::ASSIGN);
    setState(351);
    fieldNumber();
    setState(356);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::LBRACK) {
      setState(352);
      match(Protobuf3Parser::LBRACK);
      setState(353);
      fieldOptions();
      setState(354);
      match(Protobuf3Parser::RBRACK);
    }
    setState(358);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapFieldContext ------------------------------------------------------------------

Protobuf3Parser::MapFieldContext::MapFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::KeyTypeContext* Protobuf3Parser::MapFieldContext::keyType() {
  return getRuleContext<Protobuf3Parser::KeyTypeContext>(0);
}

Protobuf3Parser::TypeRuleContext* Protobuf3Parser::MapFieldContext::typeRule() {
  return getRuleContext<Protobuf3Parser::TypeRuleContext>(0);
}

Protobuf3Parser::MapNameContext* Protobuf3Parser::MapFieldContext::mapName() {
  return getRuleContext<Protobuf3Parser::MapNameContext>(0);
}

Protobuf3Parser::FieldNumberContext* Protobuf3Parser::MapFieldContext::fieldNumber() {
  return getRuleContext<Protobuf3Parser::FieldNumberContext>(0);
}

Protobuf3Parser::FieldOptionsContext* Protobuf3Parser::MapFieldContext::fieldOptions() {
  return getRuleContext<Protobuf3Parser::FieldOptionsContext>(0);
}


size_t Protobuf3Parser::MapFieldContext::getRuleIndex() const {
  return Protobuf3Parser::RuleMapField;
}

void Protobuf3Parser::MapFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapField(this);
}

void Protobuf3Parser::MapFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapField(this);
}


antlrcpp::Any Protobuf3Parser::MapFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitMapField(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::MapFieldContext* Protobuf3Parser::mapField() {
  MapFieldContext *_localctx = _tracker.createInstance<MapFieldContext>(_ctx, getState());
  enterRule(_localctx, 58, Protobuf3Parser::RuleMapField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    match(Protobuf3Parser::MAP);
    setState(361);
    match(Protobuf3Parser::LCHEVR);
    setState(362);
    keyType();
    setState(363);
    match(Protobuf3Parser::COMMA);
    setState(364);
    typeRule();
    setState(365);
    match(Protobuf3Parser::RCHEVR);
    setState(366);
    mapName();
    setState(367);
    match(Protobuf3Parser::ASSIGN);
    setState(368);
    fieldNumber();
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::LBRACK) {
      setState(369);
      match(Protobuf3Parser::LBRACK);
      setState(370);
      fieldOptions();
      setState(371);
      match(Protobuf3Parser::RBRACK);
    }
    setState(375);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyTypeContext ------------------------------------------------------------------

Protobuf3Parser::KeyTypeContext::KeyTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Protobuf3Parser::KeyTypeContext::getRuleIndex() const {
  return Protobuf3Parser::RuleKeyType;
}

void Protobuf3Parser::KeyTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyType(this);
}

void Protobuf3Parser::KeyTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyType(this);
}


antlrcpp::Any Protobuf3Parser::KeyTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitKeyType(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::KeyTypeContext* Protobuf3Parser::keyType() {
  KeyTypeContext *_localctx = _tracker.createInstance<KeyTypeContext>(_ctx, getState());
  enterRule(_localctx, 60, Protobuf3Parser::RuleKeyType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Protobuf3Parser::BOOL)
      | (1ULL << Protobuf3Parser::FIXED32)
      | (1ULL << Protobuf3Parser::FIXED64)
      | (1ULL << Protobuf3Parser::INT32)
      | (1ULL << Protobuf3Parser::INT64)
      | (1ULL << Protobuf3Parser::SFIXED32)
      | (1ULL << Protobuf3Parser::SFIXED64)
      | (1ULL << Protobuf3Parser::SINT32)
      | (1ULL << Protobuf3Parser::SINT64)
      | (1ULL << Protobuf3Parser::STRING)
      | (1ULL << Protobuf3Parser::UINT32)
      | (1ULL << Protobuf3Parser::UINT64))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservedWordContext ------------------------------------------------------------------

Protobuf3Parser::ReservedWordContext::ReservedWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::EXTEND() {
  return getToken(Protobuf3Parser::EXTEND, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::MESSAGE() {
  return getToken(Protobuf3Parser::MESSAGE, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::OPTION() {
  return getToken(Protobuf3Parser::OPTION, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::PACKAGE() {
  return getToken(Protobuf3Parser::PACKAGE, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::RPC() {
  return getToken(Protobuf3Parser::RPC, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::SERVICE() {
  return getToken(Protobuf3Parser::SERVICE, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::STREAM() {
  return getToken(Protobuf3Parser::STREAM, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::STRING() {
  return getToken(Protobuf3Parser::STRING, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::SYNTAX() {
  return getToken(Protobuf3Parser::SYNTAX, 0);
}

tree::TerminalNode* Protobuf3Parser::ReservedWordContext::WEAK() {
  return getToken(Protobuf3Parser::WEAK, 0);
}


size_t Protobuf3Parser::ReservedWordContext::getRuleIndex() const {
  return Protobuf3Parser::RuleReservedWord;
}

void Protobuf3Parser::ReservedWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservedWord(this);
}

void Protobuf3Parser::ReservedWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservedWord(this);
}


antlrcpp::Any Protobuf3Parser::ReservedWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitReservedWord(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::ReservedWordContext* Protobuf3Parser::reservedWord() {
  ReservedWordContext *_localctx = _tracker.createInstance<ReservedWordContext>(_ctx, getState());
  enterRule(_localctx, 62, Protobuf3Parser::RuleReservedWord);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Protobuf3Parser::EXTEND)
      | (1ULL << Protobuf3Parser::MESSAGE)
      | (1ULL << Protobuf3Parser::OPTION)
      | (1ULL << Protobuf3Parser::PACKAGE)
      | (1ULL << Protobuf3Parser::RPC)
      | (1ULL << Protobuf3Parser::SERVICE)
      | (1ULL << Protobuf3Parser::STREAM)
      | (1ULL << Protobuf3Parser::STRING)
      | (1ULL << Protobuf3Parser::SYNTAX)
      | (1ULL << Protobuf3Parser::WEAK))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FullIdentContext ------------------------------------------------------------------

Protobuf3Parser::FullIdentContext::FullIdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Protobuf3Parser::FullIdentContext::Ident() {
  return getTokens(Protobuf3Parser::Ident);
}

tree::TerminalNode* Protobuf3Parser::FullIdentContext::Ident(size_t i) {
  return getToken(Protobuf3Parser::Ident, i);
}


size_t Protobuf3Parser::FullIdentContext::getRuleIndex() const {
  return Protobuf3Parser::RuleFullIdent;
}

void Protobuf3Parser::FullIdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullIdent(this);
}

void Protobuf3Parser::FullIdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullIdent(this);
}


antlrcpp::Any Protobuf3Parser::FullIdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitFullIdent(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::FullIdentContext* Protobuf3Parser::fullIdent() {
  FullIdentContext *_localctx = _tracker.createInstance<FullIdentContext>(_ctx, getState());
  enterRule(_localctx, 64, Protobuf3Parser::RuleFullIdent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    match(Protobuf3Parser::Ident);
    setState(386);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Protobuf3Parser::DOT) {
      setState(382);
      match(Protobuf3Parser::DOT);
      setState(383);
      match(Protobuf3Parser::Ident);
      setState(388);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageNameContext ------------------------------------------------------------------

Protobuf3Parser::MessageNameContext::MessageNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::MessageNameContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}


size_t Protobuf3Parser::MessageNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleMessageName;
}

void Protobuf3Parser::MessageNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageName(this);
}

void Protobuf3Parser::MessageNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageName(this);
}


antlrcpp::Any Protobuf3Parser::MessageNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitMessageName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::MessageNameContext* Protobuf3Parser::messageName() {
  MessageNameContext *_localctx = _tracker.createInstance<MessageNameContext>(_ctx, getState());
  enterRule(_localctx, 66, Protobuf3Parser::RuleMessageName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(Protobuf3Parser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumNameContext ------------------------------------------------------------------

Protobuf3Parser::EnumNameContext::EnumNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::EnumNameContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}


size_t Protobuf3Parser::EnumNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleEnumName;
}

void Protobuf3Parser::EnumNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumName(this);
}

void Protobuf3Parser::EnumNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumName(this);
}


antlrcpp::Any Protobuf3Parser::EnumNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitEnumName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::EnumNameContext* Protobuf3Parser::enumName() {
  EnumNameContext *_localctx = _tracker.createInstance<EnumNameContext>(_ctx, getState());
  enterRule(_localctx, 68, Protobuf3Parser::RuleEnumName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(Protobuf3Parser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageOrEnumNameContext ------------------------------------------------------------------

Protobuf3Parser::MessageOrEnumNameContext::MessageOrEnumNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::MessageOrEnumNameContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}


size_t Protobuf3Parser::MessageOrEnumNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleMessageOrEnumName;
}

void Protobuf3Parser::MessageOrEnumNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageOrEnumName(this);
}

void Protobuf3Parser::MessageOrEnumNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageOrEnumName(this);
}


antlrcpp::Any Protobuf3Parser::MessageOrEnumNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitMessageOrEnumName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::MessageOrEnumNameContext* Protobuf3Parser::messageOrEnumName() {
  MessageOrEnumNameContext *_localctx = _tracker.createInstance<MessageOrEnumNameContext>(_ctx, getState());
  enterRule(_localctx, 70, Protobuf3Parser::RuleMessageOrEnumName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    match(Protobuf3Parser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldNameContext ------------------------------------------------------------------

Protobuf3Parser::FieldNameContext::FieldNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::FieldNameContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}

Protobuf3Parser::ReservedWordContext* Protobuf3Parser::FieldNameContext::reservedWord() {
  return getRuleContext<Protobuf3Parser::ReservedWordContext>(0);
}


size_t Protobuf3Parser::FieldNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleFieldName;
}

void Protobuf3Parser::FieldNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldName(this);
}

void Protobuf3Parser::FieldNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldName(this);
}


antlrcpp::Any Protobuf3Parser::FieldNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitFieldName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::FieldNameContext* Protobuf3Parser::fieldName() {
  FieldNameContext *_localctx = _tracker.createInstance<FieldNameContext>(_ctx, getState());
  enterRule(_localctx, 72, Protobuf3Parser::RuleFieldName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(397);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Protobuf3Parser::Ident: {
        enterOuterAlt(_localctx, 1);
        setState(395);
        match(Protobuf3Parser::Ident);
        break;
      }

      case Protobuf3Parser::EXTEND:
      case Protobuf3Parser::MESSAGE:
      case Protobuf3Parser::OPTION:
      case Protobuf3Parser::PACKAGE:
      case Protobuf3Parser::RPC:
      case Protobuf3Parser::SERVICE:
      case Protobuf3Parser::STREAM:
      case Protobuf3Parser::STRING:
      case Protobuf3Parser::SYNTAX:
      case Protobuf3Parser::WEAK: {
        enterOuterAlt(_localctx, 2);
        setState(396);
        reservedWord();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OneofNameContext ------------------------------------------------------------------

Protobuf3Parser::OneofNameContext::OneofNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::OneofNameContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}


size_t Protobuf3Parser::OneofNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleOneofName;
}

void Protobuf3Parser::OneofNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneofName(this);
}

void Protobuf3Parser::OneofNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneofName(this);
}


antlrcpp::Any Protobuf3Parser::OneofNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitOneofName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::OneofNameContext* Protobuf3Parser::oneofName() {
  OneofNameContext *_localctx = _tracker.createInstance<OneofNameContext>(_ctx, getState());
  enterRule(_localctx, 74, Protobuf3Parser::RuleOneofName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(Protobuf3Parser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapNameContext ------------------------------------------------------------------

Protobuf3Parser::MapNameContext::MapNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::MapNameContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}


size_t Protobuf3Parser::MapNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleMapName;
}

void Protobuf3Parser::MapNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapName(this);
}

void Protobuf3Parser::MapNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapName(this);
}


antlrcpp::Any Protobuf3Parser::MapNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitMapName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::MapNameContext* Protobuf3Parser::mapName() {
  MapNameContext *_localctx = _tracker.createInstance<MapNameContext>(_ctx, getState());
  enterRule(_localctx, 76, Protobuf3Parser::RuleMapName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    match(Protobuf3Parser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ServiceNameContext ------------------------------------------------------------------

Protobuf3Parser::ServiceNameContext::ServiceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::ServiceNameContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}


size_t Protobuf3Parser::ServiceNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleServiceName;
}

void Protobuf3Parser::ServiceNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterServiceName(this);
}

void Protobuf3Parser::ServiceNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitServiceName(this);
}


antlrcpp::Any Protobuf3Parser::ServiceNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitServiceName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::ServiceNameContext* Protobuf3Parser::serviceName() {
  ServiceNameContext *_localctx = _tracker.createInstance<ServiceNameContext>(_ctx, getState());
  enterRule(_localctx, 78, Protobuf3Parser::RuleServiceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(Protobuf3Parser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RpcNameContext ------------------------------------------------------------------

Protobuf3Parser::RpcNameContext::RpcNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Protobuf3Parser::RpcNameContext::Ident() {
  return getToken(Protobuf3Parser::Ident, 0);
}


size_t Protobuf3Parser::RpcNameContext::getRuleIndex() const {
  return Protobuf3Parser::RuleRpcName;
}

void Protobuf3Parser::RpcNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpcName(this);
}

void Protobuf3Parser::RpcNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpcName(this);
}


antlrcpp::Any Protobuf3Parser::RpcNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitRpcName(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::RpcNameContext* Protobuf3Parser::rpcName() {
  RpcNameContext *_localctx = _tracker.createInstance<RpcNameContext>(_ctx, getState());
  enterRule(_localctx, 80, Protobuf3Parser::RuleRpcName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    match(Protobuf3Parser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageTypeContext ------------------------------------------------------------------

Protobuf3Parser::MessageTypeContext::MessageTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::MessageNameContext* Protobuf3Parser::MessageTypeContext::messageName() {
  return getRuleContext<Protobuf3Parser::MessageNameContext>(0);
}

std::vector<tree::TerminalNode *> Protobuf3Parser::MessageTypeContext::Ident() {
  return getTokens(Protobuf3Parser::Ident);
}

tree::TerminalNode* Protobuf3Parser::MessageTypeContext::Ident(size_t i) {
  return getToken(Protobuf3Parser::Ident, i);
}


size_t Protobuf3Parser::MessageTypeContext::getRuleIndex() const {
  return Protobuf3Parser::RuleMessageType;
}

void Protobuf3Parser::MessageTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageType(this);
}

void Protobuf3Parser::MessageTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageType(this);
}


antlrcpp::Any Protobuf3Parser::MessageTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitMessageType(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::MessageTypeContext* Protobuf3Parser::messageType() {
  MessageTypeContext *_localctx = _tracker.createInstance<MessageTypeContext>(_ctx, getState());
  enterRule(_localctx, 82, Protobuf3Parser::RuleMessageType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(408);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::DOT) {
      setState(407);
      match(Protobuf3Parser::DOT);
    }
    setState(414);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(410);
        match(Protobuf3Parser::Ident);
        setState(411);
        match(Protobuf3Parser::DOT); 
      }
      setState(416);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
    setState(417);
    messageName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageOrEnumTypeContext ------------------------------------------------------------------

Protobuf3Parser::MessageOrEnumTypeContext::MessageOrEnumTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::MessageOrEnumNameContext* Protobuf3Parser::MessageOrEnumTypeContext::messageOrEnumName() {
  return getRuleContext<Protobuf3Parser::MessageOrEnumNameContext>(0);
}

std::vector<tree::TerminalNode *> Protobuf3Parser::MessageOrEnumTypeContext::Ident() {
  return getTokens(Protobuf3Parser::Ident);
}

tree::TerminalNode* Protobuf3Parser::MessageOrEnumTypeContext::Ident(size_t i) {
  return getToken(Protobuf3Parser::Ident, i);
}

std::vector<Protobuf3Parser::ReservedWordContext *> Protobuf3Parser::MessageOrEnumTypeContext::reservedWord() {
  return getRuleContexts<Protobuf3Parser::ReservedWordContext>();
}

Protobuf3Parser::ReservedWordContext* Protobuf3Parser::MessageOrEnumTypeContext::reservedWord(size_t i) {
  return getRuleContext<Protobuf3Parser::ReservedWordContext>(i);
}


size_t Protobuf3Parser::MessageOrEnumTypeContext::getRuleIndex() const {
  return Protobuf3Parser::RuleMessageOrEnumType;
}

void Protobuf3Parser::MessageOrEnumTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageOrEnumType(this);
}

void Protobuf3Parser::MessageOrEnumTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageOrEnumType(this);
}


antlrcpp::Any Protobuf3Parser::MessageOrEnumTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitMessageOrEnumType(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::MessageOrEnumTypeContext* Protobuf3Parser::messageOrEnumType() {
  MessageOrEnumTypeContext *_localctx = _tracker.createInstance<MessageOrEnumTypeContext>(_ctx, getState());
  enterRule(_localctx, 84, Protobuf3Parser::RuleMessageOrEnumType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(420);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Protobuf3Parser::DOT) {
      setState(419);
      match(Protobuf3Parser::DOT);
    }
    setState(429);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(424);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case Protobuf3Parser::Ident: {
            setState(422);
            match(Protobuf3Parser::Ident);
            break;
          }

          case Protobuf3Parser::EXTEND:
          case Protobuf3Parser::MESSAGE:
          case Protobuf3Parser::OPTION:
          case Protobuf3Parser::PACKAGE:
          case Protobuf3Parser::RPC:
          case Protobuf3Parser::SERVICE:
          case Protobuf3Parser::STREAM:
          case Protobuf3Parser::STRING:
          case Protobuf3Parser::SYNTAX:
          case Protobuf3Parser::WEAK: {
            setState(423);
            reservedWord();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(426);
        match(Protobuf3Parser::DOT); 
      }
      setState(431);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
    setState(432);
    messageOrEnumName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

Protobuf3Parser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Protobuf3Parser::EmptyStatementContext::getRuleIndex() const {
  return Protobuf3Parser::RuleEmptyStatement;
}

void Protobuf3Parser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void Protobuf3Parser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


antlrcpp::Any Protobuf3Parser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::EmptyStatementContext* Protobuf3Parser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 86, Protobuf3Parser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(Protobuf3Parser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

Protobuf3Parser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Protobuf3Parser::FullIdentContext* Protobuf3Parser::ConstantContext::fullIdent() {
  return getRuleContext<Protobuf3Parser::FullIdentContext>(0);
}

tree::TerminalNode* Protobuf3Parser::ConstantContext::IntLit() {
  return getToken(Protobuf3Parser::IntLit, 0);
}

tree::TerminalNode* Protobuf3Parser::ConstantContext::FloatLit() {
  return getToken(Protobuf3Parser::FloatLit, 0);
}

tree::TerminalNode* Protobuf3Parser::ConstantContext::StrLit() {
  return getToken(Protobuf3Parser::StrLit, 0);
}

tree::TerminalNode* Protobuf3Parser::ConstantContext::BoolLit() {
  return getToken(Protobuf3Parser::BoolLit, 0);
}


size_t Protobuf3Parser::ConstantContext::getRuleIndex() const {
  return Protobuf3Parser::RuleConstant;
}

void Protobuf3Parser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void Protobuf3Parser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Protobuf3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any Protobuf3Parser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Protobuf3Visitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

Protobuf3Parser::ConstantContext* Protobuf3Parser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 88, Protobuf3Parser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(446);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(436);
      fullIdent();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(438);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Protobuf3Parser::MINUS

      || _la == Protobuf3Parser::PLUS) {
        setState(437);
        _la = _input->LA(1);
        if (!(_la == Protobuf3Parser::MINUS

        || _la == Protobuf3Parser::PLUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(440);
      match(Protobuf3Parser::IntLit);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(442);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Protobuf3Parser::MINUS

      || _la == Protobuf3Parser::PLUS) {
        setState(441);
        _la = _input->LA(1);
        if (!(_la == Protobuf3Parser::MINUS

        || _la == Protobuf3Parser::PLUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(444);
      match(Protobuf3Parser::FloatLit);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(445);
      _la = _input->LA(1);
      if (!(_la == Protobuf3Parser::BoolLit

      || _la == Protobuf3Parser::StrLit)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> Protobuf3Parser::_decisionToDFA;
atn::PredictionContextCache Protobuf3Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Protobuf3Parser::_atn;
std::vector<uint16_t> Protobuf3Parser::_serializedATN;

std::vector<std::string> Protobuf3Parser::_ruleNames = {
  "proto", "syntax", "importStatement", "packageStatement", "option", "optionName", 
  "optionBody", "optionBodyVariable", "topLevelDef", "message", "messageBody", 
  "enumDefinition", "enumBody", "enumField", "enumValueOption", "extend", 
  "service", "rpc", "reserved", "ranges", "rangeRule", "fieldNames", "typeRule", 
  "fieldNumber", "field", "fieldOptions", "fieldOption", "oneof", "oneofField", 
  "mapField", "keyType", "reservedWord", "fullIdent", "messageName", "enumName", 
  "messageOrEnumName", "fieldName", "oneofName", "mapName", "serviceName", 
  "rpcName", "messageType", "messageOrEnumType", "emptyStatement", "constant"
};

std::vector<std::string> Protobuf3Parser::_literalNames = {
  "", "':'", "'bool'", "'bytes'", "'double'", "'enum'", "'extend'", "'fixed32'", 
  "'fixed64'", "'float'", "'import'", "'int32'", "'int64'", "'map'", "'message'", 
  "'oneof'", "'option'", "'package'", "'\"proto3\"'", "''proto3''", "'public'", 
  "'repeated'", "'reserved'", "'returns'", "'rpc'", "'service'", "'sfixed32'", 
  "'sfixed64'", "'sint32'", "'sint64'", "'stream'", "'string'", "'syntax'", 
  "'to'", "'uint32'", "'uint64'", "'weak'", "", "", "", "", "", "", "'('", 
  "')'", "'{'", "'}'", "'['", "']'", "'<'", "'>'", "';'", "','", "'.'", 
  "'-'", "'+'", "'='"
};

std::vector<std::string> Protobuf3Parser::_symbolicNames = {
  "", "", "BOOL", "BYTES", "DOUBLE", "ENUM", "EXTEND", "FIXED32", "FIXED64", 
  "FLOAT", "IMPORT", "INT32", "INT64", "MAP", "MESSAGE", "ONEOF", "OPTION", 
  "PACKAGE", "PROTO3_DOUBLE", "PROTO3_SINGLE", "PUBLIC", "REPEATED", "RESERVED", 
  "RETURNS", "RPC", "SERVICE", "SFIXED32", "SFIXED64", "SINT32", "SINT64", 
  "STREAM", "STRING", "SYNTAX", "TO", "UINT32", "UINT64", "WEAK", "Ident", 
  "IntLit", "FloatLit", "BoolLit", "StrLit", "Quote", "LPAREN", "RPAREN", 
  "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LCHEVR", "RCHEVR", "SEMI", "COMMA", 
  "DOT", "MINUS", "PLUS", "ASSIGN", "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary Protobuf3Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Protobuf3Parser::_tokenNames;

Protobuf3Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3d, 0x1c3, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x63, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x66, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
    0x71, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x7f, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x88, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x8d, 0xa, 0x7, 0x7, 0x7, 0x8f, 0xa, 0x7, 0xc, 0x7, 0xe, 
    0x7, 0x92, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x96, 0xa, 0x8, 0xc, 
    0x8, 0xe, 0x8, 0x99, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0xa5, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0xb5, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xb8, 0xb, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xc4, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0xc7, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0xce, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x7, 0xf, 0xd5, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xd8, 0xb, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xdc, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xe9, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 
    0x12, 0xf3, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xf6, 0xb, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xfe, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 
    0x13, 0x105, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0x10c, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x10f, 
    0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x113, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x118, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x11f, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x122, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x128, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 
    0x12d, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x130, 0xb, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0x134, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x5, 0x1a, 0x139, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x143, 0xa, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x14a, 
    0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x14d, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x7, 0x1d, 0x158, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x15b, 0xb, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x167, 0xa, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x178, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x7, 0x22, 0x183, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x186, 0xb, 
    0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x190, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2b, 0x5, 0x2b, 0x19b, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 
    0x19f, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x1a2, 0xb, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2c, 0x5, 0x2c, 0x1a7, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x5, 0x2c, 0x1ab, 0xa, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x1ae, 0xa, 0x2c, 
    0xc, 0x2c, 0xe, 0x2c, 0x1b1, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x1b9, 0xa, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x5, 0x2e, 0x1bd, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 
    0x1c1, 0xa, 0x2e, 0x3, 0x2e, 0x2, 0x2, 0x2f, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
    0x54, 0x56, 0x58, 0x5a, 0x2, 0x9, 0x3, 0x2, 0x14, 0x15, 0x4, 0x2, 0x16, 
    0x16, 0x26, 0x26, 0x8, 0x2, 0x4, 0x6, 0x9, 0xb, 0xd, 0xe, 0x1c, 0x1f, 
    0x21, 0x21, 0x24, 0x25, 0x8, 0x2, 0x4, 0x4, 0x9, 0xa, 0xd, 0xe, 0x1c, 
    0x1f, 0x21, 0x21, 0x24, 0x25, 0x8, 0x2, 0x8, 0x8, 0x10, 0x10, 0x12, 
    0x13, 0x1a, 0x1b, 0x20, 0x22, 0x26, 0x26, 0x3, 0x2, 0x38, 0x39, 0x3, 
    0x2, 0x2a, 0x2b, 0x2, 0x1d3, 0x2, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x79, 0x3, 0x2, 0x2, 0x2, 0xc, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x93, 0x3, 0x2, 0x2, 0x2, 0x10, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0x14, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x16, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xbf, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xca, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x22, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x26, 0x114, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x127, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x129, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x133, 0x3, 0x2, 0x2, 0x2, 0x30, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x138, 0x3, 0x2, 0x2, 0x2, 0x34, 0x146, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x38, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x16a, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x40, 0x17d, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x44, 0x187, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x189, 0x3, 0x2, 0x2, 0x2, 0x48, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x18f, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x191, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x193, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x195, 0x3, 0x2, 0x2, 0x2, 0x52, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1a6, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1c0, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x64, 0x5, 0x4, 0x3, 0x2, 0x5d, 0x63, 0x5, 0x6, 0x4, 0x2, 0x5e, 
    0x63, 0x5, 0x8, 0x5, 0x2, 0x5f, 0x63, 0x5, 0xa, 0x6, 0x2, 0x60, 0x63, 
    0x5, 0x12, 0xa, 0x2, 0x61, 0x63, 0x5, 0x58, 0x2d, 0x2, 0x62, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x2, 0x2, 0x3, 0x68, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x22, 0x2, 0x2, 0x6a, 0x6b, 0x7, 
    0x3a, 0x2, 0x2, 0x6b, 0x6c, 0x9, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x35, 
    0x2, 0x2, 0x6d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 0x7, 0xc, 0x2, 
    0x2, 0x6f, 0x71, 0x9, 0x3, 0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x73, 0x7, 0x2b, 0x2, 0x2, 0x73, 0x74, 0x7, 0x35, 0x2, 0x2, 0x74, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x13, 0x2, 0x2, 0x76, 0x77, 0x5, 
    0x42, 0x22, 0x2, 0x77, 0x78, 0x7, 0x35, 0x2, 0x2, 0x78, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x7a, 0x7, 0x12, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0xc, 0x7, 
    0x2, 0x7b, 0x7e, 0x7, 0x3a, 0x2, 0x2, 0x7c, 0x7f, 0x5, 0x5a, 0x2e, 0x2, 
    0x7d, 0x7f, 0x5, 0xe, 0x8, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 
    0x7, 0x35, 0x2, 0x2, 0x81, 0xb, 0x3, 0x2, 0x2, 0x2, 0x82, 0x88, 0x7, 
    0x27, 0x2, 0x2, 0x83, 0x84, 0x7, 0x2d, 0x2, 0x2, 0x84, 0x85, 0x5, 0x42, 
    0x22, 0x2, 0x85, 0x86, 0x7, 0x2e, 0x2, 0x2, 0x86, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x82, 0x3, 0x2, 0x2, 0x2, 0x87, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x90, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x7, 0x37, 0x2, 0x2, 0x8a, 
    0x8d, 0x7, 0x27, 0x2, 0x2, 0x8b, 0x8d, 0x5, 0x40, 0x21, 0x2, 0x8c, 0x8a, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0xd, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x97, 0x7, 0x2f, 0x2, 0x2, 0x94, 0x96, 0x5, 0x10, 0x9, 0x2, 0x95, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x30, 
    0x2, 0x2, 0x9b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0xc, 0x7, 
    0x2, 0x9d, 0x9e, 0x7, 0x3, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x5a, 0x2e, 0x2, 
    0x9f, 0x11, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa5, 0x5, 0x14, 0xb, 0x2, 0xa1, 
    0xa5, 0x5, 0x18, 0xd, 0x2, 0xa2, 0xa5, 0x5, 0x20, 0x11, 0x2, 0xa3, 0xa5, 
    0x5, 0x22, 0x12, 0x2, 0xa4, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x10, 0x2, 
    0x2, 0xa7, 0xa8, 0x5, 0x44, 0x23, 0x2, 0xa8, 0xa9, 0x5, 0x16, 0xc, 0x2, 
    0xa9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xb6, 0x7, 0x2f, 0x2, 0x2, 0xab, 
    0xb5, 0x5, 0x32, 0x1a, 0x2, 0xac, 0xb5, 0x5, 0x18, 0xd, 0x2, 0xad, 0xb5, 
    0x5, 0x14, 0xb, 0x2, 0xae, 0xb5, 0x5, 0x20, 0x11, 0x2, 0xaf, 0xb5, 0x5, 
    0xa, 0x6, 0x2, 0xb0, 0xb5, 0x5, 0x38, 0x1d, 0x2, 0xb1, 0xb5, 0x5, 0x3c, 
    0x1f, 0x2, 0xb2, 0xb5, 0x5, 0x26, 0x14, 0x2, 0xb3, 0xb5, 0x5, 0x58, 
    0x2d, 0x2, 0xb4, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x30, 0x2, 
    0x2, 0xba, 0x17, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x7, 0x2, 0x2, 
    0xbc, 0xbd, 0x5, 0x46, 0x24, 0x2, 0xbd, 0xbe, 0x5, 0x1a, 0xe, 0x2, 0xbe, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc5, 0x7, 0x2f, 0x2, 0x2, 0xc0, 0xc4, 
    0x5, 0xa, 0x6, 0x2, 0xc1, 0xc4, 0x5, 0x1c, 0xf, 0x2, 0xc2, 0xc4, 0x5, 
    0x58, 0x2d, 0x2, 0xc3, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc9, 0x7, 0x30, 0x2, 0x2, 0xc9, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 
    0x7, 0x27, 0x2, 0x2, 0xcb, 0xcd, 0x7, 0x3a, 0x2, 0x2, 0xcc, 0xce, 0x7, 
    0x38, 0x2, 0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xdb, 0x7, 0x28, 0x2, 
    0x2, 0xd0, 0xd1, 0x7, 0x31, 0x2, 0x2, 0xd1, 0xd6, 0x5, 0x1e, 0x10, 0x2, 
    0xd2, 0xd3, 0x7, 0x36, 0x2, 0x2, 0xd3, 0xd5, 0x5, 0x1e, 0x10, 0x2, 0xd4, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x32, 
    0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd0, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xde, 0x7, 0x35, 0x2, 0x2, 0xde, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0xe0, 0x5, 0xc, 0x7, 0x2, 0xe0, 0xe1, 0x7, 0x3a, 0x2, 0x2, 0xe1, 0xe2, 
    0x5, 0x5a, 0x2e, 0x2, 0xe2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 
    0x8, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x54, 0x2b, 0x2, 0xe5, 0xe8, 0x7, 0x2f, 
    0x2, 0x2, 0xe6, 0xe9, 0x5, 0x32, 0x1a, 0x2, 0xe7, 0xe9, 0x5, 0x58, 0x2d, 
    0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x30, 0x2, 0x2, 0xeb, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x7, 0x1b, 0x2, 0x2, 0xed, 0xee, 
    0x5, 0x50, 0x29, 0x2, 0xee, 0xf4, 0x7, 0x2f, 0x2, 0x2, 0xef, 0xf3, 0x5, 
    0xa, 0x6, 0x2, 0xf0, 0xf3, 0x5, 0x24, 0x13, 0x2, 0xf1, 0xf3, 0x5, 0x58, 
    0x2d, 0x2, 0xf2, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf6, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 
    0x7, 0x30, 0x2, 0x2, 0xf8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 
    0x1a, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x52, 0x2a, 0x2, 0xfb, 0xfd, 0x7, 0x2d, 
    0x2, 0x2, 0xfc, 0xfe, 0x7, 0x20, 0x2, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x100, 0x5, 0x54, 0x2b, 0x2, 0x100, 0x101, 0x7, 0x2e, 0x2, 0x2, 
    0x101, 0x102, 0x7, 0x19, 0x2, 0x2, 0x102, 0x104, 0x7, 0x2d, 0x2, 0x2, 
    0x103, 0x105, 0x7, 0x20, 0x2, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x5, 0x54, 0x2b, 0x2, 0x107, 0x112, 0x7, 0x2e, 0x2, 0x2, 
    0x108, 0x10d, 0x7, 0x2f, 0x2, 0x2, 0x109, 0x10c, 0x5, 0xa, 0x6, 0x2, 
    0x10a, 0x10c, 0x5, 0x58, 0x2d, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 
    0x10e, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 
    0x110, 0x113, 0x7, 0x30, 0x2, 0x2, 0x111, 0x113, 0x7, 0x35, 0x2, 0x2, 
    0x112, 0x108, 0x3, 0x2, 0x2, 0x2, 0x112, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x113, 0x25, 0x3, 0x2, 0x2, 0x2, 0x114, 0x117, 0x7, 0x18, 0x2, 0x2, 
    0x115, 0x118, 0x5, 0x28, 0x15, 0x2, 0x116, 0x118, 0x5, 0x2c, 0x17, 0x2, 
    0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x116, 0x3, 0x2, 0x2, 0x2, 
    0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x35, 0x2, 0x2, 
    0x11a, 0x27, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x120, 0x5, 0x2a, 0x16, 0x2, 
    0x11c, 0x11d, 0x7, 0x36, 0x2, 0x2, 0x11d, 0x11f, 0x5, 0x2a, 0x16, 0x2, 
    0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x29, 0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x123, 
    0x128, 0x7, 0x28, 0x2, 0x2, 0x124, 0x125, 0x7, 0x28, 0x2, 0x2, 0x125, 
    0x126, 0x7, 0x23, 0x2, 0x2, 0x126, 0x128, 0x7, 0x28, 0x2, 0x2, 0x127, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x127, 0x124, 0x3, 0x2, 0x2, 0x2, 0x128, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12e, 0x7, 0x2b, 0x2, 0x2, 0x12a, 
    0x12b, 0x7, 0x36, 0x2, 0x2, 0x12b, 0x12d, 0x7, 0x2b, 0x2, 0x2, 0x12c, 
    0x12a, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x134, 
    0x9, 0x4, 0x2, 0x2, 0x132, 0x134, 0x5, 0x56, 0x2c, 0x2, 0x133, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x133, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x136, 0x7, 0x28, 0x2, 0x2, 0x136, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x137, 0x139, 0x7, 0x17, 0x2, 0x2, 0x138, 0x137, 0x3, 
    0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0x13b, 0x5, 0x2e, 0x18, 0x2, 0x13b, 0x13c, 0x5, 
    0x4a, 0x26, 0x2, 0x13c, 0x13d, 0x7, 0x3a, 0x2, 0x2, 0x13d, 0x142, 0x5, 
    0x30, 0x19, 0x2, 0x13e, 0x13f, 0x7, 0x31, 0x2, 0x2, 0x13f, 0x140, 0x5, 
    0x34, 0x1b, 0x2, 0x140, 0x141, 0x7, 0x32, 0x2, 0x2, 0x141, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x142, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x7, 
    0x35, 0x2, 0x2, 0x145, 0x33, 0x3, 0x2, 0x2, 0x2, 0x146, 0x14b, 0x5, 
    0x36, 0x1c, 0x2, 0x147, 0x148, 0x7, 0x36, 0x2, 0x2, 0x148, 0x14a, 0x5, 
    0x36, 0x1c, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14d, 0x3, 
    0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x14c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x14f, 0x5, 0xc, 0x7, 0x2, 0x14f, 0x150, 0x7, 0x3a, 
    0x2, 0x2, 0x150, 0x151, 0x5, 0x5a, 0x2e, 0x2, 0x151, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x153, 0x7, 0x11, 0x2, 0x2, 0x153, 0x154, 0x5, 0x4c, 
    0x27, 0x2, 0x154, 0x159, 0x7, 0x2f, 0x2, 0x2, 0x155, 0x158, 0x5, 0x3a, 
    0x1e, 0x2, 0x156, 0x158, 0x5, 0x58, 0x2d, 0x2, 0x157, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15d, 0x7, 0x30, 0x2, 0x2, 0x15d, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x15f, 0x5, 0x2e, 0x18, 0x2, 0x15f, 0x160, 0x5, 0x4a, 
    0x26, 0x2, 0x160, 0x161, 0x7, 0x3a, 0x2, 0x2, 0x161, 0x166, 0x5, 0x30, 
    0x19, 0x2, 0x162, 0x163, 0x7, 0x31, 0x2, 0x2, 0x163, 0x164, 0x5, 0x34, 
    0x1b, 0x2, 0x164, 0x165, 0x7, 0x32, 0x2, 0x2, 0x165, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x162, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x7, 0x35, 
    0x2, 0x2, 0x169, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0xf, 0x2, 
    0x2, 0x16b, 0x16c, 0x7, 0x33, 0x2, 0x2, 0x16c, 0x16d, 0x5, 0x3e, 0x20, 
    0x2, 0x16d, 0x16e, 0x7, 0x36, 0x2, 0x2, 0x16e, 0x16f, 0x5, 0x2e, 0x18, 
    0x2, 0x16f, 0x170, 0x7, 0x34, 0x2, 0x2, 0x170, 0x171, 0x5, 0x4e, 0x28, 
    0x2, 0x171, 0x172, 0x7, 0x3a, 0x2, 0x2, 0x172, 0x177, 0x5, 0x30, 0x19, 
    0x2, 0x173, 0x174, 0x7, 0x31, 0x2, 0x2, 0x174, 0x175, 0x5, 0x34, 0x1b, 
    0x2, 0x175, 0x176, 0x7, 0x32, 0x2, 0x2, 0x176, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x177, 0x173, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x35, 0x2, 
    0x2, 0x17a, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x9, 0x5, 0x2, 0x2, 
    0x17c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x9, 0x6, 0x2, 0x2, 0x17e, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x184, 0x7, 0x27, 0x2, 0x2, 0x180, 
    0x181, 0x7, 0x37, 0x2, 0x2, 0x181, 0x183, 0x7, 0x27, 0x2, 0x2, 0x182, 
    0x180, 0x3, 0x2, 0x2, 0x2, 0x183, 0x186, 0x3, 0x2, 0x2, 0x2, 0x184, 
    0x182, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 
    0x7, 0x27, 0x2, 0x2, 0x188, 0x45, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 
    0x7, 0x27, 0x2, 0x2, 0x18a, 0x47, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 
    0x7, 0x27, 0x2, 0x2, 0x18c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x190, 
    0x7, 0x27, 0x2, 0x2, 0x18e, 0x190, 0x5, 0x40, 0x21, 0x2, 0x18f, 0x18d, 
    0x3, 0x2, 0x2, 0x2, 0x18f, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x190, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x191, 0x192, 0x7, 0x27, 0x2, 0x2, 0x192, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x193, 0x194, 0x7, 0x27, 0x2, 0x2, 0x194, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0x27, 0x2, 0x2, 0x196, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x197, 0x198, 0x7, 0x27, 0x2, 0x2, 0x198, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x199, 0x19b, 0x7, 0x37, 0x2, 0x2, 0x19a, 0x199, 0x3, 
    0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x1a0, 0x3, 
    0x2, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x27, 0x2, 0x2, 0x19d, 0x19f, 0x7, 
    0x37, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a2, 0x3, 
    0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 
    0x2, 0x2, 0x2, 0x1a1, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a0, 0x3, 
    0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x5, 0x44, 0x23, 0x2, 0x1a4, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x1a5, 0x1a7, 0x7, 0x37, 0x2, 0x2, 0x1a6, 0x1a5, 0x3, 
    0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1af, 0x3, 
    0x2, 0x2, 0x2, 0x1a8, 0x1ab, 0x7, 0x27, 0x2, 0x2, 0x1a9, 0x1ab, 0x5, 
    0x40, 0x21, 0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a9, 0x3, 
    0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ae, 0x7, 
    0x37, 0x2, 0x2, 0x1ad, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b1, 0x3, 
    0x2, 0x2, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 
    0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1af, 0x3, 
    0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x48, 0x25, 0x2, 0x1b3, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x35, 0x2, 0x2, 0x1b5, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x1b6, 0x1c1, 0x5, 0x42, 0x22, 0x2, 0x1b7, 0x1b9, 0x9, 
    0x7, 0x2, 0x2, 0x1b8, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1c1, 0x7, 
    0x28, 0x2, 0x2, 0x1bb, 0x1bd, 0x9, 0x7, 0x2, 0x2, 0x1bc, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x3, 
    0x2, 0x2, 0x2, 0x1be, 0x1c1, 0x7, 0x29, 0x2, 0x2, 0x1bf, 0x1c1, 0x9, 
    0x8, 0x2, 0x2, 0x1c0, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1b8, 0x3, 
    0x2, 0x2, 0x2, 0x1c0, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1bf, 0x3, 
    0x2, 0x2, 0x2, 0x1c1, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x62, 0x64, 0x70, 
    0x7e, 0x87, 0x8c, 0x90, 0x97, 0xa4, 0xb4, 0xb6, 0xc3, 0xc5, 0xcd, 0xd6, 
    0xdb, 0xe8, 0xf2, 0xf4, 0xfd, 0x104, 0x10b, 0x10d, 0x112, 0x117, 0x120, 
    0x127, 0x12e, 0x133, 0x138, 0x142, 0x14b, 0x157, 0x159, 0x166, 0x177, 
    0x184, 0x18f, 0x19a, 0x1a0, 0x1a6, 0x1aa, 0x1af, 0x1b8, 0x1bc, 0x1c0, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Protobuf3Parser::Initializer Protobuf3Parser::_init;
