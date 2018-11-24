#include <iostream>
#include <conio.h>
#include <map>
#include <cmath>

using namespace std;
// PROGRAM LISTA DE TIP STIVA


map<int, char> baza16 = { {10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'} };

int b16 = 0, numarElemente = 0;

struct punct {
	float x;
	punct *urm;
};

punct *creare_stiva()
{
	punct *prim, *p;
	float v; char a;

	prim = new punct;
	cout << "Valoarea primului punct v= ";
	cin >> v;
	prim->x = v;
	prim->urm = NULL;
	do
	{
		cout << "Adaugam element nou in lista (d/n)? ";
		cin >> a;
		if ((a == 'd') || (a == 'D'))
		{
			cout << "Valoare punct v= ";
			cin >> v;
			p = new punct;
			p->x = v;
			p->urm = prim;
			prim = p;
		}
	} while ((a == 'd') || (a == 'D'));
	return prim;
}

void parcurgere_stiva(punct *cap)
{
	punct *p;
	int n = 0; //numara punctele din lista

	if (!cap) // cap este NULL, adica lista este vida
		cout << "Lista este vida! " << endl;
	else
	{
		// lista nu este vida; o afiseaza si numara ounctele listei
		cout << "Lista de puncte este:" << endl;
		for (p = cap; p; p = p->urm)
		{
			n++;
			if (b16 == 1) {
				if (p->x>=10) {
					cout << baza16.at(p->x) << endl;
				}
				else {
					cout << p->x << endl;
				}
			}
			else {
				cout << p->x << endl;
			}
		}
		cout << endl << "Numarul de puncte din stiva este n=" << n << endl;
	}
}

punct *stergere_din_stiva(punct *cap)
{
	punct *p;

	p = cap;
	cap = cap->urm;
	delete p;

	return cap;
}

punct *adaugare_in_stiva(punct *cap, float v)
{
	// adauga punct cu valoare v in stiva
	punct *q;

	q = new punct;
	q->x = v;
	q->urm = cap;
	cap = q;

	return cap;
}

void schimbareBaza(int n, int baza, punct **cap) {
	while (n >= baza) {
		*cap = adaugare_in_stiva(*cap, n%baza);
		n = (int)n / baza;
		numarElemente++;
	}
	*cap = adaugare_in_stiva(*cap, n);
	if (baza >10) {
		b16 = 1;
	}
}

void verificare(punct *cap, int baza) {
	punct *p;
	int numar = 0;
	p = nullptr;
	for (p = cap; p; p = p->urm) {
		numar += p->x*pow(baza, numarElemente);
		numarElemente--;
	}
	cout << numar << endl;
}


int main() // program liste
{
	punct *cap;
	//float v;
	unsigned n, baza;

	cap = nullptr;
	/*cap = creare_stiva();
	cout << "cap stiva v=" << cap->x << endl;

	parcurgere_stiva(cap);

	cout << "Sterge element din stiva! " << endl;
	_getch();
	cap = stergere_din_stiva(cap);
	parcurgere_stiva(cap);

	cout << "Adauga element in stiva v= ";
	cin >> v;
	//_getch();
	cap = adaugare_in_stiva(cap, v);
	parcurgere_stiva(cap);*/

	cout << "Numar: ";
	cin >> n;
	cout << "Baza: ";
	cin >> baza;
	schimbareBaza(n, baza, &cap);
	parcurgere_stiva(cap);
	verificare(cap, baza);

	system("PAUSE");
	return 0;
}
