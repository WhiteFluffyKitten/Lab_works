#include "TValue.h"

TValue TValue:: operator+(const TValue& qVal)const
{
	return TValue(value + qVal.value);
}
TValue TValue:: operator-(const TValue& qVal)const
{
	return TValue(value - qVal.value);
}
QValue TValue:: operator*(const IValue& iVal)const
{
	return QValue(value * iVal.Value());
}
std::ostream& operator << (std::ostream& out, const TValue& tVal)
{
	out << tVal.Value() << " sec " << std::endl;
	return out;
}