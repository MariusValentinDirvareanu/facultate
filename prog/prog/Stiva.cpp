#include "Stiva.h"



Stiva::Stiva()
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

Stiva::Stiva(unsigned numarElemente)
{
	prim = new punct;
	cout << "Elementele stivei: ";
	cin >> v;
	prim->x = v;
	prim->urm = nullptr;
	for(unsigned ee=0;ee<numarElemente-1;++ee)
	{
		cin >> v;
		p = new punct;
		p->x = v;
		p->urm = prim;
		prim = p;
	}
	cap = prim;
}


void Stiva::parcurgere_stiva()
{
	int n = 0; //numara punctele din lista

	if (!cap) // cap este NULL, adica lista este vida
		cout << "Lista este vida! " << endl;
	else
	{
		// lista nu este vida; o afiseaza si numara punctele listei
		cout << "Lista de puncte este:" << endl;
		for (p = cap; p; p = p->urm)
		{
			n++;
			cout << p->x << endl;
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

Stiva::~Stiva()
{
}
