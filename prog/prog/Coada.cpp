#include "Coada.h"



Coada::Coada()
{
	prim = new punct;
	cout << "Valoarea primului punct din coada este v= ";
	cin >> v;
	prim->x = v;
	prim->prec = nullptr;
	prim->urm = nullptr;
	ultim = prim; // q este utlimul punct din coada, care la inceput coincide cu primul punct
	do
	{
		cout << "Adaugam element nou in coada (d/n)? ";
		cin >> a;
		if ((a == 'd') || (a == 'D'))
		{
			cout << "Valoare punct v= ";
			cin >> v;
			p = new punct;
			p->x = v;
			p->prec = ultim;
			p->urm = nullptr;
			ultim->urm = p;
			ultim = p; // ultimul punct din lista
		}
	} while ((a == 'd') || (a == 'D'));
}

Coada::Coada(unsigned numarElemente)
{
	prim = new punct;
	cin >> v;
	prim->x = v;
	prim->prec = nullptr;
	prim->urm = nullptr;
	ultim = prim; // q este utlimul punct din coada, care la inceput coincide cu primul punct
	for(unsigned i=0;i<numarElemente-1;++i)
	{
		cin >> v;
		p = new punct;
		p->x = v;
		p->prec = ultim;
		p->urm = nullptr;
		ultim->urm = p;
		ultim = p; // ultimul punct din lista
	}
}


void Coada::parcurgere_coada()
{
	int n = 0; //numara punctele din coada
	if (!prim) // cap este NULL, adica coada este vida
		cout << "Coada este vida! " << endl;
	else
	{
		// coada nu este vida; o afiseaza si numara ounctele cozii
		cout << "Coada de puncte este:" << endl;
		for (p = prim; p; p = p->urm)
		{
			n++;
			cout << p->x << " ";
		}
		cout << endl << "Numarul de puncte din coada este n=" << n << endl;
	}
}

void Coada::stergere_element_coada()
{
	cout << "Sterge element din coada!" << endl;
	p = prim;

	prim = prim->urm;
	prim->prec = nullptr;
	delete p;
}

void Coada::adauga_element_coada(float element)
{
	cout << "Adauga element la coada!" << endl;

	p = new punct;
	p->x = element;
	ultim->urm = p;
	p->prec = ultim;
	p->urm = nullptr;
	ultim = p;
}


Coada::~Coada()
{
}
