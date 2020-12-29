#include "IValue.h"

UValue IValue:: operator*(const RValue& rVal) const
{
	return UValue(value() * rVal.value());
}

QValue IValue:: operator*(const TValue& tVal) const
{
	return QValue(value() * tVal.value());
}

IValue IValue:: operator+(const IValue& iVal)const
{
	return IValue(value() + iVal.value());
}

IValue IValue:: operator-(const IValue& iVal)const
{
	return IValue(value() - iVal.value());
}

std::ostream& operator << (std::ostream& out, const IValue& iVal)
{
	out << iVal.value() << " A " << std::endl;
	return out;
}
