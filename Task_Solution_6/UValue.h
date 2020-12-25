#pragma once
#include "QValue.h"
#include "CValue.h"
#include "RValue.h"
#include "TValue.h"
#include <ostream>

class UValue;
class RValue;
class QValue;
class TValue;
class CValue;
class UValue
{

public:
	const UValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	UValue operator+(const UValue& uVal)const;
	UValue operator-(const UValue& uVal)const;
	IValue operator/(const RValue& rVal)const;
	RValue operator/(const IValue& iVal)const;
	QValue operator*(const CValue& cVal)const;
	friend std::ostream& operator << (std::ostream& out, const UValue& uVal);
private:
	double value;
};
