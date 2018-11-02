#include <iostream>

using namespace std;

struct punct {
	float x;
	punct *urm;
};

punct *creare_lista()
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

void parcurgere_lista(punct *cap)
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

void stergereLista(punct **cap) {
	punct *p, *next;
	p = *cap;
	while (p!=NULL) {
		next = p->urm;
		delete(p);
		p = next;
	}
	*cap = nullptr;
}


/*void stergereLista(punct *cap) {
	punct *p;
	p = cap;
	while (p != NULL) {
		cap = cap->urm;
		delete(p);
		p = cap;
	}
}*/

punct* adaugareLaInceput(punct* cap, float v) {
	punct *p;
	p = new punct;
	p->x = v;
	p->urm = cap;
	p = cap;
	return cap;
}

punct* adaugareLaSfarsit(punct* cap, float v) {
	punct *p, *q;
	p = cap;
	q = nullptr;
	while (!p) {
		q = p;
		p = p->urm;
	}
	p = new punct;
	p->x = v;
	p->urm = nullptr;
	q->urm = p;
	return cap;
}


void adaugareInInterior(punct *cap, float v, float w) {
	punct *p, *q;
	p = cap;
	while (!cap) {
		if (p->x == w) {
			q = new punct;
			q->x = v;
			q->urm = p->urm;
			p->urm = q;
			break;
		}
	}
}

int main() // program liste
{
	punct *cap;

	cap = creare_lista();
	cout << "cap lista v=" << cap->x << endl;

	parcurgere_lista(cap);

	/*
	stergere_lista();
	parcurgere_lista();

	cap=creare_lista();
	parcurgere_lista(cap);

	adauga_la_inceput(cap);
	parcurgere_lista();
	*/

	stergereLista(&cap);
	parcurgere_lista(cap);


	system("PAUSE");
	return 0;
}
