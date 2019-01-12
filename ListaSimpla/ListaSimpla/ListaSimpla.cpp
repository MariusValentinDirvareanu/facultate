#include "ListaSimpla.h"


ListaSimpla::ListaSimpla()
{
	prim = new punct;
	cout << "Valoarea primului punct v= ";
	cin >> v;
	prim->x = v;
	prim->urm = nullptr;
	q = prim; // q este utlimul punct din lista, care la inceput coincide cu primul punct
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
			p->urm = nullptr;
			q->urm = p;
			q = p; // ultimul punct din lista
		}
	} while ((a == 'd') || (a == 'D'));
	cap = prim;
}

ListaSimpla::ListaSimpla(unsigned n)
{
	cout << "Introduceti cele " << n << " valori ale liste." << endl;
	prim = new punct;
	cin >> v;
	prim->x = v;
	prim->urm = nullptr;
	q = prim; // q este utlimul punct din lista, care la inceput coincide cu primul punct
	for (unsigned i = 0; i < n - 1; ++i)
	{
		cin >> v;
		p = new punct;
		p->x = v;
		p->urm = nullptr;
		q->urm = p;
		q = p; // ultimul punct din lista
	}
	cap = prim;
}

void ListaSimpla::parcurgere_lista()
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
			cout << p->x << " ";
		}
		cout << endl << "Numarul de puncte din lista este n=" << n << endl;
	}
}

//stergere lista completa
void ListaSimpla::stergereLista()
{
	punct *p;
	p = cap;
	while (p != NULL) {
		cap = cap->urm;
		delete p;
		p = cap;
	}
	cap = p;
}


void ListaSimpla::stergereElementLista(float element)
{
	q = nullptr;
	p = cap;
	if (cap->x == element) {
		p = cap;
		cap = cap->urm;
		delete p;
	}
	else
	{
		p = cap->urm;
		q = cap;
		while (p != nullptr) {
			//q = p->urm;
			//cap = cap->urm;
			if (p->x == element) {
				q->urm = p->urm;
				//p->urm = cap;
				delete p;
				break;
			}
			p = p->urm;
		}
	}
	cap = cap;
}


void ListaSimpla::adaugareLaInceput(float v)
{
	punct *p;
	p = new punct;
	p->x = v;
	p->urm = cap;
	cap = p;
}

void ListaSimpla::adaugareLaSfarsit(float v)
{
	p = cap;
	q = nullptr;
	while (p != nullptr) {
		q = p;
		p = p->urm;
	}
	p = new punct;
	p->x = v;
	p->urm = nullptr;
	q->urm = p;
}


void ListaSimpla::adaugareInInterior(float v, float w) {
	punct *p, *q;
	p = cap;
	while (cap != nullptr) {
		if (p->x == w) {
			q = new punct;
			q->x = v;
			q->urm = p->urm;
			p->urm = q;
			break;
		}
	}
}

ListaSimpla::~ListaSimpla()
{
}
