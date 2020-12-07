#pragma once
#include <iostream>
using namespace std;
class IValue;
class UValue;
class RValue;
class QValue;
class TValue;
class CValue;

class IValue
{
private:
	double value = 0.0;
	string unitName = "A";

public:
	IValue() {};
	double Value();
	string UnitName();
	IValue(double val);
	UValue operator*(RValue rVal)const;
	QValue operator*(TValue tVal)const;
	IValue operator+(IValue iVal)const;
	IValue operator-(IValue iVal)const;
	friend ostream& operator << (ostream& out, IValue iVal);
};

class UValue
{
private:
	double value = 0.0;
	string unitName = "V";
public:
	UValue() {};
	double Value();
	string UnitName();
	UValue(double val);
	UValue operator+(UValue uVal)const;
	UValue operator-(UValue uVal)const;
	IValue operator/(RValue rVal)const;
	RValue operator/(IValue iVal)const;
	QValue operator*(CValue cVal)const;
	friend ostream& operator << (ostream& out, UValue uVal);
};

class RValue
{
private:
	double value = 0.0;
	string unitName = "Ohm";
public:
	RValue() {};
	double Value();
	string UnitName();
	RValue(double val);
	RValue operator+(RValue rVal)const;
	RValue operator-(RValue rVal)const;
	UValue operator*(IValue iVal) const;
	RValue  operator*(RValue rVal) const;
	RValue operator%(RValue rVal) const;
	friend ostream& operator << (ostream& out, RValue uVal);
};

class QValue
{
private:
	double value = 0.0;
	string unitName = "C";
public:
	QValue() {};
	double Value();
	string UnitName();
	QValue(double val);
	QValue operator+(QValue qVal)const;
	QValue operator-(QValue qVal)const;
	CValue operator/(UValue uVal) const;
	UValue operator/(CValue cVal) const;
	IValue operator/(TValue tVal) const;
	TValue operator/(IValue iVal) const;
	friend ostream& operator << (ostream& out, QValue qVal);
};

class TValue
{
private:
	double value = 0.0;
	string unitName = "sec";
public:
	TValue() {};
	double Value();
	string UnitName();
	TValue(double val);
	TValue operator+(TValue tVal)const;
	TValue operator-(TValue tVal)const;
	QValue operator*(IValue iVal)const;
	friend ostream& operator << (ostream& out, TValue qVal);
};

class CValue
{
private:
	double value = 0.0;
	string unitName = "C";
public:
	CValue() {};
	double Value();
	string UnitName();
	CValue(double val);
	CValue operator+(CValue ñVal)const;
	CValue operator-(CValue ñVal)const;
	UValue operator/(QValue qVal)const;
	QValue operator*(UValue uVal)const;
	CValue operator%(CValue cVal) const;
	friend ostream& operator << (ostream& out, CValue cVal);
};