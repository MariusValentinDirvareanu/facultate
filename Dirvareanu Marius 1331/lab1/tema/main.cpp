#include <iostream>
#include <cmath>

using namespace std;

struct factori
{
	int x;
	int y = 0;
};

factori f[1000];
int j = 0;
int q = 0, imp = 0;


//Start Ecuatie Grad 2
void ecuatie(float a, float b, float c)
{
	float delta = pow(b, 2) - 4 * a * c;
	if (delta > 0)
	{
		cout << (-b + sqrt(delta)) / (2 * a) << endl;
		cout << (-b - sqrt(delta)) / (2 * a) << endl;
	}
	else
	{
		if (delta == 0)
		{
			cout << -b / (2 * a) << endl;
		}
		else
		{
			cout << (-b + sqrt(abs(delta))) / (2 * a) << "i" << endl;
			cout << (-b - sqrt(abs(delta))) / (2 * a) << "i" << endl;
		}
	}
}

//End Ecuatie Grad 2


//Start CMMDC+CMMMC
unsigned cmmdc(unsigned a, unsigned b)
{
	unsigned c;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

void cmmmc(unsigned a,unsigned b)
{
	cout << (a*b) / cmmdc(a, b) << endl;
}

//End CMMDC+CMMMC


//Start Descompunere Factori Primi
void afisare()
{
	int i = 1;
	for (int r = 0; r < j; ++r)
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

void factoriPrimi(int n)
{
	int k;
	for (int a = 2; a <= n; ++a)
	{
		k = 0;
		for (int i = 2; i < a; ++i)
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

void impartireLaPrimi(int n)
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

void numararePrimiFolositi()
{
	for (int i = 0; i < j; ++i)
	{
		if (f[i].y != 0)
		{
			imp++;
		}
	}
}

void prim(int n)
{
	factoriPrimi(n);
	cout << n << "=";
	impartireLaPrimi(n);
	numararePrimiFolositi();
	afisare();
}

//End Descompunere Factori Primi

int main()
{
	ecuatie(9, 4, 2);

	cout << cmmdc(24, 12) << endl;

	cmmmc(12, 24);

	prim(100);

	return 0;
}
