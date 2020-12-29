#include "QValue.h"

QValue QValue:: operator+(const QValue& qVal)const
{
	return QValue(value() + qVal.value());
}

QValue QValue:: operator-(const QValue& qVal)const
{
	return QValue(value() - qVal.value());
}

CValue QValue:: operator/(const UValue& uVal) const
{
	return CValue(value() * uVal.value());
}

UValue QValue:: operator/(const CValue& cVal) const
{
	return UValue(value() * cVal.value());
}

IValue QValue:: operator/(const TValue& tVal) const
{
	return IValue(value() / tVal.value());
}

TValue QValue:: operator/(const IValue& iVal) const
{
	return TValue(value() / iVal.value());
}

std::ostream& operator << (std::ostream& out, const QValue& qVal)
{
	out << qVal.value() << " C " << std::endl;
	return out;
}
