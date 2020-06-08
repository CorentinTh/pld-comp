
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
    setState(8);
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

std::vector<IFCCParser::InstContext *> IFCCParser::ProgContext::inst() {
  return getRuleContexts<IFCCParser::InstContext>();
}

IFCCParser::InstContext* IFCCParser::ProgContext::inst(size_t i) {
  return getRuleContext<IFCCParser::InstContext>(i);
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
    setState(10);
    match(IFCCParser::T__0);
    setState(11);
    match(IFCCParser::T__1);
    setState(12);
    match(IFCCParser::T__2);
    setState(13);
    match(IFCCParser::T__3);
    setState(14);
    match(IFCCParser::T__4);
    setState(18);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IFCCParser::T__0

    || _la == IFCCParser::RETURN) {
      setState(15);
      inst();
      setState(20);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(21);
    match(IFCCParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstContext ------------------------------------------------------------------

IFCCParser::InstContext::InstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IFCCParser::ExprContext* IFCCParser::InstContext::expr() {
  return getRuleContext<IFCCParser::ExprContext>(0);
}


size_t IFCCParser::InstContext::getRuleIndex() const {
  return IFCCParser::RuleInst;
}

antlrcpp::Any IFCCParser::InstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitInst(this);
  else
    return visitor->visitChildren(this);
}

IFCCParser::InstContext* IFCCParser::inst() {
  InstContext *_localctx = _tracker.createInstance<InstContext>(_ctx, getState());
  enterRule(_localctx, 4, IFCCParser::RuleInst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23);
    expr();
    setState(24);
    match(IFCCParser::T__6);
   
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

//----------------- IdentExprContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::IdentExprContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

tree::TerminalNode* IFCCParser::IdentExprContext::CONST() {
  return getToken(IFCCParser::CONST, 0);
}

IFCCParser::IdentExprContext::IdentExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::IdentExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitIdentExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnExprContext ------------------------------------------------------------------

tree::TerminalNode* IFCCParser::ReturnExprContext::RETURN() {
  return getToken(IFCCParser::RETURN, 0);
}

tree::TerminalNode* IFCCParser::ReturnExprContext::IDENTIFIER() {
  return getToken(IFCCParser::IDENTIFIER, 0);
}

IFCCParser::ReturnExprContext::ReturnExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any IFCCParser::ReturnExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFCCVisitor*>(visitor))
    return parserVisitor->visitReturnExpr(this);
  else
    return visitor->visitChildren(this);
}
IFCCParser::ExprContext* IFCCParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 6, IFCCParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(32);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFCCParser::T__0: {
        _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<IFCCParser::IdentExprContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(26);
        match(IFCCParser::T__0);
        setState(27);
        match(IFCCParser::IDENTIFIER);
        setState(28);
        match(IFCCParser::T__7);
        setState(29);
        match(IFCCParser::CONST);
        break;
      }

      case IFCCParser::RETURN: {
        _localctx = dynamic_cast<ExprContext *>(_tracker.createInstance<IFCCParser::ReturnExprContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(30);
        match(IFCCParser::RETURN);
        setState(31);
        match(IFCCParser::IDENTIFIER);
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

// Static vars and initialization.
std::vector<dfa::DFA> IFCCParser::_decisionToDFA;
atn::PredictionContextCache IFCCParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IFCCParser::_atn;
std::vector<uint16_t> IFCCParser::_serializedATN;

std::vector<std::string> IFCCParser::_ruleNames = {
  "axiom", "prog", "inst", "expr"
};

std::vector<std::string> IFCCParser::_literalNames = {
  "", "'int'", "'main'", "'('", "')'", "'{'", "'}'", "';'", "'='", "'return'"
};

std::vector<std::string> IFCCParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "RETURN", "CONST", "IDENTIFIER", "COMMENT", 
  "DIRECTIVE", "WS"
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
    0x3, 0x10, 0x25, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x13, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x16, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x23, 0xa, 0x5, 0x3, 0x5, 0x2, 0x2, 0x6, 0x2, 0x4, 0x6, 0x8, 0x2, 
    0x2, 0x2, 0x22, 0x2, 0xa, 0x3, 0x2, 0x2, 0x2, 0x4, 0xc, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8, 0x22, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0xb, 0x5, 0x4, 0x3, 0x2, 0xb, 0x3, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x7, 
    0x3, 0x2, 0x2, 0xd, 0xe, 0x7, 0x4, 0x2, 0x2, 0xe, 0xf, 0x7, 0x5, 0x2, 
    0x2, 0xf, 0x10, 0x7, 0x6, 0x2, 0x2, 0x10, 0x14, 0x7, 0x7, 0x2, 0x2, 
    0x11, 0x13, 0x5, 0x6, 0x4, 0x2, 0x12, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x14, 0x12, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x15, 0x17, 0x3, 0x2, 0x2, 0x2, 0x16, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x17, 0x18, 0x7, 0x8, 0x2, 0x2, 0x18, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x19, 0x1a, 0x5, 0x8, 0x5, 0x2, 0x1a, 0x1b, 0x7, 0x9, 0x2, 
    0x2, 0x1b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x3, 0x2, 0x2, 
    0x1d, 0x1e, 0x7, 0xd, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0xa, 0x2, 0x2, 0x1f, 
    0x23, 0x7, 0xc, 0x2, 0x2, 0x20, 0x21, 0x7, 0xb, 0x2, 0x2, 0x21, 0x23, 
    0x7, 0xd, 0x2, 0x2, 0x22, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 0x22, 
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
