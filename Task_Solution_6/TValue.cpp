#include "TValue.h"

TValue TValue:: operator+(const TValue& qVal)const
{
	return TValue(Value() + qVal.Value());
}

TValue TValue:: operator-(const TValue& qVal)const
{
	return TValue(Value() - qVal.Value());
}

QValue TValue:: operator*(const IValue& iVal)const
{
	return QValue(Value() * iVal.Value());
}

std::ostream& operator << (std::ostream& out, const TValue& tVal)
{
	out << tVal.Value() << " sec " << std::endl;
	return out;
}
