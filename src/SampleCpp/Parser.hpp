#pragma once
#include "ICharSource.hpp"

class Parser {
private:
	ICharSource* m_pSource;
public:
	Parser(ICharSource* pSource) : m_pSource{ pSource }
	{}
public:
	void setSource(ICharSource* pSource);
	void doParse() const;
};

