
// Generated from src/antlr/IFCC.g4 by ANTLR 4.7.2


#include "IFCCVisitor.h"

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
  return "IFCC.g4";
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

IFCCParser::ProgContext* IFCCParser::AxiomContext::prog() {
  return getRuleContext<IFCCParser::ProgContext>(0);
}


size_t IFCCParser::AxiomContext::getRuleIndex() const {
  return IFCCParser::RuleAxiom;
}

antlrcpp::Any IFCCParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::AxiomContext* IFCCParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, IFCCParser::RuleAxiom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    prog();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

IFCCParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IFCCParser::InstructionContext *> IFCCParser::ProgContext::instruction() {
  return getRuleContexts<IFCCParser::InstructionContext>();
}

IFCCParser::InstructionContext* IFCCParser::ProgContext::instruction(size_t i) {
  return getRuleContext<IFCCParser::InstructionContext>(i);
}


size_t IFCCParser::ProgContext::getRuleIndex() const {
  return IFCCParser::RuleProg;
}

antlrcpp::Any IFCCParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::ProgContext* IFCCParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 2, IFCCParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    match(IFCCParser::T__0);
    setState(23);
    match(IFCCParser::T__1);
    setState(24);
    match(IFCCParser::T__2);
    setState(25);
    match(IFCCParser::T__3);
    setState(26);
    match(IFCCParser::T__4);
    setState(30);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IFCCParser::T__0)
      | (1ULL << IFCCParser::T__4)
      | (1ULL << IFCCParser::T__9)
      | (1ULL << IFCCParser::T__11)
      | (1ULL << IFCCParser::IDENTIFIER))) != 0)) {
      setState(27);
      instruction();
      setState(32);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(33);
    match(IFCCParser::T__5);
   
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


size_t IFCCParser::InstructionContext::getRuleIndex() const {
  return IFCCParser::RuleInstruction;
}

antlrcpp::Any IFCCParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::InstructionContext* IFCCParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 4, IFCCParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    action();
    setState(36);
    match(IFCCParser::T__6);
   
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

IFCCParser::IfStmtContext* IFCCParser::ActionContext::ifStmt() {
  return getRuleContext<IFCCParser::IfStmtContext>(0);
}

IFCCParser::BlockContext* IFCCParser::ActionContext::block() {
  return getRuleContext<IFCCParser::BlockContext>(0);
}

IFCCParser::ReturnActContext* IFCCParser::ActionContext::returnAct() {
  return getRuleContext<IFCCParser::ReturnActContext>(0);
}


size_t IFCCParser::ActionContext::getRuleIndex() const {
  return IFCCParser::RuleAction;
}

antlrcpp::Any IFCCParser::ActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAction(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::ActionContext* IFCCParser::action() {
  ActionContext *_localctx = _tracker.createInstance<ActionContext>(_ctx, getState());
  enterRule(_localctx, 6, IFCCParser::RuleAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(43);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(38);
        declaration();
        break;
      }

      case IFCCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(39);
        affectation();
        break;
      }

      case IFCCParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(40);
        ifStmt();
        break;
      }

      case IFCCParser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(41);
        block();
        break;
      }

      case IFCCParser::T__11: {
        enterOuterAlt(_localctx, 5);
        setState(42);
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

//----------------- BlockContext ------------------------------------------------------------------

IFCCParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IFCCParser::ActionContext *> IFCCParser::BlockContext::action() {
  return getRuleContexts<IFCCParser::ActionContext>();
}

IFCCParser::ActionContext* IFCCParser::BlockContext::action(size_t i) {
  return getRuleContext<IFCCParser::ActionContext>(i);
}


size_t IFCCParser::BlockContext::getRuleIndex() const {
  return IFCCParser::RuleBlock;
}

antlrcpp::Any IFCCParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::BlockContext* IFCCParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 8, IFCCParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(IFCCParser::T__4);
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IFCCParser::T__0)
      | (1ULL << IFCCParser::T__4)
      | (1ULL << IFCCParser::T__9)
      | (1ULL << IFCCParser::T__11)
      | (1ULL << IFCCParser::IDENTIFIER))) != 0)) {
      setState(46);
      action();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
    match(IFCCParser::T__5);
   
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

std::vector<tree::TerminalNode *> IFCCParser::DeclarationMultiContext::IDENTIFIER() {
  return getTokens(IFCCParser::IDENTIFIER);
}

tree::TerminalNode* IFCCParser::DeclarationMultiContext::IDENTIFIER(size_t i) {
  return getToken(IFCCParser::IDENTIFIER, i);
}

IFCCParser::DeclarationMultiContext::DeclarationMultiContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::DeclarationMultiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitDeclarationMulti(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationEmptyContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::DeclarationEmptyContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::DeclarationEmptyContext::DeclarationEmptyContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::DeclarationEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitDeclarationEmpty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationAffectationContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::DeclarationAffectationContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::ExprContext* IFCCParser::DeclarationAffectationContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}

IFCCParser::DeclarationAffectationContext::DeclarationAffectationContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::DeclarationAffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitDeclarationAffectation(this);
  else
    return visitor->visitChildren(this);
}
IFCCParser::DeclarationContext* IFCCParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, IFCCParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(69);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationEmptyContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(54);
      match(IFCCParser::T__0);
      setState(55);
      match(IFCCParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(56);
      match(IFCCParser::T__0);
      setState(57);
      match(IFCCParser::IDENTIFIER);
      setState(58);
      match(IFCCParser::T__7);
      setState(59);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationMultiContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(60);
      match(IFCCParser::T__0);
      setState(61);
      match(IFCCParser::IDENTIFIER);
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCCParser::T__8) {
        setState(62);
        match(IFCCParser::T__8);
        setState(63);
        match(IFCCParser::IDENTIFIER);
        setState(68);
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

//----------------- AffectationContext ------------------------------------------------------------------

IFCCParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IFCCParser::AffectationContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::ExprContext* IFCCParser::AffectationContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}


size_t IFCCParser::AffectationContext::getRuleIndex() const {
  return IFCCParser::RuleAffectation;
}

antlrcpp::Any IFCCParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::AffectationContext* IFCCParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 12, IFCCParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(IFCCParser::IDENTIFIER);
    setState(72);
    match(IFCCParser::T__7);
    setState(73);
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

IFCCParser::ExprContext* IFCCParser::IfStmtContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}

std::vector<IFCCParser::ActionContext *> IFCCParser::IfStmtContext::action() {
  return getRuleContexts<IFCCParser::ActionContext>();
}

IFCCParser::ActionContext* IFCCParser::IfStmtContext::action(size_t i) {
  return getRuleContext<IFCCParser::ActionContext>(i);
}


size_t IFCCParser::IfStmtContext::getRuleIndex() const {
  return IFCCParser::RuleIfStmt;
}

antlrcpp::Any IFCCParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::IfStmtContext* IFCCParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, IFCCParser::RuleIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(IFCCParser::T__9);
    setState(76);
    match(IFCCParser::T__2);
    setState(77);
    dynamic_cast<IfStmtContext *>(_localctx)->condition = expr(0);
    setState(78);
    match(IFCCParser::T__3);
    setState(79);
    dynamic_cast<IfStmtContext *>(_localctx)->actionIF = action();
    setState(82);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(80);
      match(IFCCParser::T__10);
      setState(81);
      dynamic_cast<IfStmtContext *>(_localctx)->actionELSE = action();
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

IFCCParser::ReturnActContext::ReturnActContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCCParser::ExprContext* IFCCParser::ReturnActContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}


size_t IFCCParser::ReturnActContext::getRuleIndex() const {
  return IFCCParser::RuleReturnAct;
}

antlrcpp::Any IFCCParser::ReturnActContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitReturnAct(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::ReturnActContext* IFCCParser::returnAct() {
  ReturnActContext *_localctx = _tracker.createInstance<ReturnActContext>(_ctx, getState());
  enterRule(_localctx, 16, IFCCParser::RuleReturnAct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(IFCCParser::T__11);
    setState(85);
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

IFCCParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFCCParser::ExprContext::getRuleIndex() const {
  return IFCCParser::RuleExpr;
}

void IFCCParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::IdentifierContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
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
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperationPlusMinusContext ------------------------------------------------------------------

std::vector<IFCCParser::ExprContext *> IFCCParser::OperationPlusMinusContext::expr() {
  return getRuleContexts<IFCCParser::ExprContext>();
}

IFCCParser::ExprContext* IFCCParser::OperationPlusMinusContext::expr(size_t i) {
  return getRuleContext<IFCCParser::ExprContext>(i);
}

IFCCParser::OperationPlusMinusContext::OperationPlusMinusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::OperationPlusMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitOperationPlusMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperationMultDivContext ------------------------------------------------------------------

std::vector<IFCCParser::ExprContext *> IFCCParser::OperationMultDivContext::expr() {
  return getRuleContexts<IFCCParser::ExprContext>();
}

IFCCParser::ExprContext* IFCCParser::OperationMultDivContext::expr(size_t i) {
  return getRuleContext<IFCCParser::ExprContext>(i);
}

IFCCParser::OperationMultDivContext::OperationMultDivContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::OperationMultDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitOperationMultDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisContext ------------------------------------------------------------------

IFCCParser::ExprContext* IFCCParser::ParenthesisContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}

IFCCParser::ParenthesisContext::ParenthesisContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::ParenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitParenthesis(this);
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
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, IFCCParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(88);
        match(IFCCParser::CONST);
        break;
      }

      case IFCCParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(89);
        match(IFCCParser::IDENTIFIER);
        break;
      }

      case IFCCParser::T__2: {
        _localctx = _tracker.createInstance<ParenthesisContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(90);
        match(IFCCParser::T__2);
        setState(91);
        expr(0);
        setState(92);
        match(IFCCParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(104);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(102);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OperationMultDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(96);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(97);
          dynamic_cast<OperationMultDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == IFCCParser::T__12

          || _la == IFCCParser::T__13)) {
            dynamic_cast<OperationMultDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(98);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OperationPlusMinusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(99);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(100);
          dynamic_cast<OperationPlusMinusContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == IFCCParser::T__14

          || _la == IFCCParser::T__15)) {
            dynamic_cast<OperationPlusMinusContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(101);
          expr(5);
          break;
        }

        } 
      }
      setState(106);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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
    case 9: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool IFCCParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

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
  "axiom", "prog", "instruction", "action", "block", "declaration", "affectation", 
  "ifStmt", "returnAct", "expr"
};

std::vector<std::string> IFCCParser::_literalNames = {
  "", "'int'", "'main'", "'('", "')'", "'{'", "'}'", "';'", "'='", "','", 
  "'if'", "'else'", "'return'", "'*'", "'/'", "'+'", "'-'"
};

std::vector<std::string> IFCCParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "CONST", 
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
    0x3, 0x18, 0x6e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x1f, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x22, 0xb, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x2e, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x7, 0x6, 0x32, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x35, 0xb, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x43, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x46, 0xb, 0x7, 0x5, 0x7, 0x48, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x55, 0xa, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x61, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x69, 0xa, 0xb, 0xc, 0xb, 
    0xe, 0xb, 0x6c, 0xb, 0xb, 0x3, 0xb, 0x2, 0x3, 0x14, 0xc, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x2, 0x4, 0x3, 0x2, 0xf, 0x10, 
    0x3, 0x2, 0x11, 0x12, 0x2, 0x71, 0x2, 0x16, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0x6, 0x25, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x49, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x56, 0x3, 0x2, 0x2, 0x2, 0x14, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x17, 0x5, 0x4, 0x3, 0x2, 0x17, 0x3, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x19, 0x7, 0x3, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x4, 0x2, 0x2, 0x1a, 0x1b, 
    0x7, 0x5, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x6, 0x2, 0x2, 0x1c, 0x20, 0x7, 
    0x7, 0x2, 0x2, 0x1d, 0x1f, 0x5, 0x6, 0x4, 0x2, 0x1e, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x22, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x8, 0x2, 0x2, 0x24, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x5, 0x8, 0x5, 0x2, 0x26, 0x27, 
    0x7, 0x9, 0x2, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2e, 0x5, 
    0xc, 0x7, 0x2, 0x29, 0x2e, 0x5, 0xe, 0x8, 0x2, 0x2a, 0x2e, 0x5, 0x10, 
    0x9, 0x2, 0x2b, 0x2e, 0x5, 0xa, 0x6, 0x2, 0x2c, 0x2e, 0x5, 0x12, 0xa, 
    0x2, 0x2d, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x33, 
    0x7, 0x7, 0x2, 0x2, 0x30, 0x32, 0x5, 0x8, 0x5, 0x2, 0x31, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x8, 0x2, 0x2, 
    0x37, 0xb, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x3, 0x2, 0x2, 0x39, 
    0x48, 0x7, 0x14, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x3, 0x2, 0x2, 0x3b, 0x3c, 
    0x7, 0x14, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0xa, 0x2, 0x2, 0x3d, 0x48, 0x5, 
    0x14, 0xb, 0x2, 0x3e, 0x3f, 0x7, 0x3, 0x2, 0x2, 0x3f, 0x44, 0x7, 0x14, 
    0x2, 0x2, 0x40, 0x41, 0x7, 0xb, 0x2, 0x2, 0x41, 0x43, 0x7, 0x14, 0x2, 
    0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x47, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0xd, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x14, 
    0x2, 0x2, 0x4a, 0x4b, 0x7, 0xa, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x14, 0xb, 
    0x2, 0x4c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0xc, 0x2, 0x2, 
    0x4e, 0x4f, 0x7, 0x5, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x14, 0xb, 0x2, 0x50, 
    0x51, 0x7, 0x6, 0x2, 0x2, 0x51, 0x54, 0x5, 0x8, 0x5, 0x2, 0x52, 0x53, 
    0x7, 0xd, 0x2, 0x2, 0x53, 0x55, 0x5, 0x8, 0x5, 0x2, 0x54, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x7, 0xe, 0x2, 0x2, 0x57, 0x58, 0x5, 0x14, 0xb, 
    0x2, 0x58, 0x13, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x8, 0xb, 0x1, 0x2, 
    0x5a, 0x61, 0x7, 0x13, 0x2, 0x2, 0x5b, 0x61, 0x7, 0x14, 0x2, 0x2, 0x5c, 
    0x5d, 0x7, 0x5, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x14, 0xb, 0x2, 0x5e, 0x5f, 
    0x7, 0x6, 0x2, 0x2, 0x5f, 0x61, 0x3, 0x2, 0x2, 0x2, 0x60, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0xc, 0x7, 0x2, 
    0x2, 0x63, 0x64, 0x9, 0x2, 0x2, 0x2, 0x64, 0x69, 0x5, 0x14, 0xb, 0x8, 
    0x65, 0x66, 0xc, 0x6, 0x2, 0x2, 0x66, 0x67, 0x9, 0x3, 0x2, 0x2, 0x67, 
    0x69, 0x5, 0x14, 0xb, 0x7, 0x68, 0x62, 0x3, 0x2, 0x2, 0x2, 0x68, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0xb, 0x20, 0x2d, 0x33, 0x44, 
    0x47, 0x54, 0x60, 0x68, 0x6a, 
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
