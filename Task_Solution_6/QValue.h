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
	const QValue(double val) : m_value(val) {};
	double value() const { return m_value; };
	
	// overriding + and - operators so we don't have to 
	//use value() getter each time in the main class
	QValue operator+(const QValue& qVal)const;
	QValue operator-(const QValue& qVal)const;
	
	//overriding / operators for C=q/U and q=I/t formulas
	CValue operator/(const UValue& uVal) const;
	UValue operator/(const CValue& cVal) const;
	IValue operator/(const TValue& tVal) const;
	TValue operator/(const IValue& iVal) const;
private:
	double m_value = 0;
};
