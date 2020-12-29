#pragma once
#include "IValue.h"
#include <ostream>


std::ostream& operator << (std::ostream& out, const TValue& qVal);

//Time t (Sec)
class TValue
{
public:
	const TValue(double val) : m_value(val) {};
	double value() const { return m_value; };
	
	// overriding + and - operators so we don't have to 
	//use value() getter each time in the main class
	TValue operator+(const TValue& tVal)const;
	TValue operator-(const TValue& tVal)const;
	
	//overriding * operator for q=I*t formula
	QValue operator*(const IValue& iVal)const;
private:
	double m_value = 0;
};

