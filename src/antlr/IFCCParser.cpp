
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

std::vector<IFCCParser::FunctionDeclarationContext *> IFCCParser::ProgContext::functionDeclaration() {
  return getRuleContexts<IFCCParser::FunctionDeclarationContext>();
}

IFCCParser::FunctionDeclarationContext* IFCCParser::ProgContext::functionDeclaration(size_t i) {
  return getRuleContext<IFCCParser::FunctionDeclarationContext>(i);
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
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      functionDeclaration();
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == IFCCParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

IFCCParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFCCParser::FunctionDeclarationContext::getRuleIndex() const {
  return IFCCParser::RuleFunctionDeclaration;
}

void IFCCParser::FunctionDeclarationContext::copyFrom(FunctionDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ZeroArgumentsFunctionContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::ZeroArgumentsFunctionContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

std::vector<IFCCParser::InstructionContext *> IFCCParser::ZeroArgumentsFunctionContext::instruction() {
  return getRuleContexts<IFCCParser::InstructionContext>();
}

IFCCParser::InstructionContext* IFCCParser::ZeroArgumentsFunctionContext::instruction(size_t i) {
  return getRuleContext<IFCCParser::InstructionContext>(i);
}

IFCCParser::ZeroArgumentsFunctionContext::ZeroArgumentsFunctionContext(FunctionDeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::ZeroArgumentsFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitZeroArgumentsFunction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiArgumentFunctionContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> IFCCParser::MultiArgumentFunctionContext::IDENTIFIER() {
  return getTokens(IFCCParser::IDENTIFIER);
}

tree::TerminalNode* IFCCParser::MultiArgumentFunctionContext::IDENTIFIER(size_t i) {
  return getToken(IFCCParser::IDENTIFIER, i);
}

std::vector<IFCCParser::InstructionContext *> IFCCParser::MultiArgumentFunctionContext::instruction() {
  return getRuleContexts<IFCCParser::InstructionContext>();
}

IFCCParser::InstructionContext* IFCCParser::MultiArgumentFunctionContext::instruction(size_t i) {
  return getRuleContext<IFCCParser::InstructionContext>(i);
}

IFCCParser::MultiArgumentFunctionContext::MultiArgumentFunctionContext(FunctionDeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::MultiArgumentFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitMultiArgumentFunction(this);
  else
    return visitor->visitChildren(this);
}
IFCCParser::FunctionDeclarationContext* IFCCParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, IFCCParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FunctionDeclarationContext *>(_tracker.createInstance<IFCCParser::ZeroArgumentsFunctionContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(27);
      match(IFCCParser::T__0);
      setState(28);
      match(IFCCParser::IDENTIFIER);
      setState(29);
      match(IFCCParser::T__1);
      setState(30);
      match(IFCCParser::T__2);
      setState(31);
      match(IFCCParser::T__3);
      setState(35);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IFCCParser::T__0)
        | (1ULL << IFCCParser::T__9)
        | (1ULL << IFCCParser::IDENTIFIER))) != 0)) {
        setState(32);
        instruction();
        setState(37);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(38);
      match(IFCCParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FunctionDeclarationContext *>(_tracker.createInstance<IFCCParser::MultiArgumentFunctionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(39);
      match(IFCCParser::T__0);
      setState(40);
      match(IFCCParser::IDENTIFIER);
      setState(41);
      match(IFCCParser::T__1);
      setState(42);
      match(IFCCParser::T__0);
      setState(43);
      match(IFCCParser::IDENTIFIER);
      setState(48);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCCParser::T__5) {
        setState(44);
        match(IFCCParser::T__5);
        setState(45);
        match(IFCCParser::IDENTIFIER);
        setState(50);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(51);
      match(IFCCParser::T__2);
      setState(52);
      match(IFCCParser::T__3);
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IFCCParser::T__0)
        | (1ULL << IFCCParser::T__9)
        | (1ULL << IFCCParser::IDENTIFIER))) != 0)) {
        setState(53);
        instruction();
        setState(58);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(59);
      match(IFCCParser::T__4);
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

//----------------- FunctionCallContext ------------------------------------------------------------------

IFCCParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFCCParser::FunctionCallContext::getRuleIndex() const {
  return IFCCParser::RuleFunctionCall;
}

void IFCCParser::FunctionCallContext::copyFrom(FunctionCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ZeroArgumentFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::ZeroArgumentFunctionCallContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::ZeroArgumentFunctionCallContext::ZeroArgumentFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::ZeroArgumentFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitZeroArgumentFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiArgumentFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::MultiArgumentFunctionCallContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

std::vector<tree::TerminalNode *> IFCCParser::MultiArgumentFunctionCallContext::CONST() {
  return getTokens(IFCCParser::CONST);
}

tree::TerminalNode* IFCCParser::MultiArgumentFunctionCallContext::CONST(size_t i) {
  return getToken(IFCCParser::CONST, i);
}

IFCCParser::MultiArgumentFunctionCallContext::MultiArgumentFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::MultiArgumentFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitMultiArgumentFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
IFCCParser::FunctionCallContext* IFCCParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 6, IFCCParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<IFCCParser::ZeroArgumentFunctionCallContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(62);
      match(IFCCParser::IDENTIFIER);
      setState(63);
      match(IFCCParser::T__1);
      setState(64);
      match(IFCCParser::T__2);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<IFCCParser::MultiArgumentFunctionCallContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(65);
      match(IFCCParser::IDENTIFIER);
      setState(66);
      match(IFCCParser::T__1);
      setState(67);
      match(IFCCParser::CONST);
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCCParser::T__6) {
        setState(68);
        match(IFCCParser::T__6);
        setState(69);
        match(IFCCParser::CONST);
        setState(74);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(75);
      match(IFCCParser::T__2);
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
  enterRule(_localctx, 8, IFCCParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    action();
    setState(79);
    match(IFCCParser::T__7);
   
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
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAction(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::ActionContext* IFCCParser::action() {
  ActionContext *_localctx = _tracker.createInstance<ActionContext>(_ctx, getState());
  enterRule(_localctx, 10, IFCCParser::RuleAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(81);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(82);
      affectation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(83);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(84);
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
  enterRule(_localctx, 12, IFCCParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationEmptyContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(87);
      match(IFCCParser::T__0);
      setState(88);
      match(IFCCParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(89);
      match(IFCCParser::T__0);
      setState(90);
      match(IFCCParser::IDENTIFIER);
      setState(91);
      match(IFCCParser::T__8);
      setState(92);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationMultiContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(93);
      match(IFCCParser::T__0);
      setState(94);
      match(IFCCParser::IDENTIFIER);
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCCParser::T__6) {
        setState(95);
        match(IFCCParser::T__6);
        setState(96);
        match(IFCCParser::IDENTIFIER);
        setState(101);
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
  enterRule(_localctx, 14, IFCCParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(IFCCParser::IDENTIFIER);
    setState(105);
    match(IFCCParser::T__8);
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
    setState(108);
    match(IFCCParser::T__9);
    setState(109);
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
    setState(118);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(112);
        match(IFCCParser::CONST);
        break;
      }

      case IFCCParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(113);
        match(IFCCParser::IDENTIFIER);
        break;
      }

      case IFCCParser::T__1: {
        _localctx = _tracker.createInstance<ParenthesisContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(114);
        match(IFCCParser::T__1);
        setState(115);
        expr(0);
        setState(116);
        match(IFCCParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(128);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(126);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OperationMultDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(120);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(121);
          dynamic_cast<OperationMultDivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == IFCCParser::T__10

          || _la == IFCCParser::T__11)) {
            dynamic_cast<OperationMultDivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(122);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OperationPlusMinusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(123);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(124);
          dynamic_cast<OperationPlusMinusContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == IFCCParser::T__12

          || _la == IFCCParser::T__13)) {
            dynamic_cast<OperationPlusMinusContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(125);
          expr(5);
          break;
        }

        } 
      }
      setState(130);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
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
  "axiom", "prog", "functionDeclaration", "functionCall", "instruction", 
  "action", "declaration", "affectation", "returnAct", "expr"
};

std::vector<std::string> IFCCParser::_literalNames = {
  "", "'int'", "'('", "')'", "'{'", "'}'", "', int'", "','", "';'", "'='", 
  "'return'", "'*'", "'/'", "'+'", "'-'"
};

std::vector<std::string> IFCCParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "CONST", "IDENTIFIER", 
  "OPERATOR", "COMMENT", "DIRECTIVE", "WS"
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
    0x3, 0x16, 0x86, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x1a, 0xa, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0x1b, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x24, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x27, 0xb, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x31, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x34, 0xb, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x39, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x3c, 0xb, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3f, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0x49, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x4c, 0xb, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x4f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x58, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x7, 0x8, 0x64, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x67, 0xb, 0x8, 0x5, 0x8, 
    0x69, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0x79, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x81, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x84, 0xb, 0xb, 0x3, 0xb, 0x2, 0x3, 0x14, 0xc, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x2, 0x4, 0x3, 0x2, 0xd, 0xe, 0x3, 
    0x2, 0xf, 0x10, 0x2, 0x8c, 0x2, 0x16, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x50, 0x3, 0x2, 0x2, 0x2, 0xc, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x68, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x78, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 
    0x5, 0x4, 0x3, 0x2, 0x17, 0x3, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1a, 0x5, 
    0x6, 0x4, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x3, 0x2, 0x2, 
    0x1e, 0x1f, 0x7, 0x12, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x4, 0x2, 0x2, 0x20, 
    0x21, 0x7, 0x5, 0x2, 0x2, 0x21, 0x25, 0x7, 0x6, 0x2, 0x2, 0x22, 0x24, 
    0x5, 0xa, 0x6, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x28, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x3f, 0x7, 0x7, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x3, 0x2, 0x2, 
    0x2a, 0x2b, 0x7, 0x12, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x4, 0x2, 0x2, 0x2c, 
    0x2d, 0x7, 0x3, 0x2, 0x2, 0x2d, 0x32, 0x7, 0x12, 0x2, 0x2, 0x2e, 0x2f, 
    0x7, 0x8, 0x2, 0x2, 0x2f, 0x31, 0x7, 0x12, 0x2, 0x2, 0x30, 0x2e, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x34, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x5, 0x2, 0x2, 
    0x36, 0x3a, 0x7, 0x6, 0x2, 0x2, 0x37, 0x39, 0x5, 0xa, 0x6, 0x2, 0x38, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3d, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x7, 0x7, 
    0x2, 0x2, 0x3e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x12, 0x2, 0x2, 
    0x41, 0x42, 0x7, 0x4, 0x2, 0x2, 0x42, 0x4f, 0x7, 0x5, 0x2, 0x2, 0x43, 
    0x44, 0x7, 0x12, 0x2, 0x2, 0x44, 0x45, 0x7, 0x4, 0x2, 0x2, 0x45, 0x4a, 
    0x7, 0x11, 0x2, 0x2, 0x46, 0x47, 0x7, 0x9, 0x2, 0x2, 0x47, 0x49, 0x7, 
    0x11, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4f, 0x7, 0x5, 0x2, 0x2, 0x4e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 
    0x5, 0xc, 0x7, 0x2, 0x51, 0x52, 0x7, 0xa, 0x2, 0x2, 0x52, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x58, 0x5, 0xe, 0x8, 0x2, 0x54, 0x58, 0x5, 0x10, 
    0x9, 0x2, 0x55, 0x58, 0x5, 0x8, 0x5, 0x2, 0x56, 0x58, 0x5, 0x12, 0xa, 
    0x2, 0x57, 0x53, 0x3, 0x2, 0x2, 0x2, 0x57, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x3, 0x2, 0x2, 0x5a, 0x69, 
    0x7, 0x12, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x3, 0x2, 0x2, 0x5c, 0x5d, 0x7, 
    0x12, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0xb, 0x2, 0x2, 0x5e, 0x69, 0x5, 0x14, 
    0xb, 0x2, 0x5f, 0x60, 0x7, 0x3, 0x2, 0x2, 0x60, 0x65, 0x7, 0x12, 0x2, 
    0x2, 0x61, 0x62, 0x7, 0x9, 0x2, 0x2, 0x62, 0x64, 0x7, 0x12, 0x2, 0x2, 
    0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x68, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x69, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x12, 0x2, 
    0x2, 0x6b, 0x6c, 0x7, 0xb, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x14, 0xb, 0x2, 
    0x6d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0xc, 0x2, 0x2, 0x6f, 
    0x70, 0x5, 0x14, 0xb, 0x2, 0x70, 0x13, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 
    0x8, 0xb, 0x1, 0x2, 0x72, 0x79, 0x7, 0x11, 0x2, 0x2, 0x73, 0x79, 0x7, 
    0x12, 0x2, 0x2, 0x74, 0x75, 0x7, 0x4, 0x2, 0x2, 0x75, 0x76, 0x5, 0x14, 
    0xb, 0x2, 0x76, 0x77, 0x7, 0x5, 0x2, 0x2, 0x77, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x71, 0x3, 0x2, 0x2, 0x2, 0x78, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x74, 0x3, 0x2, 0x2, 0x2, 0x79, 0x82, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x7b, 0xc, 0x7, 0x2, 0x2, 0x7b, 0x7c, 0x9, 0x2, 0x2, 0x2, 0x7c, 0x81, 
    0x5, 0x14, 0xb, 0x8, 0x7d, 0x7e, 0xc, 0x6, 0x2, 0x2, 0x7e, 0x7f, 0x9, 
    0x3, 0x2, 0x2, 0x7f, 0x81, 0x5, 0x14, 0xb, 0x7, 0x80, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x81, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x83, 0x15, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0xf, 
    0x1b, 0x25, 0x32, 0x3a, 0x3e, 0x4a, 0x4e, 0x57, 0x65, 0x68, 0x78, 0x80, 
    0x82, 
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
