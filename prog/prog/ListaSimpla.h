#pragma once
#include <iostream>

using namespace std;

class ListaSimpla
{
public:
	ListaSimpla();
	ListaSimpla(unsigned);
	~ListaSimpla();

private:
	struct punct {
		float x;
		punct *urm;
	};
	punct *cap;
	punct *prim, *p, *q;
	float v;
	char a;
public:
	void parcurgere_lista();
	void adaugareInInterior(float, float);
	void stergereElementLista(float);
	void stergereLista();
	void adaugareLaInceput(float);
	void adaugareLaSfarsit(float);
};