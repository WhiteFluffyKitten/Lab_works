#pragma once
#include "IValue.h"
#include "RValue.h"
#include "UValue.h"
#include "QValue.h"
#include "CValue.h"
#include "TValue.h"
#include "iostream"

using namespace std;

int main()
{
	CValue c = CValue(10.0 / 1000000);
	RValue r = RValue(200 * 1000);
	UValue u = UValue(1);
	TValue t = TValue(0);
	IValue i = IValue(0);
	QValue q = QValue(0);
	cout << "Series connection Rs = " << r + r << ", Cs = " << c + c << "\n";
	cout << "Parallel connection: Rs = " << r % r << ", Cs = " << c % c << "\n";

	while (t.value() < 2.1)
	{
		i = u / r;
		q = i * t;
		c = q / u;
		cout << t << ": " << c << endl;
		t = t + 0.1;
	}
}

