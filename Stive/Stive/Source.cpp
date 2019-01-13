#include <iostream>
#include "Stiva.h"

using namespace std;
// PROGRAM LISTA DE TIP STIVA

int main() // program liste
{
	Stiva stiva;
	stiva.schimbareBaza(210, 16);
	stiva.parcurgere_stiva();
	
	system("PAUSE");
	return 0;
}
