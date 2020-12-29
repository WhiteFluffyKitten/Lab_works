#pragma once
#include "UValue.h"
#include <ostream>


class QValue;
class TValue;
class CValue;

//Current I(Ampere)
class IValue
{
public:
	const IValue(double val) : value(val) {};
	double Value() const { return value; };
	
	// overriding + and - operators so we don't have to 
	//use Value() getter each time in the main class
	IValue operator+(const IValue& iVal)const;
	IValue operator-(const IValue& iVal)const;
	
	// * operator override for U=I*R and q=I/t formulas
	UValue operator*(const RValue& rVal)const;
	QValue operator*(const TValue& tVal)const;
	
private:
	double value = 0;
};
