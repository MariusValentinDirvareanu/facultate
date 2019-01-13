#include <iostream>
#include "ListaDubla.h"

using namespace std;

int main() // program liste
{
	ListaDubla listadubla(3);
	listadubla.parcurgere_lista();
	listadubla.parcurgere_lista_invers();
	listadubla.adaugaElementInterior(20, 2);
	listadubla.parcurgere_lista();
	listadubla.parcurgere_lista_invers();
	listadubla.adaugareLaInceput(1000);
	listadubla.adaugareLaSfarsit(2000);
	listadubla.parcurgere_lista();
	listadubla.parcurgere_lista_invers();
	listadubla.stergereElementLista(1000);
	listadubla.parcurgere_lista();
	listadubla.parcurgere_lista_invers();
	listadubla.stergere_lista();
	listadubla.parcurgere_lista();
	listadubla.parcurgere_lista_invers();
	system("PAUSE");
	return 0;
}
