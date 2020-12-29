#include "IValue.h"

UValue IValue:: operator*(const RValue& rVal) const
{
	return UValue(Value() * rVal.Value());
}

QValue IValue:: operator*(const TValue& tVal) const
{
	return QValue(Value() * tVal.Value());
}

IValue IValue:: operator+(const IValue& iVal)const
{
	return IValue(Value() + iVal.Value());
}

IValue IValue:: operator-(const IValue& iVal)const
{
	return IValue(Value() - iVal.Value());
}

std::ostream& operator << (std::ostream& out, const IValue& iVal)
{
	out << iVal.Value() << " A " << std::endl;
	return out;
}
