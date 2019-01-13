#include <iostream>
#include "Coada.h"

using namespace std;
// PROGRAM LISTA COZI

int main() // program liste
{
	Coada coada(3);
	coada.parcurgere_coada();
	coada.adauga_element_coada(4);
	coada.parcurgere_coada();
	coada.stergere_element_coada();
	coada.parcurgere_coada();

	system("PAUSE");

	return 0;
}
