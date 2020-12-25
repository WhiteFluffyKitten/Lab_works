#pragma once
#include "IValue.h"
#include <ostream>

class IValue;
class UValue;
class RValue;
class QValue;
class TValue;
class CValue;
class TValue
{

public:
	const TValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	TValue operator+(const TValue& tVal)const;
	TValue operator-(const TValue& tVal)const;
	QValue operator*(const IValue& iVal)const;
	friend std::ostream& operator << (std::ostream& out, const TValue& qVal);
private:
	double value;
};
