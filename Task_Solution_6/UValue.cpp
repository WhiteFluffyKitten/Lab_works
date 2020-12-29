#include "UValue.h"

UValue UValue:: operator+(const UValue& uVal)const
{
	return UValue(value() + uVal.value());
}

UValue UValue:: operator-(const UValue& uVal)const
{
	return UValue(value() - uVal.value());
}

IValue UValue:: operator/(const RValue& rVal)const
{
	return IValue(value() / rVal.value());
}

RValue UValue:: operator/(const IValue& iVal)const
{
	return RValue(value() / iVal.value());
}

QValue UValue:: operator*(const CValue& cVal)const
{
	return QValue(value() * cVal.value());
}

std::ostream& operator << (std::ostream& out, const UValue& uVal)
{
	out << uVal.value() << " V " << std::endl;
	return out;
}

