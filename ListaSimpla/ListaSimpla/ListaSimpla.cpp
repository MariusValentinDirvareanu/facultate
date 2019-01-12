#include "ListaSimpla.h"


auto ListaSimpla::creare_lista() -> punct*
{
	punct *prim, *p, *q;
	float v; char a;

	prim = new punct;
	cout << "Valoarea primului punct v= ";
	cin >> v;
	prim->x = v;
	prim->urm = NULL;
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
			p->urm = NULL;
			q->urm = p;
			q = p; // ultimul punct din lista
		}
	} while ((a == 'd') || (a == 'D'));
	return prim;
}

void ListaSimpla::parcurgere_lista()
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

#define PL parcurgere_lista();

//stergere lista completa
auto ListaSimpla::stergereLista() -> punct*
{
	punct *p;
	p = cap;
	while (p != NULL) {
		cap = cap->urm;
		delete p;
		p = cap;
	}
	return p;
}


auto ListaSimpla::stergereElementLista(float element) -> punct*
{
	punct *p, *q;
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
		while (p != NULL) {
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
	return cap;
}

void ListaSimpla::stergereElementDinLista(float element)
{
	cap = stergereElementLista(element);
}

auto ListaSimpla::adaugareLaInceput(float v) -> punct*
{
	punct *p;
	p = new punct;
	p->x = v;
	p->urm = cap;
	//p = cap;
	return p;
}

auto ListaSimpla::adaugareLaSfarsit(float v) -> punct*
{
	punct *p, *q;
	p = cap;
	q = nullptr;
	while (p != NULL) {
		q = p;
		p = p->urm;
	}
	p = new punct;
	p->x = v;
	p->urm = nullptr;
	q->urm = p;
	return cap;
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



ListaSimpla::ListaSimpla()
{
	// PL a fost definit ca parcurgere_lista(cap)

	cap = creare_lista();
	cout << "cap lista v=" << cap->x << endl;
	PL;

	/*cap=adaugareLaInceput(cap, 2);
	PL;

	cap = adaugareLaSfarsit(cap, 3);
	PL;

	adaugareInInterior(cap, 10, 2);
	PL;*/

	cap = stergereElementLista(2);
	PL;
}


ListaSimpla::~ListaSimpla()
{
}
