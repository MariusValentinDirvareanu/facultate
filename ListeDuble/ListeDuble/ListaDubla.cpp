#include "ListaDubla.h"



ListaDubla::ListaDubla()
{
	prim = new punct;
	cout << "Valoarea primului punct v= ";
	cin >> v;
	prim->x = v;
	prim->prec = nullptr;
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
			p->prec = q;
			p->urm = nullptr;
			q->urm = p;
			q = p; // ultimul punct din lista
		}
	} while ((a == 'd') || (a == 'D'));
	cap = prim;
}

ListaDubla::ListaDubla(unsigned numarElemente)
{
	prim = new punct;
	cin >> v;
	prim->x = v;
	prim->prec = nullptr;
	prim->urm = nullptr;
	q = prim; // q este utlimul punct din lista, care la inceput coincide cu primul punct
	for(unsigned i=0;i<numarElemente-1;++i)
	{
		cin >> v;
		p = new punct;
		p->x = v;
		p->prec = q;
		p->urm = nullptr;
		q->urm = p;
		q = p; // ultimul punct din lista
	}
	cap = prim;
}


void ListaDubla::parcurgere_lista()
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
			cout << p->x << " ";
		}
		cout << endl << "Numarul de puncte din lista este n=" << n << endl;
	}
}

void ListaDubla::parcurgere_lista_invers()
{
	int n = 0; //numara punctele din lista

	if (!cap) // cap este NULL, adica lista este vida
		cout << "Lista este vida! " << endl;
	else
	{
		// lista nu este vida; o afiseaza si numara ounctele listei
		cout << "Lista de puncte inversata este:" << endl;
		// ajung la ultimul element din lista
		q = cap;
		p = cap->urm;
		while (p)
		{
			q = p;
			p = p->urm;
		}
		// in q este ultimul element din lista
		for (p = q; p; p = p->prec)
		{
			n++;
			cout << p->x << " ";
		}
		cout << endl << "Numarul de puncte din lista este n=" << n << endl;
	}
}

void ListaDubla::stergere_lista()
{
	p = cap;
	while (p)
	{
		cap = cap->urm;
		delete p;
		p = cap;
	}
	cout << "Lista a fost stearsa!!" << endl;
}



void ListaDubla::adaugaElementInterior(float elementAdaugat, float elementExistent)
{
	prim = cap;
	if (cap->x == elementExistent)
	{
		q = new punct;
		q->x = elementAdaugat;
		q->urm = cap;
		q->prec = nullptr;
		cap->prec = q;
		cap = q;
	}
	else {
		p = cap;
		cap = cap->urm;
		while (cap != nullptr)
		{
			if (cap->x == elementExistent) // adauga punct cu valoare v
			{
				q = new punct;
				q->x = elementAdaugat;
				q->prec = p;
				q->urm = cap;
				cap->prec = q;
				p->urm = q;
				break;
			}
			cap = cap->urm;
			p = p->urm;
		}
		cap = prim;
	}

}

void ListaDubla::stergereElementLista(float element)
{
	q = nullptr;
	p = cap;
	if (cap->x == element) {
		p = cap;
		cap = cap->urm;
		cap->prec = nullptr;
		delete p;
	}
	else
	{
		//p = cap;
		q = cap;
		cap = cap->urm;
		while (cap != nullptr) {
			if (cap->x == element) {
				q->urm = cap->urm;
				if (q->urm != nullptr) {
					(q->urm)->prec = q;
				}
				delete cap;
				break;
			}
			cap = cap->urm;
			q = q->urm;
		}
		cap = p;
	}
	//cap = q;
}


void ListaDubla::adaugareLaInceput(float elementAdaugat)
{
	p = new punct;
	p->x = elementAdaugat;
	p->urm = cap;
	p->prec = nullptr;
	cap->prec = p;
	cap = p;
}

void ListaDubla::adaugareLaSfarsit(float elementAdaugat)
{
	p = cap;
	q = nullptr;
	while (p != nullptr) {
		q = p;
		p = p->urm;
	}
	p = new punct;
	p->x = elementAdaugat;
	p->urm = nullptr;
	p->prec = q;
	q->urm = p;
}

ListaDubla::~ListaDubla()
{
}
