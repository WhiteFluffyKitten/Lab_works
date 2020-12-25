#pragma once
#include "CValue.h"
#include <ostream>

class IValue;
class UValue;
class RValue;
class QValue;
class TValue;
class CValue;
class QValue
{

public:
	const QValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	QValue operator+(const QValue& qVal)const;
	QValue operator-(const QValue& qVal)const;
	CValue operator/(const UValue& uVal) const;
	UValue operator/(const CValue& cVal) const;
	IValue operator/(const TValue& tVal) const;
	TValue operator/(const IValue& iVal) const;
	friend std::ostream& operator << (std::ostream& out, const QValue& qVal);
private:
	double value;
};
