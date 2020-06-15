
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
    setState(16);
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
    setState(18);
    match(IFCCParser::T__0);
    setState(19);
    match(IFCCParser::T__1);
    setState(20);
    match(IFCCParser::T__2);
    setState(21);
    match(IFCCParser::T__3);
    setState(22);
    match(IFCCParser::T__4);
    setState(26);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IFCCParser::T__0)
      | (1ULL << IFCCParser::T__8)
      | (1ULL << IFCCParser::IDENTIFIER))) != 0)) {
      setState(23);
      instruction();
      setState(28);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(29);
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
    setState(31);
    action();
    setState(32);
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
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(34);
        declaration();
        break;
      }

      case IFCCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(35);
        affectation();
        break;
      }

      case IFCCParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(36);
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
  enterRule(_localctx, 8, IFCCParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationEmptyContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(39);
      match(IFCCParser::T__0);
      setState(40);
      match(IFCCParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationAffectationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(41);
      match(IFCCParser::T__0);
      setState(42);
      match(IFCCParser::IDENTIFIER);
      setState(43);
      match(IFCCParser::T__7);
      setState(44);
      expr(0);
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
  enterRule(_localctx, 10, IFCCParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(IFCCParser::IDENTIFIER);
    setState(48);
    match(IFCCParser::T__7);
    setState(49);
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
  enterRule(_localctx, 12, IFCCParser::RuleReturnAct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(IFCCParser::T__8);
    setState(52);
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
//----------------- OperationContext ------------------------------------------------------------------

std::vector<IFCCParser::ExprContext *> IFCCParser::OperationContext::expr() {
  return getRuleContexts<IFCCParser::ExprContext>();
}

IFCCParser::ExprContext* IFCCParser::OperationContext::expr(size_t i) {
  return getRuleContext<IFCCParser::ExprContext>(i);
}

tree::TerminalNode* IFCCParser::OperationContext::OPERATOR() {
  return getToken(IFCCParser::OPERATOR, 0);
}

IFCCParser::OperationContext::OperationContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::OperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitOperation(this);
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
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, IFCCParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(55);
        match(IFCCParser::CONST);
        break;
      }

      case IFCCParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(56);
        match(IFCCParser::IDENTIFIER);
        break;
      }

      case IFCCParser::T__2: {
        _localctx = _tracker.createInstance<ParenthesisContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(57);
        match(IFCCParser::T__2);
        setState(58);
        expr(0);
        setState(59);
        match(IFCCParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<OperationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpr);
        setState(63);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(64);
        match(IFCCParser::OPERATOR);
        setState(65);
        expr(5); 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
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
    case 7: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool IFCCParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

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
  "axiom", "prog", "instruction", "action", "declaration", "affectation", 
  "returnAct", "expr"
};

std::vector<std::string> IFCCParser::_literalNames = {
  "", "'int'", "'main'", "'('", "')'", "'{'", "'}'", "';'", "'='", "'return'"
};

std::vector<std::string> IFCCParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "CONST", "IDENTIFIER", "OPERATOR", 
  "COMMENT", "DIRECTIVE", "WS"
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
    0x3, 0x11, 0x4a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1b, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x1e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x28, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x30, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x40, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x7, 0x9, 0x45, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x48, 0xb, 0x9, 0x3, 0x9, 
    0x2, 0x3, 0x10, 0xa, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x2, 0x2, 
    0x2, 0x48, 0x2, 0x12, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x21, 0x3, 0x2, 0x2, 0x2, 0x8, 0x27, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x5, 
    0x4, 0x3, 0x2, 0x13, 0x3, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x7, 0x3, 
    0x2, 0x2, 0x15, 0x16, 0x7, 0x4, 0x2, 0x2, 0x16, 0x17, 0x7, 0x5, 0x2, 
    0x2, 0x17, 0x18, 0x7, 0x6, 0x2, 0x2, 0x18, 0x1c, 0x7, 0x7, 0x2, 0x2, 
    0x19, 0x1b, 0x5, 0x6, 0x4, 0x2, 0x1a, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0x1e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x1d, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x8, 0x2, 0x2, 0x20, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x22, 0x5, 0x8, 0x5, 0x2, 0x22, 0x23, 0x7, 0x9, 0x2, 
    0x2, 0x23, 0x7, 0x3, 0x2, 0x2, 0x2, 0x24, 0x28, 0x5, 0xa, 0x6, 0x2, 
    0x25, 0x28, 0x5, 0xc, 0x7, 0x2, 0x26, 0x28, 0x5, 0xe, 0x8, 0x2, 0x27, 
    0x24, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x26, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x9, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 
    0x3, 0x2, 0x2, 0x2a, 0x30, 0x7, 0xd, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x3, 
    0x2, 0x2, 0x2c, 0x2d, 0x7, 0xd, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0xa, 0x2, 
    0x2, 0x2e, 0x30, 0x5, 0x10, 0x9, 0x2, 0x2f, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x2f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x30, 0xb, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x32, 0x7, 0xd, 0x2, 0x2, 0x32, 0x33, 0x7, 0xa, 0x2, 0x2, 0x33, 0x34, 
    0x5, 0x10, 0x9, 0x2, 0x34, 0xd, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 
    0xb, 0x2, 0x2, 0x36, 0x37, 0x5, 0x10, 0x9, 0x2, 0x37, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x39, 0x8, 0x9, 0x1, 0x2, 0x39, 0x40, 0x7, 0xc, 0x2, 
    0x2, 0x3a, 0x40, 0x7, 0xd, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x5, 0x2, 0x2, 
    0x3c, 0x3d, 0x5, 0x10, 0x9, 0x2, 0x3d, 0x3e, 0x7, 0x6, 0x2, 0x2, 0x3e, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x40, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x42, 0xc, 0x6, 0x2, 0x2, 0x42, 0x43, 0x7, 0xe, 
    0x2, 0x2, 0x43, 0x45, 0x5, 0x10, 0x9, 0x7, 0x44, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x11, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x7, 0x1c, 0x27, 0x2f, 0x3f, 0x46, 
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
