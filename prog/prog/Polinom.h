#pragma once
#include <iostream>

using namespace std;

class Polinom
{
private:
	struct monom {
		float coef;
		int grad;
		monom *urm;
	};
	monom *p1, *p2;
	monom *rezultat;
	monom *s, *p, *q, *u, *r;
	float c;
	int g;
	char dn;

public:
	Polinom(char);
	auto creare()->monom*;
	void parcurgere(monom*);
	void inmultire();
	void adunare();
	void reducere();
	~Polinom();
};

