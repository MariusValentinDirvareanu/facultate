#pragma once
#include <iostream>

using namespace std;

class ListaSimpla
{
public:
	ListaSimpla();
	~ListaSimpla();

private:
	struct punct {
		float x;
		punct *urm;
	};
	auto creare_lista()->punct*;
	auto stergereElementLista(float)->punct*;
	auto stergereLista()->punct*;
	auto adaugareLaInceput(float)->punct*;
	auto adaugareLaSfarsit(float)->punct*;
	punct *cap;
public:
	void parcurgere_lista();
	void stergereElementDinLista(float);
	void adaugareInInterior(float, float);

};

