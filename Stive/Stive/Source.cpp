#include <iostream>
#include "Stiva.h"

using namespace std;
// PROGRAM LISTA DE TIP STIVA

int main() // program liste
{
	Stiva stiva(3);
	stiva.parcurgere_stiva();
	stiva.stergere_din_stiva();
	stiva.parcurgere_stiva();
	
	system("PAUSE");
	return 0;
}
