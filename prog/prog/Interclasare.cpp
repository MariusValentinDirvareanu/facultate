#include "Interclasare.h"



Interclasare::Interclasare()
{
	nod*cap, *cap1, *cap2, *cap3, *p1, *p2;
	cap = nullptr;
	int ok1, ok2;
	cout << "citeste lista 1 (cu elemente in ordine crescatoare)" << endl;
	cap1 = creare();
	cout << "citeste lista 2  (cu elemente in ordine crescatoare)" << endl;
	cap2 = creare();


	ok1 = testare(cap1);

	ok2 = testare(cap2);


	if (ok1&&ok2)
	{

		p1 = cap1;
		p2 = cap2;

		cap3 = new nod;
		cap = cap3;

		cap3 = inserare(cap3, p1->info);
		while (p1&&p2) {

			if (p1->info < p2->info) {
				cap3 = inserare(cap3, p1->info);

				p1 = p1->adr;

			}
			else

			{
				cap3 = inserare(cap3, p2->info);
				p2 = p2->adr;

			}
		}
		if (p1)
			while (p1)
			{
				cap3 = inserare(cap3, p1->info);
				p1 = p1->adr;
			}
		if (p2)
			while (p2)
			{
				cap3 = inserare(cap3, p2->info);
				p2 = p2->adr;
			}

	}

	cout << "lungime 1 " << "lungime(cap1)" << endl;
	parcurgere(cap1);
	parcurgere(cap2);
	parcurgere((cap->adr)->adr);
}

auto Interclasare::creare() ->nod*
{
	nod *prim, *p, *q;
	int inf;
	char a;
	//citeste primul nod si deschide (creaza) lista
	prim = new nod;
	cout << "Adaugati element:";
	cin >> inf;
	prim->info = inf;
	prim->adr = nullptr;
	q = prim;
	//se citesc celelalte noduri din lista
	cout << "sfarsit[D -da/N -nu] ";
	cin >> a;
	while ((a != 'D') && (a != 'd'))
	{
		//citeste nod nou pe care il adauga in lista
		p = new nod;
		cout << "Adaugati element:";
		cin >> inf;
		p->info = inf;
		p->adr = nullptr;
		q->adr = p;
		q = p;
		cout << "sfarsit lista[D -da/N -nu] ";
		cin >> a;
	}
	return prim;
}

void Interclasare::parcurgere(nod*cap)
{

	nod*q;
	if (!cap)
	{
		cout << "lista este vida" << endl;
		return;
	}
	cout << "continutul listei " << endl;
	for (q = cap; q; q = q->adr)
	{
		cout << q->info << " ";
		cout << endl;
	}
}
auto Interclasare::inserare(nod*prim, int info)->nod*
{
	nod*c;
	c = new nod;
	c->adr = nullptr;
	c->info = info;
	prim->adr = c;


	return c;
}

int Interclasare::testare(nod* cap)
{
	int oki_doki;
	nod*p;
	oki_doki = 1;

	p = cap;
	if (!p->adr)
		return oki_doki;
	else
	{
		while (p->adr)
		{
			if ((p->info) > ((p->adr)->info))
				oki_doki = 0;

			p = p->adr;
		}

		return oki_doki;
	}

}


Interclasare::~Interclasare()
{
}
