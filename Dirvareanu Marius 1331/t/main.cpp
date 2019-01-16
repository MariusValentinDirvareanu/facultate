#include <iostream>
#include "EcGrad2.h"
#include "FactoriPrimi.h"
#include "BubleSort.h"
#include "cmmdc.h"
#include "SelectionSort.h"
#include "CountingSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "InsertionSort.h"
#include "RadixSort.h"
#include "ShellSort.h"
#include "Cautare.h"

using namespace std;

int main()
{
	int op, op1, op2;

	do  // reia meniu principal pana la exit
	{
		// meniu principal
		cout << "PROGRAME SDA " << endl;
		cout << "1. Probleme diverse" << endl;
		cout << "2. Algoritmi de sortare" << endl;
		// se vor adauga optiuni
		cout << "0. Exit program." << endl;
		cout << "Optiune : "; cin >> op;


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
				cout << "Optiune probleme diverse : "; cin >> op1;
				switch (op1)
				{
				case 1: {
					EcGrad2 ecuatie;
					cout << '\n';
					break; }

				case 3: {
					FactoriPrimi factor;
					cout << '\n';
					break; }

				case 4: {
					cmmdc cmmdc;
					cout << '\n';
					break; }

				case 0:
					cout << "A terminat submeniu 1" << endl << endl;
					break;

				default:
					cout << "Optiune invalida!" << endl;
					break;

				}
			} while (op1 != 0);
			break;

		case 2: //algoritmi de sortare
			do
			{
				cout << "2.1. Algoritm Buble Sort" << endl;
				cout << "2.2. Algoritm Selection Sort" << endl;
				cout << "2.3. Algoritm Counting Sort" << endl;
				cout << "2.4. Algoritm Quick Sort" << endl;
				cout << "2.5. Algoritm Merge Sort" << endl;
				cout << "2.6. Algoritm Insertion Sort" << endl;
				cout << "2.7. Algoritm Radix Sort" << endl;
				cout << "2.8. Algoritm Shell Sort" << endl;
				cout << "2.9. Cautare element" << endl;
				cout << "2.0. Exit algoritmi de sortare!" << endl;
				cout << "Optiune algoritmi de sortare: "; cin >> op2;
				switch (op2)
				{
				case 1: {
					vector<int> av = { 3,9,4,6,7,5,7,6,10,56 };
					BubleSort sir(av);
					break;
				}
				case 2: {
					vector<int> e = { 3,9,4,6,7,5,7,6,10,56 };
					SelectionSort sir2(e);
					break;
				}

				case 3: {
					vector<double> e = { 3,9,4,6,7,5,3.5,8.66,10,56 };
					CountingSort sir3(e);
					break;
				}

				case 4: {
					vector<int> e = { 3,9,4,6,7,5,3,8,10,56 };
					QuickSort sir4(e,0,(int)e.size()-1);
					break;
				}

				case 5: {
					vector<int> e = { 3,9,4,6,7,5,3,8,10,56 };
					MergeSort sir5(e, 0, (int)e.size() - 1);
					break;
				}

				case 6: {
					vector<int> e = { 3,9,4,6,7,5,3,8,10,56 };
					InsertionSort sir6(e);
					break;
				}

				case 7: {
					vector<int> e = { 3,9,4,6,7,5,3,8,10,56 };
					RadixSort sir7(e);
					break;
				}

				case 8: {
					vector<int> e = { 3,9,4,6,7,5,3,8,10,56 };
					ShellSort sir8(e);
					break;
				}

				case 9: {
					vector<int> e = { 3,9,55,6,7,5,4,8,10,56 };
					int r = 7;
					Cautare element(e,r);
					break;
				}

				case 0:
					cout << "A terminat submeniu 2" << endl << endl;
					break;

				default:
					cout << "Optiune invalida!" << endl;
					break;

				}
			} while (op2 != 0);
			break;

		case 0:
			cout << "Bye! Bye!" << endl;
			break;

		default:
			cout << "Optiune invalida!" << endl;
			break;


		}
	} while (op != 0); // end meniu principal
	return 0;
}
