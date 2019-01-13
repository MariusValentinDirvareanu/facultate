#include "Stiva.h"



Stiva::Stiva()
{
}

void Stiva::creare_stiva()
{
	prim = new punct;
	cout << "Valoarea primului punct v= ";
	cin >> v;
	prim->x = v;
	prim->urm = nullptr;
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
	cap = prim;
}

void Stiva::parcurgere_stiva()
{
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
				if (p->x >= 10) {
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

void Stiva::stergere_din_stiva()
{
	p = cap;
	cap = cap->urm;
	delete p;
}

void Stiva::adaugare_in_stiva(float v)
{
	// adauga punct cu valoare v in stiva
	q = new punct;
	q->x = v;
	q->urm = cap;
	cap = q;
}

void Stiva::schimbareBaza(int numarDeSchimbatBaza, int baza) {
	while (numarDeSchimbatBaza >= baza) {
		adaugare_in_stiva(static_cast<float>(numarDeSchimbatBaza));
		numarDeSchimbatBaza = static_cast<int>(numarDeSchimbatBaza / baza);
		numarElemente++;
	}
	adaugare_in_stiva(static_cast<float>(numarDeSchimbatBaza));
	if (baza > 10) {
		b16 = 1;
	}
}

void Stiva::verificare(int baza) {
	numar = 0;
	p = nullptr;
	for (p = cap; p; p = p->urm) {
		numar += p->x*pow(baza, numarElemente);
		numarElemente--;
	}
	cout << numar << endl;
}


Stiva::~Stiva()
{
}
