#pragma once
#include "UValue.h"
#include <ostream>


class IValue;
class UValue;
class RValue;

std::ostream& operator << (std::ostream& out, const RValue& uVal);

//Resistance R (Ohm)
class RValue
{
public:
	const RValue(double val) : value(val) {};
	double Value() const { return value; };
	
	// overriding + and - operators so we don't have to 
	//use Value() getter each time in the main class for series connected resistors 
	RValue operator+(const RValue& rVal)const;
	RValue operator-(const RValue& rVal)const;
	
	//overloading *operators for U=I/R formula
	UValue operator*(const IValue& iVal) const;
	RValue  operator*(const RValue& rVal) const;
	
	//overriding % operator for parallel resistors connection
	RValue operator%(const RValue& rVal) const;
private:
	double value = 0;
};

