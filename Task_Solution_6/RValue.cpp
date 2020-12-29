#include "RValue.h"

RValue RValue:: operator+(const RValue& rVal)const
{
	return RValue(value + rVal.Value());
}

RValue RValue:: operator-(const RValue& rVal)const
{
	return RValue(value - rVal.Value());
}

UValue RValue:: operator*(const IValue& iVal) const
{
	return UValue(value * iVal.Value());
}

RValue RValue:: operator*(const RValue& rVal) const
{
	return RValue(value * rVal.Value());
}

RValue RValue:: operator%(const RValue& rVal) const
{
	return RValue((value + rVal.Value()) / (value * rVal.Value()));
}

std::ostream& operator << (std::ostream& out, const RValue& rVal)
{
	out << rVal.Value() << " Ohm " << std::endl;
	return out;
}
