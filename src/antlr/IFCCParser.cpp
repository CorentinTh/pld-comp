
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
    setState(14);
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
    setState(16);
    match(IFCCParser::T__0);
    setState(17);
    match(IFCCParser::T__1);
    setState(18);
    match(IFCCParser::T__2);
    setState(19);
    match(IFCCParser::T__3);
    setState(20);
    match(IFCCParser::T__4);
    setState(24);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IFCCParser::T__0)
      | (1ULL << IFCCParser::T__8)
      | (1ULL << IFCCParser::IDENTIFIER))) != 0)) {
      setState(21);
      instruction();
      setState(26);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(27);
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

IFCCParser::ExpressionContext* IFCCParser::InstructionContext::expression() {
  return getRuleContext<IFCCParser::ExpressionContext>(0);
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
    setState(29);
    expression();
    setState(30);
    match(IFCCParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

IFCCParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCCParser::DeclarationContext* IFCCParser::ExpressionContext::declaration() {
  return getRuleContext<IFCCParser::DeclarationContext>(0);
}

IFCCParser::AffectationContext* IFCCParser::ExpressionContext::affectation() {
  return getRuleContext<IFCCParser::AffectationContext>(0);
}

IFCCParser::ReturnExprContext* IFCCParser::ExpressionContext::returnExpr() {
  return getRuleContext<IFCCParser::ReturnExprContext>(0);
}


size_t IFCCParser::ExpressionContext::getRuleIndex() const {
  return IFCCParser::RuleExpression;
}

antlrcpp::Any IFCCParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::ExpressionContext* IFCCParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, IFCCParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(35);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(32);
        declaration();
        break;
      }

      case IFCCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(33);
        affectation();
        break;
      }

      case IFCCParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(34);
        returnExpr();
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

//----------------- DeclarationAssignContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> IFCCParser::DeclarationAssignContext::IDENTIFIER() {
  return getTokens(IFCCParser::IDENTIFIER);
}

tree::TerminalNode* IFCCParser::DeclarationAssignContext::IDENTIFIER(size_t i) {
  return getToken(IFCCParser::IDENTIFIER, i);
}

tree::TerminalNode* IFCCParser::DeclarationAssignContext::ASSIGNMENT_OPERATOR() {
  return getToken(IFCCParser::ASSIGNMENT_OPERATOR, 0);
}

IFCCParser::DeclarationAssignContext::DeclarationAssignContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::DeclarationAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitDeclarationAssign(this);
  else
    return visitor->visitChildren(this);
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
//----------------- DeclarationConstContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::DeclarationConstContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

tree::TerminalNode* IFCCParser::DeclarationConstContext::ASSIGNMENT_OPERATOR() {
  return getToken(IFCCParser::ASSIGNMENT_OPERATOR, 0);
}

tree::TerminalNode* IFCCParser::DeclarationConstContext::CONST() {
  return getToken(IFCCParser::CONST, 0);
}

IFCCParser::DeclarationConstContext::DeclarationConstContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::DeclarationConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitDeclarationConst(this);
  else
    return visitor->visitChildren(this);
}
IFCCParser::DeclarationContext* IFCCParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, IFCCParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(54);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationConstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(37);
      match(IFCCParser::T__0);
      setState(38);
      match(IFCCParser::IDENTIFIER);
      setState(39);
      match(IFCCParser::ASSIGNMENT_OPERATOR);
      setState(40);
      match(IFCCParser::CONST);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationAssignContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(41);
      match(IFCCParser::T__0);
      setState(42);
      match(IFCCParser::IDENTIFIER);
      setState(43);
      match(IFCCParser::ASSIGNMENT_OPERATOR);
      setState(44);
      match(IFCCParser::IDENTIFIER);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<IFCCParser::DeclarationMultiContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(45);
      match(IFCCParser::T__0);
      setState(46);
      match(IFCCParser::IDENTIFIER);
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IFCCParser::T__7) {
        setState(47);
        match(IFCCParser::T__7);
        setState(48);
        match(IFCCParser::IDENTIFIER);
        setState(53);
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


size_t IFCCParser::AffectationContext::getRuleIndex() const {
  return IFCCParser::RuleAffectation;
}

void IFCCParser::AffectationContext::copyFrom(AffectationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AffectationConstContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::AffectationConstContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

tree::TerminalNode* IFCCParser::AffectationConstContext::ASSIGNMENT_OPERATOR() {
  return getToken(IFCCParser::ASSIGNMENT_OPERATOR, 0);
}

tree::TerminalNode* IFCCParser::AffectationConstContext::CONST() {
  return getToken(IFCCParser::CONST, 0);
}

IFCCParser::AffectationConstContext::AffectationConstContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::AffectationConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAffectationConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectationIdentifierContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> IFCCParser::AffectationIdentifierContext::IDENTIFIER() {
  return getTokens(IFCCParser::IDENTIFIER);
}

tree::TerminalNode* IFCCParser::AffectationIdentifierContext::IDENTIFIER(size_t i) {
  return getToken(IFCCParser::IDENTIFIER, i);
}

tree::TerminalNode* IFCCParser::AffectationIdentifierContext::ASSIGNMENT_OPERATOR() {
  return getToken(IFCCParser::ASSIGNMENT_OPERATOR, 0);
}

IFCCParser::AffectationIdentifierContext::AffectationIdentifierContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::AffectationIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitAffectationIdentifier(this);
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
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<IFCCParser::AffectationIdentifierContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(56);
      match(IFCCParser::IDENTIFIER);
      setState(57);
      match(IFCCParser::ASSIGNMENT_OPERATOR);
      setState(58);
      match(IFCCParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<IFCCParser::AffectationConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(59);
      match(IFCCParser::IDENTIFIER);
      setState(60);
      match(IFCCParser::ASSIGNMENT_OPERATOR);
      setState(61);
      match(IFCCParser::CONST);
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

//----------------- ReturnExprContext ------------------------------------------------------------------

IFCCParser::ReturnExprContext::ReturnExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFCCParser::ReturnExprContext::getRuleIndex() const {
  return IFCCParser::RuleReturnExpr;
}

void IFCCParser::ReturnExprContext::copyFrom(ReturnExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ReturnIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::ReturnIdentifierContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::ReturnIdentifierContext::ReturnIdentifierContext(ReturnExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::ReturnIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitReturnIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnConstContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::ReturnConstContext::CONST() {
  return getToken(IFCCParser::CONST, 0);
}

IFCCParser::ReturnConstContext::ReturnConstContext(ReturnExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::ReturnConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitReturnConst(this);
  else
    return visitor->visitChildren(this);
}
IFCCParser::ReturnExprContext* IFCCParser::returnExpr() {
  ReturnExprContext *_localctx = _tracker.createInstance<ReturnExprContext>(_ctx, getState());
  enterRule(_localctx, 12, IFCCParser::RuleReturnExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ReturnExprContext *>(_tracker.createInstance<IFCCParser::ReturnIdentifierContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(64);
      match(IFCCParser::T__8);
      setState(65);
      match(IFCCParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ReturnExprContext *>(_tracker.createInstance<IFCCParser::ReturnConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(66);
      match(IFCCParser::T__8);
      setState(67);
      match(IFCCParser::CONST);
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
std::vector<dfa::DFA> IFCCParser::_decisionToDFA;
atn::PredictionContextCache IFCCParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IFCCParser::_atn;
std::vector<uint16_t> IFCCParser::_serializedATN;

std::vector<std::string> IFCCParser::_ruleNames = {
  "axiom", "prog", "instruction", "expression", "declaration", "affectation", 
  "returnExpr"
};

std::vector<std::string> IFCCParser::_literalNames = {
  "", "'int'", "'main'", "'('", "')'", "'{'", "'}'", "';'", "','", "'return'", 
  "", "", "", "", "", "'='"
};

std::vector<std::string> IFCCParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "CONST", "IDENTIFIER", "COMMENT", 
  "DIRECTIVE", "WS", "ASSIGNMENT_OPERATOR"
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
    0x3, 0x11, 0x49, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x19, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x1c, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x26, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x34, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0x37, 0xb, 0x6, 0x5, 0x6, 0x39, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x41, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x47, 0xa, 0x8, 0x3, 0x8, 0x2, 
    0x2, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x2, 0x2, 0x2, 0x49, 0x2, 
    0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x12, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x40, 0x3, 0x2, 0x2, 0x2, 0xe, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x11, 0x5, 0x4, 0x3, 0x2, 0x11, 0x3, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x13, 0x7, 0x3, 0x2, 0x2, 0x13, 0x14, 0x7, 0x4, 0x2, 0x2, 0x14, 0x15, 
    0x7, 0x5, 0x2, 0x2, 0x15, 0x16, 0x7, 0x6, 0x2, 0x2, 0x16, 0x1a, 0x7, 
    0x7, 0x2, 0x2, 0x17, 0x19, 0x5, 0x6, 0x4, 0x2, 0x18, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x19, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x8, 0x2, 0x2, 0x1e, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x5, 0x8, 0x5, 0x2, 0x20, 0x21, 
    0x7, 0x9, 0x2, 0x2, 0x21, 0x7, 0x3, 0x2, 0x2, 0x2, 0x22, 0x26, 0x5, 
    0xa, 0x6, 0x2, 0x23, 0x26, 0x5, 0xc, 0x7, 0x2, 0x24, 0x26, 0x5, 0xe, 
    0x8, 0x2, 0x25, 0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0x28, 0x7, 0x3, 0x2, 0x2, 0x28, 0x29, 0x7, 0xd, 0x2, 0x2, 0x29, 
    0x2a, 0x7, 0x11, 0x2, 0x2, 0x2a, 0x39, 0x7, 0xc, 0x2, 0x2, 0x2b, 0x2c, 
    0x7, 0x3, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0xd, 0x2, 0x2, 0x2d, 0x2e, 0x7, 
    0x11, 0x2, 0x2, 0x2e, 0x39, 0x7, 0xd, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x3, 
    0x2, 0x2, 0x30, 0x35, 0x7, 0xd, 0x2, 0x2, 0x31, 0x32, 0x7, 0xa, 0x2, 
    0x2, 0x32, 0x34, 0x7, 0xd, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x27, 0x3, 0x2, 0x2, 0x2, 0x38, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x39, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x7, 0xd, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x11, 0x2, 
    0x2, 0x3c, 0x41, 0x7, 0xd, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0xd, 0x2, 0x2, 
    0x3e, 0x3f, 0x7, 0x11, 0x2, 0x2, 0x3f, 0x41, 0x7, 0xc, 0x2, 0x2, 0x40, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x41, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0xb, 0x2, 0x2, 0x43, 0x47, 0x7, 
    0xd, 0x2, 0x2, 0x44, 0x45, 0x7, 0xb, 0x2, 0x2, 0x45, 0x47, 0x7, 0xc, 
    0x2, 0x2, 0x46, 0x42, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0xf, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1a, 0x25, 0x35, 0x38, 0x40, 
    0x46, 
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
