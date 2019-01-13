#pragma once

#include <iostream>

using namespace std;

class Coada
{
public:
	Coada();
	Coada(unsigned);
	void parcurgere_coada();
	void stergere_element_coada();
	void adauga_element_coada(float v);
	~Coada();


private:
	struct punct {
		float x;
		punct *prec;
		punct *urm;
	};
	punct *prim, *ultim, *p;
	float v;
	char a;
};

