#include "UValue.h"

UValue UValue:: operator+(const UValue& uVal)const
{
	return UValue(Value() + uVal.Value());
}

UValue UValue:: operator-(const UValue& uVal)const
{
	return UValue(Value() - uVal.Value());
}

IValue UValue:: operator/(const RValue& rVal)const
{
	return IValue(Value() / rVal.Value());
}

RValue UValue:: operator/(const IValue& iVal)const
{
	return RValue(Value() / iVal.Value());
}

QValue UValue:: operator*(const CValue& cVal)const
{
	return QValue(Value() * cVal.Value());
}

std::ostream& operator << (std::ostream& out, const UValue& uVal)
{
	out << uVal.Value() << " V " << std::endl;
	return out;
}

