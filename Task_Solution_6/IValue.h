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
	const IValue(double val) : m_value(val) {};
	double value() const { return m_value; };
	
	// overriding + and - operators so we don't have to 
	//use value() getter each time in the main class
	IValue operator+(const IValue& iVal)const;
	IValue operator-(const IValue& iVal)const;
	
	// * operator override for U=I*R and q=I/t formulas
	UValue operator*(const RValue& rVal)const;
	QValue operator*(const TValue& tVal)const;
	
private:
	double m_value = 0;
};
