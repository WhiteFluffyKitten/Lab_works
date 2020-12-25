#include "CValue.h"

CValue CValue:: operator+(const CValue& cVal)const
{
	return CValue(value + cVal.value);
}
CValue CValue:: operator-(const CValue& cVal)const
{
	return CValue(value - cVal.value);
}
UValue CValue:: operator/(const QValue& qVal)const
{
	return UValue(value / qVal.Value());
}
QValue CValue:: operator*(const UValue& uVal)const
{
	return QValue(value * uVal.Value());
}
CValue CValue:: operator%(const CValue& cVal) const
{
	return CValue((value + cVal.value) / (value * cVal.Value()));
}
std::ostream& operator << (std::ostream& out, const CValue& cVal)
{
	out << cVal.Value() << " Ñ " << std::endl;
	return out;
}