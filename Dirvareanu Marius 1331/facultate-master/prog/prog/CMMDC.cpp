#include "CMMDC.h"



CMMDC::CMMDC()
{
	cout << "Numere:";
	cin >> a >> b;
	d = a * b;
	cout << cmmdcFunc() << endl;
	cmmmc();
}


CMMDC::~CMMDC()
{
}

int CMMDC::cmmdcFunc()
{
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

void CMMDC::cmmmc()
{
	cout << d / cmmdcFunc() << endl;
}