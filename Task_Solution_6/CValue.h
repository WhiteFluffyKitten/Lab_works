#pragma once
#include "UValue.h"
#include <ostream>

class IValue;
class UValue;
class RValue;
class QValue;
class TValue;
class CValue;
class CValue
{

public:
	const CValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	CValue operator+(const CValue& ÒVal)const;
	CValue operator-(const CValue& ÒVal)const;
	UValue operator/(const QValue& qVal)const;
	QValue operator*(const UValue& uVal)const;
	CValue operator%(const CValue& cVal) const;
	friend std::ostream& operator << (std::ostream& out, const CValue& cVal);
private:
	double value;
};