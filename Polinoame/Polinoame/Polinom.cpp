#include "Polinom.h"
#include <numeric>


Polinom::Polinom(char optiune)
{
	// citeste cel doua polinoame
	cout << "Primul polinom" << endl;
	p1 = creare();
	cout << "Al doilea polinom" << endl;
	p2 = creare();

	cout << "Primul polinom este p1 = ";
	parcurgere(p1);
	cout << endl;
	cout << "Al doilea polinom este p2 = ";
	parcurgere(p2);

	// inmultim polinoamele date;
	// concatenam listele date intr-o singura lista
	if(optiune=='A')
	{
		adunare();
	}
	if (optiune == 'I')
	{
		inmultire();
	}
	cout << endl << "rezultatul fara reducerea termenilor este s = ";
	parcurgere(rezultat);

	// reducem termenii asemenea: adaugam la un monom din coeficientul altui monom din lista cu acelasi grad,
	//                            dupa care stergem monomul al carui coeficient l-am adaugat la primul monom

	reducere();
	cout << endl << "rezultatul polinoamelor este s = ";
	parcurgere(rezultat);
}

auto Polinom::creare() -> monom*
{
	// p = capatul listei polinom
	// q = tine minte ultimul monom din polinom

	cout << "Coeficientul primului monom din polinom coef = "; cin >> c;
	cout << "Gradul primului monom din polinom grad = "; cin >> g;
	p = new monom;
	p->coef = c; p->grad = g; p->urm = NULL;
	q = p;

	//adauga celelalte monoame
	do {
		cout << "Adauga monoame in polinom [d/n]? "; cin >> dn;
		if ((dn == 'd') || (dn == 'D'))
		{
			cout << "Coeficientul monomului din polinom coef = "; cin >> c;
			cout << "Gradul monomului din polinom grad = "; cin >> g;
			r = new monom;
			r->coef = c; r->grad = g; r->urm = NULL;
			q->urm = r;
			q = r;
		}
	} while ((dn == 'd') || (dn == 'D'));
	return p;
}

void Polinom::parcurgere(monom *cap)
{
	int semn = 0;

	if (!cap) // cap este NULL, adica polinom este vida
		cout << "Polinoml este vid! " << endl;
	else
	{
		// polinom nu este vida; il afiseaza
		for (p = cap; p; p = p->urm)
		{
			if ((semn == 1) && (p->coef > 0))
				cout << "+";
			if (p->grad > 0) {
				cout << p->coef << "*X^" << p->grad;
				semn = 1;
			}
		}
	}
	cout << endl;
}

void Polinom::inmultire()
{
	s = new monom;
	s->coef = 0;
	s->grad = 0;
	s->urm = nullptr;
	u = s;
	for (p = p1; p; p = p->urm)
	{
		for (r = p2; r; r = r->urm)
		{
			q = new monom;
			q->coef = p->coef*r->coef;
			q->grad = p->grad + r->grad;
			q->urm = nullptr;
			u->urm = q;
			u = q;
		}
	}

	rezultat = s;
}

void Polinom::adunare()
{
	s = new monom;
	s->coef = p1->coef;
	s->grad = p1->grad;
	s->urm = nullptr;
	u = s;
	for (p = p1->urm; p; p = p->urm)
	{
		q = new monom;
		q->coef = p->coef;
		q->grad = p->grad;
		q->urm = nullptr;
		u->urm = q;
		u = q;
	}
	for (p = p2; p; p = p->urm)
	{
		q = new monom;
		q->coef = p->coef;
		q->grad = p->grad;
		q->urm = nullptr;
		u->urm = q;
		u = q;
	}
	rezultat = s;
}

void Polinom::reducere()
{
	s = rezultat;
	for (p = s; p; p = p->urm)
	{
		u = p;
		for (q = p->urm; q; q = q->urm)
		{
			if (p->grad == q->grad)
			{
				p->coef = p->coef + q->coef;
				// sterge q din lista
				u->urm = q->urm;
				delete q;
				q = u;
			}
			u = q;
		}
	}
	rezultat = s;
}


Polinom::~Polinom()
{
}
