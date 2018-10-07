#pragma once
class FactoriPrimi
{
private:
	struct factori
	{
		int x;
		int y = 0;
	}f[1000];
	int j = 0;
	int i, r, k, a, b;
	int q = 0, imp = 0;
public:
	FactoriPrimi();
	FactoriPrimi(int);
	~FactoriPrimi();
private:
	void numararePrimiFolositi();
	void impartireLaPrimi(int);
	void factoriPrimi(int);
	void afisare();
	void prim(int);
};

