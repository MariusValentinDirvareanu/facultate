#include <iostream>
#include <chrono>
#include "EcGrad2.h"
#include "FactoriPrimi.h"
#include "BubleSort.h"
#include "CMMDC.h"
#include "SelectionSort.h"
#include "CountingSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "InsertionSort.h"
#include "RadixSort.h"
#include "ShellSort.h"
#include "Cautare.h"
#include "vec.h"
#include "Arbore.h"
#include "ListaSimpla.h"
#include "ListaDubla.h"
#include "Coada.h"
#include "Stiva.h"

using namespace std;
using namespace chrono;

int main()
{
	int op, op1, op2, op3, op4, op5;
	time_point<steady_clock> start, end;

	do // reia meniu principal pana la exit
	{
		// meniu principal
		cout << "PROGRAME SDA " << endl;
		cout << "1. Probleme diverse" << endl;
		cout << "2. Algoritmi de sortare" << endl;
		cout << "3. Liste dinamice" << endl;
		cout << "4. Grafuri" << endl;
		cout << "5. Arbori binari" << endl;
		// se vor adauga optiuni
		cout << "0. Exit program." << endl;
		cout << "Optiune : ";
		cin >> op;


		switch (op) // switch pentruoptiune meniu principal
		{
		case 1: //Probleme diverse (laborator 1)
			do
			{
				cout << "1.1. Rezolvarea ecuatiei de gradul al doilea" << endl;
				cout << "1.2. Determinare numar prim" << endl;
				cout << "1.3. Determinare in factori primi" << endl;
				cout << "1.4. Determinare c.m.m.d.c si c.m.m.m.c" << endl;
				cout << "1.0. Exit probleme diverse!" << endl;
				cout << "Optiune probleme diverse : ";
				cin >> op1;
				switch (op1)
				{
				case 1:
					{
						EcGrad2 ecuatie;
						cout << '\n';
						break;
					}

				case 3:
					{
						FactoriPrimi factor;
						cout << '\n';
						break;
					}

				case 4:
					{
						CMMDC cmmdc;
						cout << '\n';
						break;
					}

				case 0:
					cout << "A terminat submeniu 1" << endl << endl;
					break;

				default:
					cout << "Optiune invalida!" << endl;
					break;
				}
			}
			while (op1 != 0);
			break;

		case 2: //algoritmi de sortare
			do
			{
				cout << endl << "ALGORITMI DE SORTARE" << endl;
				cout << "2.1. Algoritm Bubble Sort " << endl;
				cout << "2.2. Counting Sort " << endl;
				cout << "2.3. Selection Sort " << endl;
				cout << "2.4. Quicksort " << endl;
				cout << "2.5. Merge Sort " << endl;
				cout << "2.6. Insertion Sort " << endl;
				cout << "2.7. Shell Sort " << endl;
				cout << "2.8. Radix Sort " << endl;
				cout << "2.9. Cautarea intr-u sir ordonat " << endl;
				cout << "2.0. Exit algoritmi de sortare!" << endl;
				cout << "Optiune algoritmi de sortare: ";
				cin >> op2;
				switch (op2)
				{
				case 1:
					{
						start = steady_clock::now();
						vector<int> av = {3, 9, 4, 6, 7, 5, 7, 6, 10, 56};
						BubleSort sir(ee);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}
				case 2:
					{
						start = steady_clock::now();
						vector<int> e = {3, 9, 4, 6, 7, 5, 7, 6, 10, 56};
						SelectionSort sir2(ee);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}

				case 3:
					{
						start = steady_clock::now();
						vector<double> e = {3, 9, 4, 6, 7, 5, 3.5, 8.66, 10, 56};
						CountingSort sir3(ee);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}

				case 4:
					{
						start = steady_clock::now();
						vector<int> e = {3, 9, 4, 6, 7, 5, 3, 8, 10, 56};
						QuickSort sir4(ee, 0, (int)ee.size() - 1);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}

				case 5:
					{
						start = steady_clock::now();
						vector<int> e = {3, 9, 4, 6, 7, 5, 3, 8, 10, 56};
						MergeSort sir5(ee, 0, (int)ee.size() - 1);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}

				case 6:
					{
						start = steady_clock::now();
						vector<int> e = {3, 9, 4, 6, 7, 5, 3, 8, 10, 56};
						InsertionSort sir6(ee);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}

				case 7:
					{
						start = steady_clock::now();
						vector<int> e = {3, 9, 4, 6, 7, 5, 3, 8, 10, 56};
						RadixSort sir7(ee);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}

				case 8:
					{
						start = steady_clock::now();
						vector<int> e = {3, 9, 4, 6, 7, 5, 3, 8, 10, 56};
						ShellSort sir8(ee);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}

				case 9:
					{
						start = steady_clock::now();
						vector<int> e = {3, 9, 55, 6, 7, 5, 4, 8, 10, 56};
						int r = 7;
						Cautare element(e, r);
						end = steady_clock::now();
						duration<double> elapsed_seconds = end - start;
						cout << elapsed_seconds.count() << endl;
						break;
					}

				case 0:
					cout << "A terminat submeniu 2" << endl << endl;
					break;

				default:
					cout << "Optiune invalida!" << endl;
					break;
				}
			}
			while (op2 != 0);
			break;

		case 3: //Liste dinamice
			do
			{
				cout << endl << "LISTE DINAMICE" << endl;
				cout << "3.1. Liste simplu inlantuite " << endl;
				cout << "3.2. Liste dublu inlantuite " << endl;
				cout << "3.3. Stive " << endl;
				cout << "3.4. Cozi " << endl;
				cout << "3.5. Aplicatia 1: Adunarea si inmultirea a doua polinoame " << endl;
				cout << "3.6. Aplicatia 2: Interclasarea a doua liste ordonate " << endl;
				cout << "3.7. Aplicatia 3: Verificarea parantezelor intr-o expresie aritmetica " << endl;
				cout << "3.0. Exit liste dinamice!" << endl;


				cout << "Optiune liste dinamice: ";
				cin >> op3;
				switch (op3)
				{
				case 1: //liste simplu inlatuite
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
					}
					break;

				case 2:
					// Liste dublu inlatuite
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
					}
					break;

				case 3:
					{
						Stiva stiva(3);
						stiva.parcurgere_stiva();
						stiva.stergere_din_stiva();
						stiva.parcurgere_stiva();
					}
					break;;

				case 4:
					{
						Coada coada(3);
						coada.parcurgere_coada();
						coada.adauga_element_coada(4);
						coada.parcurgere_coada();
						coada.stergere_element_coada();
						coada.parcurgere_coada();
					}
					break;

				case 0:
					cout << "A terminat submeniu 3" << endl << endl;
					break;

				default:
					cout << "Optiune invalida!" << endl;
					break;
				}
			}
			while (op3 != 0);
			break;

		case 4: // Grafuri
			do
			{
				cout << endl << "GRAFURI" << endl;
				cout << "4.1. Citirea unui graf si cele 3 reprezentari" << endl;
				cout << "4.2. Determinarea existentei drumurilor intr-un graf (cu matr. de adiacenta) " << endl;
				cout << "4.3. Algoritmul Dijkstra." << endl;
				cout << "4.4. Alritmul Roy-Floyd" << endl;
				cout << "4.0. Exit grafuri!" << endl;
				cout << "Optiune grafuri: ";
				cin >> op4;
				switch (op4)
				{
				case 1: //citire graf
					{
					}
					break;

				case 2:
					// dterminare drumuri cu matricea de adiacenta
					{
					}
					break;

				case 0:
					cout << "A terminat submeniu 4" << endl << endl;
					break;

				default:
					cout << "Optiune invalida!" << endl;
					break;
				}
			}
			while (op4 != 0);
			break;

		case 5: // Arbori
			do
			{
				cout << endl << "ARBORI" << endl;
				cout << "5.1. Citire arbore binar si pargurgere: SRD, RSD, SDR" << endl;
				cout << "5.2. Arbori binari de cautare (creare, cautare, stergere, adaugare)" << endl;
				cout << "5.0. Exit liste dinamice!" << endl;


				cout << "Optiune arbori: ";
				cin >> op5;
				switch (op5)
				{
				case 1: //citire arbore binar si parcurgere
					{
						Arbore arbore;
						//system("PAUSE");
					}
					break;

				case 2:
					// arbori binari de cautare
					{
					}
					break;

				case 0:
					cout << "A terminat submeniu 5" << endl << endl;
					break;

				default:
					cout << "Optiune invalida!" << endl;
					break;
				}
			}
			while (op5 != 0);
			break;

		case 0:
			cout << "Bye! Bye!" << endl;
			break;

		default:
			cout << "Optiune invalida!" << endl;
			break;
		}
	}
	while (op != 0); // end meniu principal
	return 0;
}
