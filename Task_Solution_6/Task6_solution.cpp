#include "Values.h"
int main()
{
	setlocale(LC_ALL, "Russian");

	CValue c = CValue(10 * 10 ^ -6);
	RValue r = RValue(200 * 10 ^ 3);
	UValue u = UValue(1);
	TValue t = TValue(0);
	IValue i = IValue(0);
	QValue q = QValue(0);
	cout << "Последовательное соединение: Rs = " << r + r << ", Cs = " << c + c << "\n";
	cout << "Параллельное соединение: Rs = " << r % r << ", Cs = " << c % c << "\n";

	while (t.Value() < 2.1)
	{
		i = u / r;
		q = i * t;
		c = q / u;
		cout << t << ": " << c << endl;
		t = t + 0.1;
	}
}
