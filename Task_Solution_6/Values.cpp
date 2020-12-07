#pragma once
#include "Values.h"
using namespace std;

//IValue
double IValue::Value()
{
	return value;
}
IValue::IValue(double val)
{
	value = val;
}

string IValue::UnitName()
{
	return unitName;
}


UValue IValue:: operator*(RValue rVal) const
{
	return UValue(value * rVal.Value());
}

QValue IValue:: operator*(TValue tVal) const
{
	return QValue(value * tVal.Value());
}

IValue IValue:: operator+(const IValue iVal)const
{
	return IValue(value + iVal.value);
}
IValue IValue:: operator-(const IValue iVal)const
{
	return IValue(value - iVal.value);
}

ostream& operator << (ostream& out, IValue iVal)
{
	out << iVal.Value() << " " << iVal.UnitName() << endl;
	return out;
}

//UValue
UValue::UValue(double val)
{
	value = val;
}

string UValue::UnitName()
{
	return unitName;
}

double UValue::Value()
{
	return value;
}

UValue UValue:: operator+(UValue uVal)const
{
	return UValue(value + uVal.value);
}

UValue UValue:: operator-(UValue uVal)const
{
	return UValue(value - uVal.value);
}

IValue UValue:: operator/(RValue rVal)const
{
	return IValue(value / rVal.Value());
}
RValue UValue:: operator/(IValue iVal)const
{
	return RValue(value / iVal.Value());
}
QValue UValue:: operator*(CValue cVal)const
{
	return QValue(value * cVal.Value());
}
ostream& operator << (ostream& out, UValue uVal)
{
	out << uVal.Value() << " " << uVal.UnitName() << endl;
	return out;
}

//RValue
RValue::RValue(double val)
{
	value = val;
}

string RValue::UnitName()
{
	return unitName;
}

double RValue::Value()
{
	return value;
}

RValue RValue:: operator+(RValue rVal)const
{
	return RValue(value + rVal.value);
}
RValue RValue:: operator-(RValue rVal)const
{
	return RValue(value - rVal.value);
}
UValue RValue:: operator*(IValue iVal) const
{
	return UValue(value * iVal.Value());
}
RValue RValue:: operator*(RValue rVal) const
{
	return RValue(value * rVal.Value());
}
RValue RValue:: operator%(RValue rVal) const
{
	return RValue((value + rVal.value) / (value * rVal.Value()));
}
ostream& operator << (ostream& out, RValue rVal)
{
	out << rVal.Value() << " " << rVal.UnitName() << endl;
	return out;
}
//QValue
QValue::QValue(double val)
{
	value = val;
}

string QValue::UnitName()
{
	return unitName;
}

double QValue::Value()
{
	return value;
}

QValue QValue:: operator+(QValue qVal)const
{
	return QValue(value + qVal.value);
}
QValue QValue:: operator-(QValue qVal)const
{
	return QValue(value - qVal.value);
}

CValue QValue:: operator/(UValue uVal) const
{
	return CValue(value * uVal.Value());
}

UValue QValue:: operator/(CValue cVal) const
{
	return UValue(value * cVal.Value());
}
IValue QValue:: operator/(TValue tVal) const
{
	return IValue(value / tVal.Value());
}
TValue QValue:: operator/(IValue iVal) const
{
	return TValue(value / iVal.Value());
}

ostream& operator << (ostream& out, QValue qVal)
{
	out << qVal.Value() << " " << qVal.UnitName() << endl;
	return out;
}

//TValue
TValue::TValue(double val)
{
	value = val;
}

string TValue::UnitName()
{
	return unitName;
}

double TValue::Value()
{
	return value;
}
TValue TValue:: operator+(TValue qVal)const
{
	return TValue(value + qVal.value);
}
TValue TValue:: operator-(TValue qVal)const
{
	return TValue(value - qVal.value);
}
QValue TValue:: operator*(IValue iVal)const
{
	return QValue(value * iVal.Value());
}
ostream& operator << (ostream& out, TValue tVal)
{
	out << tVal.Value() << " " << tVal.UnitName() << endl;
	return out;
}
//CValue
CValue::CValue(double val)
{
	value = val;
}

string CValue::UnitName()
{
	return unitName;
}

double CValue::Value()
{
	return value;
}
CValue CValue:: operator+(CValue cVal)const
{
	return CValue(value + cVal.value);
}
CValue CValue:: operator-(CValue cVal)const
{
	return CValue(value - cVal.value);
}
UValue CValue:: operator/(QValue qVal)const
{
	return UValue(value / qVal.Value());
}
QValue CValue:: operator*(UValue uVal)const
{
	return QValue(value * uVal.Value());
}
CValue CValue:: operator%(CValue cVal) const
{
	return CValue((value + cVal.value) / (value * cVal.Value()));
}
ostream& operator << (ostream& out, CValue cVal)
{
	out << cVal.Value() << " " << cVal.UnitName() << endl;
	return out;
}










