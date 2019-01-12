#include <iostream>
#include "ListaSimpla.h"

using namespace std;


int main() // program liste
{
	ListaSimpla listasimpla(10);
	listasimpla.parcurgere_lista();
	listasimpla.adaugareInInterior(20, 2);
	listasimpla.parcurgere_lista();
	listasimpla.adaugareLaInceput(100);
	listasimpla.parcurgere_lista();
	listasimpla.adaugareLaSfarsit(300);
	listasimpla.parcurgere_lista();
	listasimpla.stergereElementLista(8);
	listasimpla.parcurgere_lista();
	listasimpla.stergereLista();
	listasimpla.parcurgere_lista();
	system("PAUSE");
	return 0;
}
