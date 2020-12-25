#include "Values.h"



//IValue


UValue IValue:: operator*(const RValue& rVal) const
{
	return UValue(value * rVal.Value());
}

QValue IValue:: operator*(const TValue& tVal) const
{
	return QValue(value * tVal.Value());
}

IValue IValue:: operator+(const IValue& iVal)const
{
	return IValue(value + iVal.value);
}
IValue IValue:: operator-(const IValue& iVal)const
{
	return IValue(value - iVal.value);
}

std::ostream& operator << (std::ostream& out, const IValue& iVal)
{
	out << iVal.Value() << " A " << std::endl;
	return out;
}

//UValue


UValue UValue:: operator+(const UValue& uVal)const
{
	return UValue(value + uVal.value);
}

UValue UValue:: operator-(const UValue& uVal)const
{
	return UValue(value - uVal.value);
}

IValue UValue:: operator/(const RValue& rVal)const
{
	return IValue(value / rVal.Value());
}
RValue UValue:: operator/(const IValue& iVal)const
{
	return RValue(value / iVal.Value());
}
QValue UValue:: operator*(const CValue& cVal)const
{
	return QValue(value * cVal.Value());
}
std::ostream& operator << (std::ostream& out, const UValue& uVal)
{
	out << uVal.Value() << " V "  << std::endl;
	return out;
}

//RValue

RValue RValue:: operator+(const RValue& rVal)const
{
	return RValue(value + rVal.value);
}
RValue RValue:: operator-(const RValue& rVal)const
{
	return RValue(value - rVal.value);
}
UValue RValue:: operator*(const IValue& iVal) const
{
	return UValue(value * iVal.Value());
}
RValue RValue:: operator*(const RValue& rVal) const
{
	return RValue(value * rVal.Value());
}
RValue RValue:: operator%(const RValue& rVal) const
{
	return RValue((value + rVal.value) / (value * rVal.Value()));
}
std::ostream& operator << (std::ostream& out, const RValue& rVal)
{
	out << rVal.Value() << " Ohm "  << std::endl;
	return out;
}
//QValue

QValue QValue:: operator+(const QValue& qVal)const
{
	return QValue(value + qVal.value);
}
QValue QValue:: operator-(const QValue& qVal)const
{
	return QValue(value - qVal.value);
}

CValue QValue:: operator/(const UValue& uVal) const
{
	return CValue(value * uVal.Value());
}

UValue QValue:: operator/(const CValue& cVal) const
{
	return UValue(value * cVal.Value());
}
IValue QValue:: operator/(const TValue& tVal) const
{
	return IValue(value / tVal.Value());
}
TValue QValue:: operator/(const IValue& iVal) const
{
	return TValue(value / iVal.Value());
}

std::ostream& operator << (std::ostream& out, const QValue& qVal)
{
	out << qVal.Value() << " C "  << std::endl;
	return out;
}

//TValue

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
	out << tVal.Value() << " sec "  << std::endl;
	return out;
}
//CValue

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
	out << cVal.Value() << " Ñ "  << std::endl;
	return out;
}










