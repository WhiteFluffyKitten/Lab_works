#pragma once
#include "IValue.h"
#include <ostream>


std::ostream& operator << (std::ostream& out, const TValue& qVal);

//Time t (Sec)
class TValue
{
public:
	const TValue(double val) : value(val) {};
	double Value() const { return value; };
	
	// overriding + and - operators so we don't have to 
	//use Value() getter each time in the main class
	TValue operator+(const TValue& tVal)const;
	TValue operator-(const TValue& tVal)const;
	
	//overriding * operator for q=I*t formula
	QValue operator*(const IValue& iVal)const;
private:
	double value = 0;
};

