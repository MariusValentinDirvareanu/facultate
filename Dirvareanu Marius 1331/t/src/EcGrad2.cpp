#include <iostream>
#include <cmath>
#include "EcGrad2.h"

using namespace std;


EcGrad2::EcGrad2()
{
	cout << "Citeste coeficienti: " << endl;
	cin >> x >> y >> z;
	ec2(x, y, z);
}

EcGrad2::EcGrad2(float a, float b, float c) {
	ec2(a, b, c);
}

void EcGrad2::ec2(float a, float b, float c)
{
	if (a == 0)
	{
		if (b != 0)
			cout << "x= " << -c / b << " " << endl;
		else
		{
			if (c == 0)
				cout << "infinitate de solutii " << endl;
			else
				cout << "nu exista solutii " << endl;
		}
	}
	else
	{
		delta = pow(b, 2) - 4 * a*c;
		if (delta >= 0)
		{
			cout << "delta=" << delta << " ";
			cout << "solutiile sunt:" << (-1 * (b)+sqrt(delta)) / (2 * a) << " " << (-1 * (b)-sqrt(delta)) / (2 * a) << " " << endl;
		}
		if (delta < 0)
		{
			cout << "delta=" << abs(delta) << " " << endl;
			cout << "Partea reala:" << (-1)*b / (2 * a) << " Partea imaginara:" << (-1)*sqrt(abs(delta)) / (2 * a) << endl;
			cout << "sol:" << -b / 2 << "+" << "i*" << sqrt(abs(delta)) / 2 << " si " << -b / 2 << "-" << "i*" << sqrt(abs(delta)) / 2 << endl;
		}
	}
}


EcGrad2::~EcGrad2()
{
}
