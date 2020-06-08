
// Generated from src/antlr/IFCC.g4 by ANTLR 4.7.2


#include "IFCCLexer.h"


using namespace antlr4;


IFCCLexer::IFCCLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

IFCCLexer::~IFCCLexer() {
  delete _interpreter;
}

std::string IFCCLexer::getGrammarFileName() const {
  return "IFCC.g4";
}

const std::vector<std::string>& IFCCLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& IFCCLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& IFCCLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& IFCCLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& IFCCLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> IFCCLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& IFCCLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> IFCCLexer::_decisionToDFA;
atn::PredictionContextCache IFCCLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IFCCLexer::_atn;
std::vector<uint16_t> IFCCLexer::_serializedATN;

std::vector<std::string> IFCCLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"T__4", u8"T__5", u8"T__6", 
  u8"T__7", u8"RETURN", u8"CONST", u8"IDENTIFIER", u8"COMMENT", u8"DIRECTIVE", 
  u8"WS"
};

std::vector<std::string> IFCCLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> IFCCLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> IFCCLexer::_literalNames = {
  "", u8"'int'", u8"'main'", u8"'('", u8"')'", u8"'{'", u8"'}'", u8"';'", 
  u8"'='", u8"'return'"
};

std::vector<std::string> IFCCLexer::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", u8"RETURN", u8"CONST", u8"IDENTIFIER", 
  u8"COMMENT", u8"DIRECTIVE", u8"WS"
};

dfa::Vocabulary IFCCLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> IFCCLexer::_tokenNames;

IFCCLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x10, 0x62, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 
    0xe, 0x4, 0xf, 0x9, 0xf, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0x3d, 0xa, 0xb, 0xd, 0xb, 
    0xe, 0xb, 0x3e, 0x3, 0xc, 0x6, 0xc, 0x42, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 
    0x43, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x4a, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x4d, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x56, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0x59, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x4, 0x4b, 0x57, 0x2, 0x10, 0x3, 
    0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 
    0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 0x1d, 0x10, 
    0x3, 0x2, 0x5, 0x3, 0x2, 0x32, 0x3b, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 
    0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 0x2, 0x65, 0x2, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x3, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x23, 0x3, 0x2, 0x2, 0x2, 0x7, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x2a, 0x3, 0x2, 0x2, 0x2, 0xb, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xf, 0x30, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x13, 0x34, 0x3, 0x2, 0x2, 0x2, 0x15, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x41, 0x3, 0x2, 0x2, 0x2, 0x19, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x20, 0x7, 0x6b, 0x2, 0x2, 0x20, 0x21, 0x7, 0x70, 0x2, 
    0x2, 0x21, 0x22, 0x7, 0x76, 0x2, 0x2, 0x22, 0x4, 0x3, 0x2, 0x2, 0x2, 
    0x23, 0x24, 0x7, 0x6f, 0x2, 0x2, 0x24, 0x25, 0x7, 0x63, 0x2, 0x2, 0x25, 
    0x26, 0x7, 0x6b, 0x2, 0x2, 0x26, 0x27, 0x7, 0x70, 0x2, 0x2, 0x27, 0x6, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x2a, 0x2, 0x2, 0x29, 0x8, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x2b, 0x2, 0x2, 0x2b, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x2d, 0x7, 0x7d, 0x2, 0x2, 0x2d, 0xc, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x2f, 0x7, 0x7f, 0x2, 0x2, 0x2f, 0xe, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x31, 0x7, 0x3d, 0x2, 0x2, 0x31, 0x10, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x33, 0x7, 0x3f, 0x2, 0x2, 0x33, 0x12, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 
    0x7, 0x74, 0x2, 0x2, 0x35, 0x36, 0x7, 0x67, 0x2, 0x2, 0x36, 0x37, 0x7, 
    0x76, 0x2, 0x2, 0x37, 0x38, 0x7, 0x77, 0x2, 0x2, 0x38, 0x39, 0x7, 0x74, 
    0x2, 0x2, 0x39, 0x3a, 0x7, 0x70, 0x2, 0x2, 0x3a, 0x14, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x3d, 0x9, 0x2, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x16, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 
    0x9, 0x3, 0x2, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x18, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x31, 0x2, 
    0x2, 0x46, 0x47, 0x7, 0x2c, 0x2, 0x2, 0x47, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x4a, 0xb, 0x2, 0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x2c, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x31, 
    0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x8, 0xd, 0x2, 
    0x2, 0x52, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x53, 0x57, 0x7, 0x25, 0x2, 0x2, 
    0x54, 0x56, 0xb, 0x2, 0x2, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0xc, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x5d, 0x8, 0xe, 0x2, 0x2, 0x5d, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x5f, 0x9, 0x4, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x61, 0x8, 0xf, 0x3, 0x2, 0x61, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x7, 
    0x2, 0x3e, 0x43, 0x4b, 0x57, 0x4, 0x8, 0x2, 0x2, 0x2, 0x3, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

IFCCLexer::Initializer IFCCLexer::_init;
