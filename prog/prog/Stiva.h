#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Stiva
{
public:
	Stiva();
	Stiva(unsigned);
	void parcurgere_stiva();
	void stergere_din_stiva();
	void adaugare_in_stiva(float);
	~Stiva();

private:
	struct punct {
		float x;
		punct *urm;
	};
	punct *cap;
	punct *prim, *p;
	float v; 
	char a;
	punct *q;
};

