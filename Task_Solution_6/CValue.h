#pragma once
#include "UValue.h"
#include <ostream>


class UValue;
class QValue;
class CValue;

std::ostream& operator << (std::ostream& out, const CValue& cVal);

//Charge C(Pharad)
class CValue
{
public:
	const CValue(double val) : m_value(val) {};
	double value() const { return m_value; };
	
	// overriding + and - operators so we don't have to use value() getter  
	// each time in the main class for parallel curcuit connection
	CValue operator+(const CValue& ñVal)const;
	CValue operator-(const CValue& ñVal)const;
	
	// overriding / and * operators for C = q/U formula
	UValue operator/(const QValue& qVal)const;
	QValue operator*(const UValue& uVal)const;
	
	//overriding % operator for series circuit connection
	CValue operator%(const CValue& cVal) const;
private:
	double m_value = 0;
};
