#pragma once
#include <ostream>
class IValue;
class UValue;
class RValue;
class QValue;
class TValue;
class CValue;
class IValue
{
public:
	const IValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	UValue operator*(const RValue& rVal)const;
	QValue operator*(const TValue& tVal)const;
	IValue operator+(const IValue& iVal)const;
	IValue operator-(const IValue& iVal)const;
	friend std::ostream& operator << (std::ostream& out, const IValue& iVal);
private:
	double value;
};

class UValue
{

public:
	const UValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	UValue operator+(const UValue& uVal)const;
	UValue operator-(const UValue& uVal)const;
	IValue operator/(const RValue& rVal)const;
	RValue operator/(const IValue& iVal)const;
	QValue operator*(const CValue& cVal)const;
	friend std::ostream& operator << (std::ostream& out, const UValue& uVal);
private:
	double value;
};

class RValue
{

public:
	const RValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	RValue operator+(const RValue& rVal)const;
	RValue operator-(const RValue& rVal)const;
	UValue operator*(const IValue& iVal) const;
	RValue  operator*(const RValue& rVal) const;
	RValue operator%(const RValue& rVal) const;
	friend std::ostream& operator << (std::ostream& out, const RValue& uVal);
private:
	double value;
};

class QValue
{

public:
	const QValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	QValue operator+(const QValue& qVal)const;
	QValue operator-(const QValue& qVal)const;
	CValue operator/(const UValue& uVal) const;
	UValue operator/(const CValue& cVal) const;
	IValue operator/(const TValue& tVal) const;
	TValue operator/(const IValue& iVal) const;
	friend std::ostream& operator << (std::ostream& out, const QValue& qVal);
private:
	double value;
};

class TValue
{

public:
	const TValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	TValue operator+(const TValue& tVal)const;
	TValue operator-(const TValue& tVal)const;
	QValue operator*(const IValue& iVal)const;
	friend std::ostream& operator << (std::ostream& out, const TValue& qVal);
private:
	double value;
};

class CValue
{

public:
	const CValue(double val) : value(val) {};
	double Value() const noexcept { return value; };
	CValue operator+(const CValue& ñVal)const;
	CValue operator-(const CValue& ñVal)const;
	UValue operator/(const QValue& qVal)const;
	QValue operator*(const UValue& uVal)const;
	CValue operator%(const CValue& cVal) const;
	friend std::ostream& operator << (std::ostream& out, const CValue& cVal);
private:
	double value;
};