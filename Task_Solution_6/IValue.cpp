#include "IValue.h"
UValue IValue:: operator*(const RValue& rVal) const
{
	return UValue(value * rVal.Value());
}

QValue IValue:: operator*(const TValue& tVal) const
{
	return QValue(value * tVal.Value());
}

IValue IValue:: operator+(const IValue& iVal)const
{
	return IValue(value + iVal.value);
}
IValue IValue:: operator-(const IValue& iVal)const
{
	return IValue(value - iVal.value);
}

std::ostream& operator << (std::ostream& out, const IValue& iVal)
{
	out << iVal.Value() << " A " << std::endl;
	return out;
}