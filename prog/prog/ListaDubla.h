#pragma once

#include <iostream>

using namespace std;

class ListaDubla
{
public:
	ListaDubla();
	ListaDubla(unsigned);
	~ListaDubla();
	void parcurgere_lista();
	void parcurgere_lista_invers();
	void stergere_lista();
	void adaugaElementInterior(float, float);
	void stergereElementLista(float element);
	void adaugareLaInceput(float);
	void adaugareLaSfarsit(float);

private:
	struct punct {
		float x;
		punct *prec;
		punct *urm;
	};
	punct *prim, *p, *q, *cap;
	float v; 
	char a;
};

