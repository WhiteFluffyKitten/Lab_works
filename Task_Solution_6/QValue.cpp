#include "QValue.h"

QValue QValue:: operator+(const QValue& qVal)const
{
	return QValue(Value() + qVal.Value());
}

QValue QValue:: operator-(const QValue& qVal)const
{
	return QValue(Value() - qVal.Value());
}

CValue QValue:: operator/(const UValue& uVal) const
{
	return CValue(Value() * uVal.Value());
}

UValue QValue:: operator/(const CValue& cVal) const
{
	return UValue(Value() * cVal.Value());
}

IValue QValue:: operator/(const TValue& tVal) const
{
	return IValue(Value() / tVal.Value());
}

TValue QValue:: operator/(const IValue& iVal) const
{
	return TValue(Value() / iVal.Value());
}

std::ostream& operator << (std::ostream& out, const QValue& qVal)
{
	out << qVal.Value() << " C " << std::endl;
	return out;
}
