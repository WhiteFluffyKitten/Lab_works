#pragma once
#include "CValue.h"
#include <ostream>

class IValue;
class UValue;
class RValue;
class TValue;
class CValue;

//Charge q (Coulomb)
class QValue
{
public:
	const QValue(double val) : value(val) {};
	double Value() const { return value; };
	
	// overriding + and - operators so we don't have to 
	//use Value() getter each time in the main class
	QValue operator+(const QValue& qVal)const;
	QValue operator-(const QValue& qVal)const;
	
	//overriding / operators for C=q/U and q=I/t formulas
	CValue operator/(const UValue& uVal) const;
	UValue operator/(const CValue& cVal) const;
	IValue operator/(const TValue& tVal) const;
	TValue operator/(const IValue& iVal) const;
private:
	double value = 0;
};
