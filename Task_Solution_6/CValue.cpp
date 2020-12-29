#include "CValue.h"

CValue CValue:: operator+(const CValue& cVal)const
{
	return CValue(Value() + cVal.Value());
}

CValue CValue:: operator-(const CValue& cVal)const
{
	return CValue(Value() - cVal.Value());
}

UValue CValue:: operator/(const QValue& qVal)const
{
	return UValue(Value() / qVal.Value());
}

QValue CValue:: operator*(const UValue& uVal)const
{
	return QValue(Value() * uVal.Value());
}

CValue CValue:: operator%(const CValue& cVal) const
{
	return CValue((Value() + cVal.Value()) / (Value() * cVal.Value()));
}

std::ostream& operator << (std::ostream& out, const CValue& cVal)
{
	out << cVal.Value() << " C " << std::endl;
	return out;
}
