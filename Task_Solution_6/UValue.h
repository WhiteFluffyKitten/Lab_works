#pragma once
#include "QValue.h"
#include "CValue.h"
#include "RValue.h"
#include "TValue.h"
#include <ostream>


//Voltage U(Volt)
class UValue
{
public:
	const UValue(double val) : value(val) {};
	double Value() const { return value; };
	
	// overriding + and - operators so we don't have to 
	//use Value() getter each time in the main class
	UValue operator+(const UValue& uVal)const;
	UValue operator-(const UValue& uVal)const;
	
	//overriding / and * operators for U=I/R and C=q/U formulas
	IValue operator/(const RValue& rVal)const;
	RValue operator/(const IValue& iVal)const;
	QValue operator*(const CValue& cVal)const;
private:
	double value = 0;
};

