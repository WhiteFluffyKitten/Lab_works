#pragma once
#include "UValue.h"
#include <ostream>

class UValue;
class RValue;
class QValue;
class TValue;
class CValue;
class IValue
{
public:
	const IValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	UValue operator*(const RValue& rVal)const;
	QValue operator*(const TValue& tVal)const;
	IValue operator+(const IValue& iVal)const;
	IValue operator-(const IValue& iVal)const;
	friend std::ostream& operator << (std::ostream& out, const IValue& iVal);
private:
	double value;
};