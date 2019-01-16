#include "FactoriPrimi.h"
#include <iostream>

using namespace std;



FactoriPrimi::FactoriPrimi()
{
	cout << "Numar de descompus=";
	cin >> b;
	prim(b);
}

FactoriPrimi::FactoriPrimi(int l) {
	prim(l);
}

void FactoriPrimi::afisare() {
	i = 1;
	for (r = 0; r < j; ++r)
	{
		if (f[r].y > 1)
		{
			cout << f[r].x << "^" << f[r].y;
			if (i < imp)
			{
				cout << "*";
				i++;
			}
		}
		if (f[r].y == 1)
		{
			cout << f[r].x;
			if (i < imp)
			{
				cout << "*";
				i++;
			}
		}
	}
	cout << endl;
}

void FactoriPrimi::factoriPrimi(int n)
{
	for (a = 2; a <= n; ++a)
	{
		k = 0;
		for (i = 2; i < a; ++i)
		{
			if (a % i == 0)
			{
				k++;
			}
		}
		if (k == 0)
		{
			f[j].x = a;
			j++;
		}
	}
}

void FactoriPrimi::impartireLaPrimi(int n)
{
	while (n > 1)
	{
		if (n%f[q].x == 0)
		{
			f[q].y++;
			n = n / f[q].x;
			q = 0;
		}
		else
		{
			q++;
		}
	}
}

void FactoriPrimi::numararePrimiFolositi()
{
	for (i = 0; i < j; ++i)
	{
		if (f[i].y != 0)
		{
			imp++;
		}
	}
}

void FactoriPrimi::prim(int n)
{
	factoriPrimi(n);
	cout << n << "=";
	impartireLaPrimi(n);
	numararePrimiFolositi();
	afisare();
}

FactoriPrimi::~FactoriPrimi()
{
}
