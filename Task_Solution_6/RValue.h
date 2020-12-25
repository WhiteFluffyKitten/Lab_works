#pragma once
#include "UValue.h"
#include <ostream>

class IValue;
class UValue;
class RValue;
class QValue;
class TValue;
class CValue;
class RValue
{

public:
	const RValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	RValue operator+(const RValue& rVal)const;
	RValue operator-(const RValue& rVal)const;
	UValue operator*(const IValue& iVal) const;
	RValue  operator*(const RValue& rVal) const;
	RValue operator%(const RValue& rVal) const;
	friend std::ostream& operator << (std::ostream& out, const RValue& uVal);
private:
	double value;
};