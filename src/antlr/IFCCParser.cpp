
// Generated from src/antlr/IFCCParser.g4 by ANTLR 4.7.2


#include "IFCCParserVisitor.h"

#include "IFCCParser.h"


using namespace antlrcpp;
using namespace antlr4;

IFCCParser::IFCCParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

IFCCParser::~IFCCParser() {
  delete _interpreter;
}

std::string IFCCParser::getGrammarFileName() const {
  return "IFCCParser.g4";
}

const std::vector<std::string>& IFCCParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& IFCCParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

IFCCParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IFCCParser::GlobalItemContext *> IFCCParser::AxiomContext::globalItem() {
  return getRuleContexts<IFCCParser::GlobalItemContext>();
}

IFCCParser::GlobalItemContext* IFCCParser::AxiomContext::globalItem(size_t i) {
  return getRuleContext<IFCCParser::GlobalItemContext>(i);
}


size_t IFCCParser::AxiomContext::getRuleIndex() const {
  return IFCCParser::RuleAxiom;
}

antlrcpp::Any IFCCParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::AxiomContext* IFCCParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, IFCCParser::RuleAxiom);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IFCCParser::INT) {
      setState(30);
      globalItem();
      setState(35);
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

//----------------- GlobalItemContext ------------------------------------------------------------------

IFCCParser::GlobalItemContext::GlobalItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCCParser::DeclarationContext* IFCCParser::GlobalItemContext::declaration() {
  return getRuleContext<IFCCParser::DeclarationContext>(0);
}

IFCCParser::FunctionContext* IFCCParser::GlobalItemContext::function() {
  return getRuleContext<IFCCParser::FunctionContext>(0);
}


size_t IFCCParser::GlobalItemContext::getRuleIndex() const {
  return IFCCParser::RuleGlobalItem;
}

antlrcpp::Any IFCCParser::GlobalItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitGlobalItem(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::GlobalItemContext* IFCCParser::globalItem() {
  GlobalItemContext *_localctx = _tracker.createInstance<GlobalItemContext>(_ctx, getState());
  enterRule(_localctx, 2, IFCCParser::RuleGlobalItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(38);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(36);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(37);
      function();
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

//----------------- FunctionContext ------------------------------------------------------------------

IFCCParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IFCCParser::TypeContext *> IFCCParser::FunctionContext::type() {
  return getRuleContexts<IFCCParser::TypeContext>();
}

IFCCParser::TypeContext* IFCCParser::FunctionContext::type(size_t i) {
  return getRuleContext<IFCCParser::TypeContext>(i);
}

tree::TerminalNode* IFCCParser::FunctionContext::OPEN_PAR() {
  return getToken(IFCCParser::OPEN_PAR, 0);
}

tree::TerminalNode* IFCCParser::FunctionContext::CLOSE_PAR() {
  return getToken(IFCCParser::CLOSE_PAR, 0);
}

IFCCParser::BlockContext* IFCCParser::FunctionContext::block() {
  return getRuleContext<IFCCParser::BlockContext>(0);
}

std::vector<tree::TerminalNode *> IFCCParser::FunctionContext::IDENTIFIER() {
  return getTokens(IFCCParser::IDENTIFIER);
}

tree::TerminalNode* IFCCParser::FunctionContext::IDENTIFIER(size_t i) {
  return getToken(IFCCParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> IFCCParser::FunctionContext::COMMA() {
  return getTokens(IFCCParser::COMMA);
}

tree::TerminalNode* IFCCParser::FunctionContext::COMMA(size_t i) {
  return getToken(IFCCParser::COMMA, i);
}


size_t IFCCParser::FunctionContext::getRuleIndex() const {
  return IFCCParser::RuleFunction;
}

antlrcpp::Any IFCCParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::FunctionContext* IFCCParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, IFCCParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    type();
    setState(41);
    dynamic_cast<FunctionContext *>(_localctx)->functionLabel = match(IFCCParser::IDENTIFIER);
    setState(42);
    match(IFCCParser::OPEN_PAR);
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IFCCParser::INT) {
      setState(43);
      type();
      setState(44);
      match(IFCCParser::IDENTIFIER);
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCCParser::COMMA) {
        setState(45);
        match(IFCCParser::COMMA);
        setState(46);
        type();
        setState(47);
        match(IFCCParser::IDENTIFIER);
        setState(53);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(56);
    match(IFCCParser::CLOSE_PAR);
    setState(57);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

IFCCParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCCParser::ActionContext* IFCCParser::InstructionContext::action() {
  return getRuleContext<IFCCParser::ActionContext>(0);
}

tree::TerminalNode* IFCCParser::InstructionContext::SEMICOLON() {
  return getToken(IFCCParser::SEMICOLON, 0);
}


size_t IFCCParser::InstructionContext::getRuleIndex() const {
  return IFCCParser::RuleInstruction;
}

antlrcpp::Any IFCCParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::InstructionContext* IFCCParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, IFCCParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    action();
    setState(60);
    match(IFCCParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionContext ------------------------------------------------------------------

IFCCParser::ActionContext::ActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCCParser::DeclarationContext* IFCCParser::ActionContext::declaration() {
  return getRuleContext<IFCCParser::DeclarationContext>(0);
}

IFCCParser::AffectationContext* IFCCParser::ActionContext::affectation() {
  return getRuleContext<IFCCParser::AffectationContext>(0);
}

IFCCParser::FunctionCallContext* IFCCParser::ActionContext::functionCall() {
  return getRuleContext<IFCCParser::FunctionCallContext>(0);
}

IFCCParser::ReturnActContext* IFCCParser::ActionContext::returnAct() {
  return getRuleContext<IFCCParser::ReturnActContext>(0);
}


size_t IFCCParser::ActionContext::getRuleIndex() const {
  return IFCCParser::RuleAction;
}

antlrcpp::Any IFCCParser::ActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitAction(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::ActionContext* IFCCParser::action() {
  ActionContext *_localctx = _tracker.createInstance<ActionContext>(_ctx, getState());
  enterRule(_localctx, 8, IFCCParser::RuleAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(62);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(63);
      affectation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(64);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(65);
      returnAct();
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

//----------------- StatementContext ------------------------------------------------------------------

IFCCParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCCParser::InstructionContext* IFCCParser::StatementContext::instruction() {
  return getRuleContext<IFCCParser::InstructionContext>(0);
}

IFCCParser::IfStmtContext* IFCCParser::StatementContext::ifStmt() {
  return getRuleContext<IFCCParser::IfStmtContext>(0);
}

IFCCParser::WhileStmtContext* IFCCParser::StatementContext::whileStmt() {
  return getRuleContext<IFCCParser::WhileStmtContext>(0);
}

IFCCParser::BlockContext* IFCCParser::StatementContext::block() {
  return getRuleContext<IFCCParser::BlockContext>(0);
}


size_t IFCCParser::StatementContext::getRuleIndex() const {
  return IFCCParser::RuleStatement;
}

antlrcpp::Any IFCCParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::StatementContext* IFCCParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, IFCCParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::RETURN:
      case IFCCParser::INT:
      case IFCCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        instruction();
        break;
      }

      case IFCCParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        ifStmt();
        break;
      }

      case IFCCParser::WHILE:
      case IFCCParser::DO: {
        enterOuterAlt(_localctx, 3);
        setState(70);
        whileStmt();
        break;
      }

      case IFCCParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 4);
        setState(71);
        block();
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

//----------------- BlockContext ------------------------------------------------------------------

IFCCParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCCParser::BlockContext::OPEN_BRACE() {
  return getToken(IFCCParser::OPEN_BRACE, 0);
}

tree::TerminalNode* IFCCParser::BlockContext::CLOSE_BRACE() {
  return getToken(IFCCParser::CLOSE_BRACE, 0);
}

std::vector<IFCCParser::StatementContext *> IFCCParser::BlockContext::statement() {
  return getRuleContexts<IFCCParser::StatementContext>();
}

IFCCParser::StatementContext* IFCCParser::BlockContext::statement(size_t i) {
  return getRuleContext<IFCCParser::StatementContext>(i);
}


size_t IFCCParser::BlockContext::getRuleIndex() const {
  return IFCCParser::RuleBlock;
}

antlrcpp::Any IFCCParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::BlockContext* IFCCParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 12, IFCCParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(IFCCParser::OPEN_BRACE);
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IFCCParser::IF)
      | (1ULL << IFCCParser::WHILE)
      | (1ULL << IFCCParser::DO)
      | (1ULL << IFCCParser::RETURN)
      | (1ULL << IFCCParser::OPEN_BRACE)
      | (1ULL << IFCCParser::INT)
      | (1ULL << IFCCParser::IDENTIFIER))) != 0)) {
      setState(75);
      statement();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(81);
    match(IFCCParser::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

IFCCParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFCCParser::DeclarationContext::getRuleIndex() const {
  return IFCCParser::RuleDeclaration;
}

void IFCCParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationMultiContext ------------------------------------------------------------------

IFCCParser::TypeContext* IFCCParser::DeclarationMultiContext::type() {
  return getRuleContext<IFCCParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> IFCCParser::DeclarationMultiContext::IDENTIFIER() {
  return getTokens(IFCCParser::IDENTIFIER);
}

tree::TerminalNode* IFCCParser::DeclarationMultiContext::IDENTIFIER(size_t i) {
  return getToken(IFCCParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> IFCCParser::DeclarationMultiContext::COMMA() {
  return getTokens(IFCCParser::COMMA);
}

tree::TerminalNode* IFCCParser::DeclarationMultiContext::COMMA(size_t i) {
  return getToken(IFCCParser::COMMA, i);
}

IFCCParser::DeclarationMultiContext::DeclarationMultiContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::DeclarationMultiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationMulti(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationEmptyContext ------------------------------------------------------------------

IFCCParser::TypeContext* IFCCParser::DeclarationEmptyContext::type() {
  return getRuleContext<IFCCParser::TypeContext>(0);
}

tree::TerminalNode* IFCCParser::DeclarationEmptyContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::DeclarationEmptyContext::DeclarationEmptyContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::DeclarationEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationAffectationContext ------------------------------------------------------------------

IFCCParser::TypeContext* IFCCParser::DeclarationAffectationContext::type() {
  return getRuleContext<IFCCParser::TypeContext>(0);
}

tree::TerminalNode* IFCCParser::DeclarationAffectationContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

tree::TerminalNode* IFCCParser::DeclarationAffectationContext::EQ() {
  return getToken(IFCCParser::EQ, 0);
}

IFCCParser::ExprContext* IFCCParser::DeclarationAffectationContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}

IFCCParser::DeclarationAffectationContext::DeclarationAffectationContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::DeclarationAffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationAffectation(this);
  else
    return visitor->visitChildren(this);
}
IFCCParser::DeclarationContext* IFCCParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, IFCCParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationEmptyContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(83);
      type();
      setState(84);
      match(IFCCParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(86);
      type();
      setState(87);
      match(IFCCParser::IDENTIFIER);
      setState(88);
      match(IFCCParser::EQ);
      setState(89);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationMultiContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(91);
      type();
      setState(92);
      match(IFCCParser::IDENTIFIER);
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCCParser::COMMA) {
        setState(93);
        match(IFCCParser::COMMA);
        setState(94);
        match(IFCCParser::IDENTIFIER);
        setState(99);
        _errHandler->sync(this);
        _la = _input->LA(1);
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

//----------------- TypeContext ------------------------------------------------------------------

IFCCParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCCParser::TypeContext::INT() {
  return getToken(IFCCParser::INT, 0);
}


size_t IFCCParser::TypeContext::getRuleIndex() const {
  return IFCCParser::RuleType;
}

antlrcpp::Any IFCCParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::TypeContext* IFCCParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 16, IFCCParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    dynamic_cast<TypeContext *>(_localctx)->typeName = match(IFCCParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectationContext ------------------------------------------------------------------

IFCCParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCCParser::AffectationContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

tree::TerminalNode* IFCCParser::AffectationContext::EQ() {
  return getToken(IFCCParser::EQ, 0);
}

IFCCParser::ExprContext* IFCCParser::AffectationContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}


size_t IFCCParser::AffectationContext::getRuleIndex() const {
  return IFCCParser::RuleAffectation;
}

antlrcpp::Any IFCCParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::AffectationContext* IFCCParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 18, IFCCParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(IFCCParser::IDENTIFIER);
    setState(105);
    match(IFCCParser::EQ);
    setState(106);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

IFCCParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCCParser::IfStmtContext::IF() {
  return getToken(IFCCParser::IF, 0);
}

tree::TerminalNode* IFCCParser::IfStmtContext::OPEN_PAR() {
  return getToken(IFCCParser::OPEN_PAR, 0);
}

tree::TerminalNode* IFCCParser::IfStmtContext::CLOSE_PAR() {
  return getToken(IFCCParser::CLOSE_PAR, 0);
}

IFCCParser::ExprContext* IFCCParser::IfStmtContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}

std::vector<IFCCParser::StatementContext *> IFCCParser::IfStmtContext::statement() {
  return getRuleContexts<IFCCParser::StatementContext>();
}

IFCCParser::StatementContext* IFCCParser::IfStmtContext::statement(size_t i) {
  return getRuleContext<IFCCParser::StatementContext>(i);
}

tree::TerminalNode* IFCCParser::IfStmtContext::ELSE() {
  return getToken(IFCCParser::ELSE, 0);
}


size_t IFCCParser::IfStmtContext::getRuleIndex() const {
  return IFCCParser::RuleIfStmt;
}

antlrcpp::Any IFCCParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::IfStmtContext* IFCCParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, IFCCParser::RuleIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(IFCCParser::IF);
    setState(109);
    match(IFCCParser::OPEN_PAR);
    setState(110);
    dynamic_cast<IfStmtContext *>(_localctx)->condition = expr(0);
    setState(111);
    match(IFCCParser::CLOSE_PAR);
    setState(112);
    dynamic_cast<IfStmtContext *>(_localctx)->actionIF = statement();
    setState(115);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(113);
      match(IFCCParser::ELSE);
      setState(114);
      dynamic_cast<IfStmtContext *>(_localctx)->actionELSE = statement();
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

//----------------- WhileStmtContext ------------------------------------------------------------------

IFCCParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCCParser::WhileStmtContext::WHILE() {
  return getToken(IFCCParser::WHILE, 0);
}

tree::TerminalNode* IFCCParser::WhileStmtContext::OPEN_PAR() {
  return getToken(IFCCParser::OPEN_PAR, 0);
}

tree::TerminalNode* IFCCParser::WhileStmtContext::CLOSE_PAR() {
  return getToken(IFCCParser::CLOSE_PAR, 0);
}

IFCCParser::StatementContext* IFCCParser::WhileStmtContext::statement() {
  return getRuleContext<IFCCParser::StatementContext>(0);
}

IFCCParser::ExprContext* IFCCParser::WhileStmtContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}

tree::TerminalNode* IFCCParser::WhileStmtContext::DO() {
  return getToken(IFCCParser::DO, 0);
}

tree::TerminalNode* IFCCParser::WhileStmtContext::SEMICOLON() {
  return getToken(IFCCParser::SEMICOLON, 0);
}


size_t IFCCParser::WhileStmtContext::getRuleIndex() const {
  return IFCCParser::RuleWhileStmt;
}

antlrcpp::Any IFCCParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::WhileStmtContext* IFCCParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, IFCCParser::RuleWhileStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(117);
        match(IFCCParser::WHILE);
        setState(118);
        match(IFCCParser::OPEN_PAR);
        setState(119);
        dynamic_cast<WhileStmtContext *>(_localctx)->condition = expr(0);
        setState(120);
        match(IFCCParser::CLOSE_PAR);
        setState(121);
        statement();
        dynamic_cast<WhileStmtContext *>(_localctx)->isDoWhile =  false;
        break;
      }

      case IFCCParser::DO: {
        enterOuterAlt(_localctx, 2);
        setState(124);
        match(IFCCParser::DO);
        setState(125);
        statement();
        setState(126);
        match(IFCCParser::WHILE);
        setState(127);
        match(IFCCParser::OPEN_PAR);
        setState(128);
        dynamic_cast<WhileStmtContext *>(_localctx)->condition = expr(0);
        setState(129);
        match(IFCCParser::CLOSE_PAR);
        setState(130);
        match(IFCCParser::SEMICOLON);
        dynamic_cast<WhileStmtContext *>(_localctx)->isDoWhile =  true;
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

//----------------- ReturnActContext ------------------------------------------------------------------

IFCCParser::ReturnActContext::ReturnActContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCCParser::ReturnActContext::RETURN() {
  return getToken(IFCCParser::RETURN, 0);
}

IFCCParser::ExprContext* IFCCParser::ReturnActContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}


size_t IFCCParser::ReturnActContext::getRuleIndex() const {
  return IFCCParser::RuleReturnAct;
}

antlrcpp::Any IFCCParser::ReturnActContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitReturnAct(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::ReturnActContext* IFCCParser::returnAct() {
  ReturnActContext *_localctx = _tracker.createInstance<ReturnActContext>(_ctx, getState());
  enterRule(_localctx, 24, IFCCParser::RuleReturnAct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(IFCCParser::RETURN);
    setState(136);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

IFCCParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCCParser::FunctionCallContext::OPEN_PAR() {
  return getToken(IFCCParser::OPEN_PAR, 0);
}

tree::TerminalNode* IFCCParser::FunctionCallContext::CLOSE_PAR() {
  return getToken(IFCCParser::CLOSE_PAR, 0);
}

tree::TerminalNode* IFCCParser::FunctionCallContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

std::vector<tree::TerminalNode *> IFCCParser::FunctionCallContext::CONST() {
  return getTokens(IFCCParser::CONST);
}

tree::TerminalNode* IFCCParser::FunctionCallContext::CONST(size_t i) {
  return getToken(IFCCParser::CONST, i);
}

std::vector<tree::TerminalNode *> IFCCParser::FunctionCallContext::COMMA() {
  return getTokens(IFCCParser::COMMA);
}

tree::TerminalNode* IFCCParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(IFCCParser::COMMA, i);
}


size_t IFCCParser::FunctionCallContext::getRuleIndex() const {
  return IFCCParser::RuleFunctionCall;
}

antlrcpp::Any IFCCParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::FunctionCallContext* IFCCParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 26, IFCCParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    dynamic_cast<FunctionCallContext *>(_localctx)->functionLabel = match(IFCCParser::IDENTIFIER);
    setState(139);
    match(IFCCParser::OPEN_PAR);
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IFCCParser::CONST) {
      setState(140);
      match(IFCCParser::CONST);
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCCParser::COMMA) {
        setState(141);
        match(IFCCParser::COMMA);
        setState(142);
        match(IFCCParser::CONST);
        setState(147);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(150);
    match(IFCCParser::CLOSE_PAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

IFCCParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFCCParser::ExprContext::getRuleIndex() const {
  return IFCCParser::RuleExpr;
}

void IFCCParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->isInfix = ctx->isInfix;
}

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::IdentifierContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::ConstContext::CONST() {
  return getToken(IFCCParser::CONST, 0);
}

IFCCParser::ConstContext::ConstContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperationBinaryContext ------------------------------------------------------------------

std::vector<IFCCParser::ExprContext *> IFCCParser::OperationBinaryContext::expr() {
  return getRuleContexts<IFCCParser::ExprContext>();
}

IFCCParser::ExprContext* IFCCParser::OperationBinaryContext::expr(size_t i) {
  return getRuleContext<IFCCParser::ExprContext>(i);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::MULT() {
  return getToken(IFCCParser::MULT, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::DIV() {
  return getToken(IFCCParser::DIV, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::MOD() {
  return getToken(IFCCParser::MOD, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::MIN() {
  return getToken(IFCCParser::MIN, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::PLUS() {
  return getToken(IFCCParser::PLUS, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::DEQ() {
  return getToken(IFCCParser::DEQ, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::NEQ() {
  return getToken(IFCCParser::NEQ, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::GT() {
  return getToken(IFCCParser::GT, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::GE() {
  return getToken(IFCCParser::GE, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::LT() {
  return getToken(IFCCParser::LT, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::LE() {
  return getToken(IFCCParser::LE, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::B_AND() {
  return getToken(IFCCParser::B_AND, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::L_AND() {
  return getToken(IFCCParser::L_AND, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::B_OR() {
  return getToken(IFCCParser::B_OR, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::L_OR() {
  return getToken(IFCCParser::L_OR, 0);
}

tree::TerminalNode* IFCCParser::OperationBinaryContext::X_OR() {
  return getToken(IFCCParser::X_OR, 0);
}

IFCCParser::OperationBinaryContext::OperationBinaryContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::OperationBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitOperationBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::ParenthesisContext::OPEN_PAR() {
  return getToken(IFCCParser::OPEN_PAR, 0);
}

IFCCParser::ExprContext* IFCCParser::ParenthesisContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}

tree::TerminalNode* IFCCParser::ParenthesisContext::CLOSE_PAR() {
  return getToken(IFCCParser::CLOSE_PAR, 0);
}

IFCCParser::ParenthesisContext::ParenthesisContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::ParenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitParenthesis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperationUnaryContext ------------------------------------------------------------------

IFCCParser::ExprContext* IFCCParser::OperationUnaryContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}

tree::TerminalNode* IFCCParser::OperationUnaryContext::MIN() {
  return getToken(IFCCParser::MIN, 0);
}

tree::TerminalNode* IFCCParser::OperationUnaryContext::PLUS() {
  return getToken(IFCCParser::PLUS, 0);
}

tree::TerminalNode* IFCCParser::OperationUnaryContext::L_NOT() {
  return getToken(IFCCParser::L_NOT, 0);
}

tree::TerminalNode* IFCCParser::OperationUnaryContext::B_NOT() {
  return getToken(IFCCParser::B_NOT, 0);
}

IFCCParser::OperationUnaryContext::OperationUnaryContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::OperationUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCParserVisitor*>(visitor))
    return parserVisitor->visitOperationUnary(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::ExprContext* IFCCParser::expr() {
   return expr(0);
}

IFCCParser::ExprContext* IFCCParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  IFCCParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  IFCCParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, IFCCParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(175);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::OPEN_PAR: {
        _localctx = _tracker.createInstance<ParenthesisContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(153);
        match(IFCCParser::OPEN_PAR);
        setState(154);
        expr(0);
        setState(155);
        match(IFCCParser::CLOSE_PAR);
        break;
      }

      case IFCCParser::MIN: {
        _localctx = _tracker.createInstance<OperationUnaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(157);
        dynamic_cast<OperationUnaryContext *>(_localctx)->op = match(IFCCParser::MIN);
        setState(158);
        expr(6);
        dynamic_cast<OperationUnaryContext *>(_localctx)->isInfix =  true;
        break;
      }

      case IFCCParser::PLUS: {
        _localctx = _tracker.createInstance<OperationUnaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(161);
        dynamic_cast<OperationUnaryContext *>(_localctx)->op = match(IFCCParser::PLUS);
        setState(162);
        expr(5);
        dynamic_cast<OperationUnaryContext *>(_localctx)->isInfix =  true;
        break;
      }

      case IFCCParser::L_NOT: {
        _localctx = _tracker.createInstance<OperationUnaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(165);
        dynamic_cast<OperationUnaryContext *>(_localctx)->op = match(IFCCParser::L_NOT);
        setState(166);
        expr(4);
        dynamic_cast<OperationUnaryContext *>(_localctx)->isInfix =  true;
        break;
      }

      case IFCCParser::B_NOT: {
        _localctx = _tracker.createInstance<OperationUnaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(169);
        dynamic_cast<OperationUnaryContext *>(_localctx)->op = match(IFCCParser::B_NOT);
        setState(170);
        expr(3);
        dynamic_cast<OperationUnaryContext *>(_localctx)->isInfix =  true;
        break;
      }

      case IFCCParser::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(173);
        match(IFCCParser::CONST);
        break;
      }

      case IFCCParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(174);
        match(IFCCParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(227);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(225);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(177);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(178);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::MULT);
          setState(179);
          expr(24);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(180);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(181);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::DIV);
          setState(182);
          expr(23);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(183);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(184);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::MOD);
          setState(185);
          expr(22);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(186);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(187);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::MIN);
          setState(188);
          expr(21);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(189);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(190);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::PLUS);
          setState(191);
          expr(20);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(192);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(193);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::DEQ);
          setState(194);
          expr(19);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(195);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(196);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::NEQ);
          setState(197);
          expr(18);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(198);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(199);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::GT);
          setState(200);
          expr(17);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(201);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(202);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::GE);
          setState(203);
          expr(16);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(204);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(205);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::LT);
          setState(206);
          expr(15);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(207);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(208);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::LE);
          setState(209);
          expr(14);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(210);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(211);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::B_AND);
          setState(212);
          expr(13);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(213);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(214);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::L_AND);
          setState(215);
          expr(12);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(216);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(217);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::B_OR);
          setState(218);
          expr(11);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(219);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(220);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::L_OR);
          setState(221);
          expr(10);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(222);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(223);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCCParser::X_OR);
          setState(224);
          expr(9);
          break;
        }

        } 
      }
      setState(229);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool IFCCParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool IFCCParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 23);
    case 1: return precpred(_ctx, 22);
    case 2: return precpred(_ctx, 21);
    case 3: return precpred(_ctx, 20);
    case 4: return precpred(_ctx, 19);
    case 5: return precpred(_ctx, 18);
    case 6: return precpred(_ctx, 17);
    case 7: return precpred(_ctx, 16);
    case 8: return precpred(_ctx, 15);
    case 9: return precpred(_ctx, 14);
    case 10: return precpred(_ctx, 13);
    case 11: return precpred(_ctx, 12);
    case 12: return precpred(_ctx, 11);
    case 13: return precpred(_ctx, 10);
    case 14: return precpred(_ctx, 9);
    case 15: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> IFCCParser::_decisionToDFA;
atn::PredictionContextCache IFCCParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IFCCParser::_atn;
std::vector<uint16_t> IFCCParser::_serializedATN;

std::vector<std::string> IFCCParser::_ruleNames = {
  "axiom", "globalItem", "function", "instruction", "action", "statement", 
  "block", "declaration", "type", "affectation", "ifStmt", "whileStmt", 
  "returnAct", "functionCall", "expr"
};

std::vector<std::string> IFCCParser::_literalNames = {
  "", "'if'", "'else'", "'while'", "'do'", "'return'", "'('", "')'", "'{'", 
  "'}'", "'['", "']'", "';'", "','", "'int'", "'char'", "'*'", "'/'", "'+'", 
  "'-'", "'%'", "'='", "'!'", "'~'", "'!='", "'=='", "'>'", "'<'", "'>='", 
  "'<='", "'&'", "'&&'", "'|'", "'||'", "'^'", "'++'", "'--'", "'*='", "'/='", 
  "'+='", "'-='"
};

std::vector<std::string> IFCCParser::_symbolicNames = {
  "", "IF", "ELSE", "WHILE", "DO", "RETURN", "OPEN_PAR", "CLOSE_PAR", "OPEN_BRACE", 
  "CLOSE_BRACE", "OPEN_BRACKET", "CLOSE_BRACKET", "SEMICOLON", "COMMA", 
  "INT", "CHAR", "MULT", "DIV", "PLUS", "MIN", "MOD", "EQ", "L_NOT", "B_NOT", 
  "NEQ", "DEQ", "GT", "LT", "GE", "LE", "B_AND", "L_AND", "B_OR", "L_OR", 
  "X_OR", "DPLUS", "DMIN", "MULT_EQ", "DIV_EQ", "PLUS_EQ", "MIN_EQ", "CONST", 
  "IDENTIFIER", "OPERATOR", "COMMENT", "DIRECTIVE", "WS"
};

dfa::Vocabulary IFCCParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> IFCCParser::_tokenNames;

IFCCParser::Initializer::Initializer() {
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
    0x3, 0x30, 0xe9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x7, 0x2, 0x22, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x25, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x29, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x34, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x37, 0xb, 0x4, 0x5, 0x4, 0x39, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x45, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x4b, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x4f, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x52, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x62, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x65, 0xb, 0x9, 0x5, 0x9, 0x67, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x76, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x88, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x92, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x95, 0xb, 0xf, 0x5, 0xf, 0x97, 0xa, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0xb2, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xe4, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0xe7, 0xb, 0x10, 0x3, 0x10, 0x2, 0x3, 0x1e, 0x11, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x2, 0x2, 0x2, 0x101, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x44, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x68, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x18, 0x87, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x5, 0x4, 0x3, 0x2, 0x21, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x25, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29, 0x5, 0x10, 0x9, 0x2, 
    0x27, 0x29, 0x5, 0x6, 0x4, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 
    0x5, 0x12, 0xa, 0x2, 0x2b, 0x2c, 0x7, 0x2c, 0x2, 0x2, 0x2c, 0x38, 0x7, 
    0x8, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x12, 0xa, 0x2, 0x2e, 0x35, 0x7, 0x2c, 
    0x2, 0x2, 0x2f, 0x30, 0x7, 0xf, 0x2, 0x2, 0x30, 0x31, 0x5, 0x12, 0xa, 
    0x2, 0x31, 0x32, 0x7, 0x2c, 0x2, 0x2, 0x32, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x7, 0x9, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xe, 0x8, 
    0x2, 0x3c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0xa, 0x6, 0x2, 
    0x3e, 0x3f, 0x7, 0xe, 0x2, 0x2, 0x3f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x45, 0x5, 0x10, 0x9, 0x2, 0x41, 0x45, 0x5, 0x14, 0xb, 0x2, 0x42, 0x45, 
    0x5, 0x1c, 0xf, 0x2, 0x43, 0x45, 0x5, 0x1a, 0xe, 0x2, 0x44, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x4b, 0x5, 0x8, 0x5, 0x2, 0x47, 0x4b, 0x5, 0x16, 0xc, 0x2, 
    0x48, 0x4b, 0x5, 0x18, 0xd, 0x2, 0x49, 0x4b, 0x5, 0xe, 0x8, 0x2, 0x4a, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x50, 0x7, 0xa, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0xc, 
    0x7, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x53, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x54, 0x7, 0xb, 0x2, 0x2, 0x54, 0xf, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 
    0x5, 0x12, 0xa, 0x2, 0x56, 0x57, 0x7, 0x2c, 0x2, 0x2, 0x57, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x59, 0x5, 0x12, 0xa, 0x2, 0x59, 0x5a, 0x7, 0x2c, 
    0x2, 0x2, 0x5a, 0x5b, 0x7, 0x17, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0x1e, 0x10, 
    0x2, 0x5c, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x12, 0xa, 0x2, 
    0x5e, 0x63, 0x7, 0x2c, 0x2, 0x2, 0x5f, 0x60, 0x7, 0xf, 0x2, 0x2, 0x60, 
    0x62, 0x7, 0x2c, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x55, 0x3, 0x2, 0x2, 0x2, 0x66, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x67, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x69, 0x7, 0x10, 0x2, 0x2, 0x69, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x6b, 0x7, 0x2c, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x17, 0x2, 0x2, 0x6c, 0x6d, 
    0x5, 0x1e, 0x10, 0x2, 0x6d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 
    0x3, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x8, 0x2, 0x2, 0x70, 0x71, 0x5, 0x1e, 
    0x10, 0x2, 0x71, 0x72, 0x7, 0x9, 0x2, 0x2, 0x72, 0x75, 0x5, 0xc, 0x7, 
    0x2, 0x73, 0x74, 0x7, 0x4, 0x2, 0x2, 0x74, 0x76, 0x5, 0xc, 0x7, 0x2, 
    0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x5, 0x2, 0x2, 0x78, 0x79, 
    0x7, 0x8, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x1e, 0x10, 0x2, 0x7a, 0x7b, 0x7, 
    0x9, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0xc, 0x7, 0x2, 0x7c, 0x7d, 0x8, 0xd, 
    0x1, 0x2, 0x7d, 0x88, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x6, 0x2, 
    0x2, 0x7f, 0x80, 0x5, 0xc, 0x7, 0x2, 0x80, 0x81, 0x7, 0x5, 0x2, 0x2, 
    0x81, 0x82, 0x7, 0x8, 0x2, 0x2, 0x82, 0x83, 0x5, 0x1e, 0x10, 0x2, 0x83, 
    0x84, 0x7, 0x9, 0x2, 0x2, 0x84, 0x85, 0x7, 0xe, 0x2, 0x2, 0x85, 0x86, 
    0x8, 0xd, 0x1, 0x2, 0x86, 0x88, 0x3, 0x2, 0x2, 0x2, 0x87, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x88, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x8a, 0x7, 0x7, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x1e, 0x10, 
    0x2, 0x8b, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x2c, 0x2, 0x2, 
    0x8d, 0x96, 0x7, 0x8, 0x2, 0x2, 0x8e, 0x93, 0x7, 0x2b, 0x2, 0x2, 0x8f, 
    0x90, 0x7, 0xf, 0x2, 0x2, 0x90, 0x92, 0x7, 0x2b, 0x2, 0x2, 0x91, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x99, 0x7, 0x9, 0x2, 0x2, 0x99, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x9b, 0x8, 0x10, 0x1, 0x2, 0x9b, 0x9c, 0x7, 0x8, 0x2, 0x2, 0x9c, 0x9d, 
    0x5, 0x1e, 0x10, 0x2, 0x9d, 0x9e, 0x7, 0x9, 0x2, 0x2, 0x9e, 0xb2, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x15, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x1e, 
    0x10, 0x8, 0xa1, 0xa2, 0x8, 0x10, 0x1, 0x2, 0xa2, 0xb2, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa4, 0x7, 0x14, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x1e, 0x10, 0x7, 
    0xa5, 0xa6, 0x8, 0x10, 0x1, 0x2, 0xa6, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xa7, 
    0xa8, 0x7, 0x18, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0x1e, 0x10, 0x6, 0xa9, 0xaa, 
    0x8, 0x10, 0x1, 0x2, 0xaa, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 
    0x19, 0x2, 0x2, 0xac, 0xad, 0x5, 0x1e, 0x10, 0x5, 0xad, 0xae, 0x8, 0x10, 
    0x1, 0x2, 0xae, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb2, 0x7, 0x2b, 0x2, 
    0x2, 0xb0, 0xb2, 0x7, 0x2c, 0x2, 0x2, 0xb1, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0xc, 0x19, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x12, 
    0x2, 0x2, 0xb5, 0xe4, 0x5, 0x1e, 0x10, 0x1a, 0xb6, 0xb7, 0xc, 0x18, 
    0x2, 0x2, 0xb7, 0xb8, 0x7, 0x13, 0x2, 0x2, 0xb8, 0xe4, 0x5, 0x1e, 0x10, 
    0x19, 0xb9, 0xba, 0xc, 0x17, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x16, 0x2, 0x2, 
    0xbb, 0xe4, 0x5, 0x1e, 0x10, 0x18, 0xbc, 0xbd, 0xc, 0x16, 0x2, 0x2, 
    0xbd, 0xbe, 0x7, 0x15, 0x2, 0x2, 0xbe, 0xe4, 0x5, 0x1e, 0x10, 0x17, 
    0xbf, 0xc0, 0xc, 0x15, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x14, 0x2, 0x2, 0xc1, 
    0xe4, 0x5, 0x1e, 0x10, 0x16, 0xc2, 0xc3, 0xc, 0x14, 0x2, 0x2, 0xc3, 
    0xc4, 0x7, 0x1b, 0x2, 0x2, 0xc4, 0xe4, 0x5, 0x1e, 0x10, 0x15, 0xc5, 
    0xc6, 0xc, 0x13, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x1a, 0x2, 0x2, 0xc7, 0xe4, 
    0x5, 0x1e, 0x10, 0x14, 0xc8, 0xc9, 0xc, 0x12, 0x2, 0x2, 0xc9, 0xca, 
    0x7, 0x1c, 0x2, 0x2, 0xca, 0xe4, 0x5, 0x1e, 0x10, 0x13, 0xcb, 0xcc, 
    0xc, 0x11, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x1e, 0x2, 0x2, 0xcd, 0xe4, 0x5, 
    0x1e, 0x10, 0x12, 0xce, 0xcf, 0xc, 0x10, 0x2, 0x2, 0xcf, 0xd0, 0x7, 
    0x1d, 0x2, 0x2, 0xd0, 0xe4, 0x5, 0x1e, 0x10, 0x11, 0xd1, 0xd2, 0xc, 
    0xf, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x1f, 0x2, 0x2, 0xd3, 0xe4, 0x5, 0x1e, 
    0x10, 0x10, 0xd4, 0xd5, 0xc, 0xe, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x20, 0x2, 
    0x2, 0xd6, 0xe4, 0x5, 0x1e, 0x10, 0xf, 0xd7, 0xd8, 0xc, 0xd, 0x2, 0x2, 
    0xd8, 0xd9, 0x7, 0x21, 0x2, 0x2, 0xd9, 0xe4, 0x5, 0x1e, 0x10, 0xe, 0xda, 
    0xdb, 0xc, 0xc, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x22, 0x2, 0x2, 0xdc, 0xe4, 
    0x5, 0x1e, 0x10, 0xd, 0xdd, 0xde, 0xc, 0xb, 0x2, 0x2, 0xde, 0xdf, 0x7, 
    0x23, 0x2, 0x2, 0xdf, 0xe4, 0x5, 0x1e, 0x10, 0xc, 0xe0, 0xe1, 0xc, 0xa, 
    0x2, 0x2, 0xe1, 0xe2, 0x7, 0x24, 0x2, 0x2, 0xe2, 0xe4, 0x5, 0x1e, 0x10, 
    0xb, 0xe3, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xce, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xd7, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xda, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe5, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x12, 0x23, 0x28, 
    0x35, 0x38, 0x44, 0x4a, 0x50, 0x63, 0x66, 0x75, 0x87, 0x93, 0x96, 0xb1, 
    0xe3, 0xe5, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

IFCCParser::Initializer IFCCParser::_init;
