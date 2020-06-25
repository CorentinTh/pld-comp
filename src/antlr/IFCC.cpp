
// Generated from src/antlr/IFCC.g4 by ANTLR 4.7.2


#include "IFCCVisitor.h"

#include "IFCC.h"


using namespace antlrcpp;
using namespace antlr4;

IFCC::IFCC(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

IFCC::~IFCC() {
  delete _interpreter;
}

std::string IFCC::getGrammarFileName() const {
  return "IFCC.g4";
}

const std::vector<std::string>& IFCC::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& IFCC::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

IFCC::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IFCC::GlobalItemContext *> IFCC::AxiomContext::globalItem() {
  return getRuleContexts<IFCC::GlobalItemContext>();
}

IFCC::GlobalItemContext* IFCC::AxiomContext::globalItem(size_t i) {
  return getRuleContext<IFCC::GlobalItemContext>(i);
}


size_t IFCC::AxiomContext::getRuleIndex() const {
  return IFCC::RuleAxiom;
}

antlrcpp::Any IFCC::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

IFCC::AxiomContext* IFCC::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, IFCC::RuleAxiom);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IFCC::INT) {
      setState(26);
      globalItem();
      setState(31);
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

IFCC::GlobalItemContext::GlobalItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCC::DeclarationContext* IFCC::GlobalItemContext::declaration() {
  return getRuleContext<IFCC::DeclarationContext>(0);
}

IFCC::FunctionContext* IFCC::GlobalItemContext::function() {
  return getRuleContext<IFCC::FunctionContext>(0);
}


size_t IFCC::GlobalItemContext::getRuleIndex() const {
  return IFCC::RuleGlobalItem;
}

antlrcpp::Any IFCC::GlobalItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitGlobalItem(this);
  else
    return visitor->visitChildren(this);
}

IFCC::GlobalItemContext* IFCC::globalItem() {
  GlobalItemContext *_localctx = _tracker.createInstance<GlobalItemContext>(_ctx, getState());
  enterRule(_localctx, 2, IFCC::RuleGlobalItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
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

IFCC::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCC::TypeContext* IFCC::FunctionContext::type() {
  return getRuleContext<IFCC::TypeContext>(0);
}

tree::TerminalNode* IFCC::FunctionContext::IDENTIFIER() {
  return getToken(IFCC::IDENTIFIER, 0);
}

tree::TerminalNode* IFCC::FunctionContext::OPEN_PAR() {
  return getToken(IFCC::OPEN_PAR, 0);
}

tree::TerminalNode* IFCC::FunctionContext::CLOSE_PAR() {
  return getToken(IFCC::CLOSE_PAR, 0);
}

IFCC::BlockContext* IFCC::FunctionContext::block() {
  return getRuleContext<IFCC::BlockContext>(0);
}


size_t IFCC::FunctionContext::getRuleIndex() const {
  return IFCC::RuleFunction;
}

antlrcpp::Any IFCC::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

IFCC::FunctionContext* IFCC::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 4, IFCC::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    type();
    setState(37);
    match(IFCC::IDENTIFIER);
    setState(38);
    match(IFCC::OPEN_PAR);
    setState(39);
    match(IFCC::CLOSE_PAR);
    setState(40);
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

IFCC::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCC::ActionContext* IFCC::InstructionContext::action() {
  return getRuleContext<IFCC::ActionContext>(0);
}

tree::TerminalNode* IFCC::InstructionContext::SEMICOLON() {
  return getToken(IFCC::SEMICOLON, 0);
}


size_t IFCC::InstructionContext::getRuleIndex() const {
  return IFCC::RuleInstruction;
}

antlrcpp::Any IFCC::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

IFCC::InstructionContext* IFCC::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, IFCC::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    action();
    setState(43);
    match(IFCC::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionContext ------------------------------------------------------------------

IFCC::ActionContext::ActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCC::DeclarationContext* IFCC::ActionContext::declaration() {
  return getRuleContext<IFCC::DeclarationContext>(0);
}

IFCC::AffectationContext* IFCC::ActionContext::affectation() {
  return getRuleContext<IFCC::AffectationContext>(0);
}

IFCC::ReturnActContext* IFCC::ActionContext::returnAct() {
  return getRuleContext<IFCC::ReturnActContext>(0);
}


size_t IFCC::ActionContext::getRuleIndex() const {
  return IFCC::RuleAction;
}

antlrcpp::Any IFCC::ActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAction(this);
  else
    return visitor->visitChildren(this);
}

IFCC::ActionContext* IFCC::action() {
  ActionContext *_localctx = _tracker.createInstance<ActionContext>(_ctx, getState());
  enterRule(_localctx, 8, IFCC::RuleAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCC::INT: {
        enterOuterAlt(_localctx, 1);
        setState(45);
        declaration();
        break;
      }

      case IFCC::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(46);
        affectation();
        break;
      }

      case IFCC::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(47);
        returnAct();
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

//----------------- StatementContext ------------------------------------------------------------------

IFCC::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCC::InstructionContext* IFCC::StatementContext::instruction() {
  return getRuleContext<IFCC::InstructionContext>(0);
}

IFCC::IfStmtContext* IFCC::StatementContext::ifStmt() {
  return getRuleContext<IFCC::IfStmtContext>(0);
}

IFCC::BlockContext* IFCC::StatementContext::block() {
  return getRuleContext<IFCC::BlockContext>(0);
}


size_t IFCC::StatementContext::getRuleIndex() const {
  return IFCC::RuleStatement;
}

antlrcpp::Any IFCC::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

IFCC::StatementContext* IFCC::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, IFCC::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCC::RETURN:
      case IFCC::INT:
      case IFCC::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(50);
        instruction();
        break;
      }

      case IFCC::IF: {
        enterOuterAlt(_localctx, 2);
        setState(51);
        ifStmt();
        break;
      }

      case IFCC::OPEN_BRACE: {
        enterOuterAlt(_localctx, 3);
        setState(52);
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

IFCC::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCC::BlockContext::OPEN_BRACE() {
  return getToken(IFCC::OPEN_BRACE, 0);
}

tree::TerminalNode* IFCC::BlockContext::CLOSE_BRACE() {
  return getToken(IFCC::CLOSE_BRACE, 0);
}

std::vector<IFCC::StatementContext *> IFCC::BlockContext::statement() {
  return getRuleContexts<IFCC::StatementContext>();
}

IFCC::StatementContext* IFCC::BlockContext::statement(size_t i) {
  return getRuleContext<IFCC::StatementContext>(i);
}


size_t IFCC::BlockContext::getRuleIndex() const {
  return IFCC::RuleBlock;
}

antlrcpp::Any IFCC::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

IFCC::BlockContext* IFCC::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 12, IFCC::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(IFCC::OPEN_BRACE);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IFCC::IF)
      | (1ULL << IFCC::RETURN)
      | (1ULL << IFCC::OPEN_BRACE)
      | (1ULL << IFCC::INT)
      | (1ULL << IFCC::IDENTIFIER))) != 0)) {
      setState(56);
      statement();
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(62);
    match(IFCC::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

IFCC::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFCC::DeclarationContext::getRuleIndex() const {
  return IFCC::RuleDeclaration;
}

void IFCC::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationMultiContext ------------------------------------------------------------------

IFCC::TypeContext* IFCC::DeclarationMultiContext::type() {
  return getRuleContext<IFCC::TypeContext>(0);
}

std::vector<tree::TerminalNode *> IFCC::DeclarationMultiContext::IDENTIFIER() {
  return getTokens(IFCC::IDENTIFIER);
}

tree::TerminalNode* IFCC::DeclarationMultiContext::IDENTIFIER(size_t i) {
  return getToken(IFCC::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> IFCC::DeclarationMultiContext::COMMA() {
  return getTokens(IFCC::COMMA);
}

tree::TerminalNode* IFCC::DeclarationMultiContext::COMMA(size_t i) {
  return getToken(IFCC::COMMA, i);
}

IFCC::DeclarationMultiContext::DeclarationMultiContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCC::DeclarationMultiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitDeclarationMulti(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationEmptyContext ------------------------------------------------------------------

IFCC::TypeContext* IFCC::DeclarationEmptyContext::type() {
  return getRuleContext<IFCC::TypeContext>(0);
}

tree::TerminalNode* IFCC::DeclarationEmptyContext::IDENTIFIER() {
  return getToken(IFCC::IDENTIFIER, 0);
}

IFCC::DeclarationEmptyContext::DeclarationEmptyContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCC::DeclarationEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitDeclarationEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationAffectationContext ------------------------------------------------------------------

IFCC::TypeContext* IFCC::DeclarationAffectationContext::type() {
  return getRuleContext<IFCC::TypeContext>(0);
}

tree::TerminalNode* IFCC::DeclarationAffectationContext::IDENTIFIER() {
  return getToken(IFCC::IDENTIFIER, 0);
}

tree::TerminalNode* IFCC::DeclarationAffectationContext::EQ() {
  return getToken(IFCC::EQ, 0);
}

IFCC::ExprContext* IFCC::DeclarationAffectationContext::expr() {
  return getRuleContext<IFCC::ExprContext>(0);
}

IFCC::DeclarationAffectationContext::DeclarationAffectationContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCC::DeclarationAffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitDeclarationAffectation(this);
  else
    return visitor->visitChildren(this);
}
IFCC::DeclarationContext* IFCC::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, IFCC::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCC::DeclarationEmptyContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(64);
      type();
      setState(65);
      match(IFCC::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCC::DeclarationAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(67);
      type();
      setState(68);
      match(IFCC::IDENTIFIER);
      setState(69);
      match(IFCC::EQ);
      setState(70);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCC::DeclarationMultiContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(72);
      type();
      setState(73);
      match(IFCC::IDENTIFIER);
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCC::COMMA) {
        setState(74);
        match(IFCC::COMMA);
        setState(75);
        match(IFCC::IDENTIFIER);
        setState(80);
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

IFCC::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCC::TypeContext::INT() {
  return getToken(IFCC::INT, 0);
}


size_t IFCC::TypeContext::getRuleIndex() const {
  return IFCC::RuleType;
}

antlrcpp::Any IFCC::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

IFCC::TypeContext* IFCC::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 16, IFCC::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    dynamic_cast<TypeContext *>(_localctx)->typeName = match(IFCC::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectationContext ------------------------------------------------------------------

IFCC::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCC::AffectationContext::IDENTIFIER() {
  return getToken(IFCC::IDENTIFIER, 0);
}

tree::TerminalNode* IFCC::AffectationContext::EQ() {
  return getToken(IFCC::EQ, 0);
}

IFCC::ExprContext* IFCC::AffectationContext::expr() {
  return getRuleContext<IFCC::ExprContext>(0);
}


size_t IFCC::AffectationContext::getRuleIndex() const {
  return IFCC::RuleAffectation;
}

antlrcpp::Any IFCC::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

IFCC::AffectationContext* IFCC::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 18, IFCC::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(IFCC::IDENTIFIER);
    setState(86);
    match(IFCC::EQ);
    setState(87);
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

IFCC::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCC::IfStmtContext::IF() {
  return getToken(IFCC::IF, 0);
}

tree::TerminalNode* IFCC::IfStmtContext::OPEN_PAR() {
  return getToken(IFCC::OPEN_PAR, 0);
}

tree::TerminalNode* IFCC::IfStmtContext::CLOSE_PAR() {
  return getToken(IFCC::CLOSE_PAR, 0);
}

IFCC::ExprContext* IFCC::IfStmtContext::expr() {
  return getRuleContext<IFCC::ExprContext>(0);
}

std::vector<IFCC::StatementContext *> IFCC::IfStmtContext::statement() {
  return getRuleContexts<IFCC::StatementContext>();
}

IFCC::StatementContext* IFCC::IfStmtContext::statement(size_t i) {
  return getRuleContext<IFCC::StatementContext>(i);
}

tree::TerminalNode* IFCC::IfStmtContext::ELSE() {
  return getToken(IFCC::ELSE, 0);
}


size_t IFCC::IfStmtContext::getRuleIndex() const {
  return IFCC::RuleIfStmt;
}

antlrcpp::Any IFCC::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

IFCC::IfStmtContext* IFCC::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, IFCC::RuleIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(IFCC::IF);
    setState(90);
    match(IFCC::OPEN_PAR);
    setState(91);
    dynamic_cast<IfStmtContext *>(_localctx)->condition = expr(0);
    setState(92);
    match(IFCC::CLOSE_PAR);
    setState(93);
    dynamic_cast<IfStmtContext *>(_localctx)->actionIF = statement();
    setState(96);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(94);
      match(IFCC::ELSE);
      setState(95);
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

//----------------- ReturnActContext ------------------------------------------------------------------

IFCC::ReturnActContext::ReturnActContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCC::ReturnActContext::RETURN() {
  return getToken(IFCC::RETURN, 0);
}

IFCC::ExprContext* IFCC::ReturnActContext::expr() {
  return getRuleContext<IFCC::ExprContext>(0);
}


size_t IFCC::ReturnActContext::getRuleIndex() const {
  return IFCC::RuleReturnAct;
}

antlrcpp::Any IFCC::ReturnActContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitReturnAct(this);
  else
    return visitor->visitChildren(this);
}

IFCC::ReturnActContext* IFCC::returnAct() {
  ReturnActContext *_localctx = _tracker.createInstance<ReturnActContext>(_ctx, getState());
  enterRule(_localctx, 22, IFCC::RuleReturnAct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(IFCC::RETURN);
    setState(99);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

IFCC::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFCC::ExprContext::getRuleIndex() const {
  return IFCC::RuleExpr;
}

void IFCC::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* IFCC::IdentifierContext::IDENTIFIER() {
  return getToken(IFCC::IDENTIFIER, 0);
}

IFCC::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCC::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstContext ------------------------------------------------------------------

tree::TerminalNode* IFCC::ConstContext::CONST() {
  return getToken(IFCC::CONST, 0);
}

IFCC::ConstContext::ConstContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCC::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperationBinaryContext ------------------------------------------------------------------

std::vector<IFCC::ExprContext *> IFCC::OperationBinaryContext::expr() {
  return getRuleContexts<IFCC::ExprContext>();
}

IFCC::ExprContext* IFCC::OperationBinaryContext::expr(size_t i) {
  return getRuleContext<IFCC::ExprContext>(i);
}

tree::TerminalNode* IFCC::OperationBinaryContext::MULT() {
  return getToken(IFCC::MULT, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::DIV() {
  return getToken(IFCC::DIV, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::MOD() {
  return getToken(IFCC::MOD, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::PLUS() {
  return getToken(IFCC::PLUS, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::MIN() {
  return getToken(IFCC::MIN, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::DEQ() {
  return getToken(IFCC::DEQ, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::NEQ() {
  return getToken(IFCC::NEQ, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::GT() {
  return getToken(IFCC::GT, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::GE() {
  return getToken(IFCC::GE, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::LT() {
  return getToken(IFCC::LT, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::LE() {
  return getToken(IFCC::LE, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::AND() {
  return getToken(IFCC::AND, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::DAND() {
  return getToken(IFCC::DAND, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::OR() {
  return getToken(IFCC::OR, 0);
}

tree::TerminalNode* IFCC::OperationBinaryContext::DOR() {
  return getToken(IFCC::DOR, 0);
}

IFCC::OperationBinaryContext::OperationBinaryContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCC::OperationBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitOperationBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisContext ------------------------------------------------------------------

tree::TerminalNode* IFCC::ParenthesisContext::OPEN_PAR() {
  return getToken(IFCC::OPEN_PAR, 0);
}

IFCC::ExprContext* IFCC::ParenthesisContext::expr() {
  return getRuleContext<IFCC::ExprContext>(0);
}

tree::TerminalNode* IFCC::ParenthesisContext::CLOSE_PAR() {
  return getToken(IFCC::CLOSE_PAR, 0);
}

IFCC::ParenthesisContext::ParenthesisContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCC::ParenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitParenthesis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperationUnaryContext ------------------------------------------------------------------

IFCC::ExprContext* IFCC::OperationUnaryContext::expr() {
  return getRuleContext<IFCC::ExprContext>(0);
}

tree::TerminalNode* IFCC::OperationUnaryContext::MIN() {
  return getToken(IFCC::MIN, 0);
}

IFCC::OperationUnaryContext::OperationUnaryContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCC::OperationUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitOperationUnary(this);
  else
    return visitor->visitChildren(this);
}

IFCC::ExprContext* IFCC::expr() {
   return expr(0);
}

IFCC::ExprContext* IFCC::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  IFCC::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  IFCC::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, IFCC::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCC::MIN: {
        _localctx = _tracker.createInstance<OperationUnaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(102);
        dynamic_cast<OperationUnaryContext *>(_localctx)->op = match(IFCC::MIN);
        setState(103);
        expr(4);
        break;
      }

      case IFCC::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(104);
        match(IFCC::CONST);
        break;
      }

      case IFCC::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(105);
        match(IFCC::IDENTIFIER);
        break;
      }

      case IFCC::OPEN_PAR: {
        _localctx = _tracker.createInstance<ParenthesisContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(106);
        match(IFCC::OPEN_PAR);
        setState(107);
        expr(0);
        setState(108);
        match(IFCC::CLOSE_PAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(159);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(157);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(112);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(113);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::MULT);
          setState(114);
          expr(20);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(115);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(116);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::DIV);
          setState(117);
          expr(19);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(118);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(119);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::MOD);
          setState(120);
          expr(18);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(121);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(122);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::PLUS);
          setState(123);
          expr(17);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(124);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(125);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::MIN);
          setState(126);
          expr(16);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(127);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(128);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::DEQ);
          setState(129);
          expr(15);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(130);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(131);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::NEQ);
          setState(132);
          expr(14);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(133);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(134);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::GT);
          setState(135);
          expr(13);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(136);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(137);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::GE);
          setState(138);
          expr(12);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(139);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(140);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::LT);
          setState(141);
          expr(11);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(142);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(143);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::LE);
          setState(144);
          expr(10);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(145);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(146);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::AND);
          setState(147);
          expr(9);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(148);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(149);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::DAND);
          setState(150);
          expr(8);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(151);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(152);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::OR);
          setState(153);
          expr(7);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<OperationBinaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(154);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(155);
          dynamic_cast<OperationBinaryContext *>(_localctx)->op = match(IFCC::DOR);
          setState(156);
          expr(6);
          break;
        }

        } 
      }
      setState(161);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool IFCC::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool IFCC::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 19);
    case 1: return precpred(_ctx, 18);
    case 2: return precpred(_ctx, 17);
    case 3: return precpred(_ctx, 16);
    case 4: return precpred(_ctx, 15);
    case 5: return precpred(_ctx, 14);
    case 6: return precpred(_ctx, 13);
    case 7: return precpred(_ctx, 12);
    case 8: return precpred(_ctx, 11);
    case 9: return precpred(_ctx, 10);
    case 10: return precpred(_ctx, 9);
    case 11: return precpred(_ctx, 8);
    case 12: return precpred(_ctx, 7);
    case 13: return precpred(_ctx, 6);
    case 14: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> IFCC::_decisionToDFA;
atn::PredictionContextCache IFCC::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IFCC::_atn;
std::vector<uint16_t> IFCC::_serializedATN;

std::vector<std::string> IFCC::_ruleNames = {
  "axiom", "globalItem", "function", "instruction", "action", "statement", 
  "block", "declaration", "type", "affectation", "ifStmt", "returnAct", 
  "expr"
};

std::vector<std::string> IFCC::_literalNames = {
  "", "'if'", "'else'", "'while'", "'return'", "'('", "')'", "'{'", "'}'", 
  "'['", "']'", "';'", "','", "'int'", "'char'", "'*'", "'/'", "'+'", "'-'", 
  "'%'", "'='", "'!='", "'=='", "'>'", "'<'", "'>='", "'<='", "'&'", "'&&'", 
  "'|'", "'||'"
};

std::vector<std::string> IFCC::_symbolicNames = {
  "", "IF", "ELSE", "WHILE", "RETURN", "OPEN_PAR", "CLOSE_PAR", "OPEN_BRACE", 
  "CLOSE_BRACE", "OPEN_BRACKET", "CLOSE_BRACKET", "SEMICOLON", "COMMA", 
  "INT", "CHAR", "MULT", "DIV", "PLUS", "MIN", "MOD", "EQ", "NEQ", "DEQ", 
  "GT", "LT", "GE", "LE", "AND", "DAND", "OR", "DOR", "CONST", "IDENTIFIER", 
  "OPERATOR", "COMMENT", "DIRECTIVE", "WS"
};

dfa::Vocabulary IFCC::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> IFCC::_tokenNames;

IFCC::Initializer::Initializer() {
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
    0x3, 0x26, 0xa5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x7, 0x2, 0x1e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x21, 0xb, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x25, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x33, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x38, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x3c, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x3f, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x4f, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x52, 0xb, 0x9, 0x5, 0x9, 0x54, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x63, 0xa, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x71, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xa0, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0xa3, 0xb, 0xe, 0x3, 0xe, 0x2, 0x3, 0x1a, 0xf, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 0x2, 0x2, 
    0xb4, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x26, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x37, 0x3, 0x2, 0x2, 0x2, 0xe, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x53, 0x3, 0x2, 0x2, 0x2, 0x12, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x57, 0x3, 0x2, 0x2, 0x2, 0x16, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x64, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x70, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x1e, 0x5, 0x4, 0x3, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x3, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x25, 0x5, 0x10, 0x9, 0x2, 0x23, 0x25, 0x5, 0x6, 0x4, 
    0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x5, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x5, 0x12, 0xa, 0x2, 0x27, 
    0x28, 0x7, 0x22, 0x2, 0x2, 0x28, 0x29, 0x7, 0x7, 0x2, 0x2, 0x29, 0x2a, 
    0x7, 0x8, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0xe, 0x8, 0x2, 0x2b, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0xa, 0x6, 0x2, 0x2d, 0x2e, 0x7, 0xd, 
    0x2, 0x2, 0x2e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x33, 0x5, 0x10, 0x9, 
    0x2, 0x30, 0x33, 0x5, 0x14, 0xb, 0x2, 0x31, 0x33, 0x5, 0x18, 0xd, 0x2, 
    0x32, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0xb, 0x3, 0x2, 0x2, 0x2, 0x34, 0x38, 
    0x5, 0x8, 0x5, 0x2, 0x35, 0x38, 0x5, 0x16, 0xc, 0x2, 0x36, 0x38, 0x5, 
    0xe, 0x8, 0x2, 0x37, 0x34, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x3d, 0x7, 0x9, 0x2, 0x2, 0x3a, 0x3c, 0x5, 0xc, 0x7, 0x2, 
    0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 
    0xa, 0x2, 0x2, 0x41, 0xf, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x5, 0x12, 
    0xa, 0x2, 0x43, 0x44, 0x7, 0x22, 0x2, 0x2, 0x44, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x46, 0x5, 0x12, 0xa, 0x2, 0x46, 0x47, 0x7, 0x22, 0x2, 0x2, 
    0x47, 0x48, 0x7, 0x16, 0x2, 0x2, 0x48, 0x49, 0x5, 0x1a, 0xe, 0x2, 0x49, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0x12, 0xa, 0x2, 0x4b, 0x50, 
    0x7, 0x22, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0xe, 0x2, 0x2, 0x4d, 0x4f, 0x7, 
    0x22, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x53, 0x42, 0x3, 0x2, 0x2, 0x2, 0x53, 0x45, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x54, 0x11, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 
    0x7, 0xf, 0x2, 0x2, 0x56, 0x13, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 
    0x22, 0x2, 0x2, 0x58, 0x59, 0x7, 0x16, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x1a, 
    0xe, 0x2, 0x5a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x3, 0x2, 
    0x2, 0x5c, 0x5d, 0x7, 0x7, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x1a, 0xe, 0x2, 
    0x5e, 0x5f, 0x7, 0x8, 0x2, 0x2, 0x5f, 0x62, 0x5, 0xc, 0x7, 0x2, 0x60, 
    0x61, 0x7, 0x4, 0x2, 0x2, 0x61, 0x63, 0x5, 0xc, 0x7, 0x2, 0x62, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x6, 0x2, 0x2, 0x65, 0x66, 0x5, 0x1a, 
    0xe, 0x2, 0x66, 0x19, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x8, 0xe, 0x1, 
    0x2, 0x68, 0x69, 0x7, 0x14, 0x2, 0x2, 0x69, 0x71, 0x5, 0x1a, 0xe, 0x6, 
    0x6a, 0x71, 0x7, 0x21, 0x2, 0x2, 0x6b, 0x71, 0x7, 0x22, 0x2, 0x2, 0x6c, 
    0x6d, 0x7, 0x7, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x1a, 0xe, 0x2, 0x6e, 0x6f, 
    0x7, 0x8, 0x2, 0x2, 0x6f, 0x71, 0x3, 0x2, 0x2, 0x2, 0x70, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x71, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x73, 0xc, 0x15, 0x2, 0x2, 0x73, 0x74, 0x7, 0x11, 0x2, 0x2, 
    0x74, 0xa0, 0x5, 0x1a, 0xe, 0x16, 0x75, 0x76, 0xc, 0x14, 0x2, 0x2, 0x76, 
    0x77, 0x7, 0x12, 0x2, 0x2, 0x77, 0xa0, 0x5, 0x1a, 0xe, 0x15, 0x78, 0x79, 
    0xc, 0x13, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x15, 0x2, 0x2, 0x7a, 0xa0, 0x5, 
    0x1a, 0xe, 0x14, 0x7b, 0x7c, 0xc, 0x12, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x13, 
    0x2, 0x2, 0x7d, 0xa0, 0x5, 0x1a, 0xe, 0x13, 0x7e, 0x7f, 0xc, 0x11, 0x2, 
    0x2, 0x7f, 0x80, 0x7, 0x14, 0x2, 0x2, 0x80, 0xa0, 0x5, 0x1a, 0xe, 0x12, 
    0x81, 0x82, 0xc, 0x10, 0x2, 0x2, 0x82, 0x83, 0x7, 0x18, 0x2, 0x2, 0x83, 
    0xa0, 0x5, 0x1a, 0xe, 0x11, 0x84, 0x85, 0xc, 0xf, 0x2, 0x2, 0x85, 0x86, 
    0x7, 0x17, 0x2, 0x2, 0x86, 0xa0, 0x5, 0x1a, 0xe, 0x10, 0x87, 0x88, 0xc, 
    0xe, 0x2, 0x2, 0x88, 0x89, 0x7, 0x19, 0x2, 0x2, 0x89, 0xa0, 0x5, 0x1a, 
    0xe, 0xf, 0x8a, 0x8b, 0xc, 0xd, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x1b, 0x2, 
    0x2, 0x8c, 0xa0, 0x5, 0x1a, 0xe, 0xe, 0x8d, 0x8e, 0xc, 0xc, 0x2, 0x2, 
    0x8e, 0x8f, 0x7, 0x1a, 0x2, 0x2, 0x8f, 0xa0, 0x5, 0x1a, 0xe, 0xd, 0x90, 
    0x91, 0xc, 0xb, 0x2, 0x2, 0x91, 0x92, 0x7, 0x1c, 0x2, 0x2, 0x92, 0xa0, 
    0x5, 0x1a, 0xe, 0xc, 0x93, 0x94, 0xc, 0xa, 0x2, 0x2, 0x94, 0x95, 0x7, 
    0x1d, 0x2, 0x2, 0x95, 0xa0, 0x5, 0x1a, 0xe, 0xb, 0x96, 0x97, 0xc, 0x9, 
    0x2, 0x2, 0x97, 0x98, 0x7, 0x1e, 0x2, 0x2, 0x98, 0xa0, 0x5, 0x1a, 0xe, 
    0xa, 0x99, 0x9a, 0xc, 0x8, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x1f, 0x2, 0x2, 
    0x9b, 0xa0, 0x5, 0x1a, 0xe, 0x9, 0x9c, 0x9d, 0xc, 0x7, 0x2, 0x2, 0x9d, 
    0x9e, 0x7, 0x20, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x1a, 0xe, 0x8, 0x9f, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0x75, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0x87, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x9f, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x96, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0xd, 0x1f, 0x24, 0x32, 0x37, 0x3d, 0x50, 0x53, 0x62, 0x70, 0x9f, 
    0xa1, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

IFCC::Initializer IFCC::_init;
