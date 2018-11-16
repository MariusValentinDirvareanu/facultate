#include <iostream>

using namespace std;
// PROGRAM LISTA DUBLU INLANTUITA

struct punct {
	float x;
	punct *prec;
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
	prim->prec = NULL;
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
			p->prec = q;
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

void parcurgere_lista_invers(punct *cap)
{
	punct *p, *q;
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

punct *stergere_lista(punct *cap)
{
	punct *p;
	p = cap;
	while (p)
	{
		cap = cap->urm;
		delete p;
		p = cap;
	}
	cout << "Lista a fost stearsa!!" << endl;
	return cap;
}

punct *adauga_dupa_element(punct *cap, float v, float v1)
{
	// adauga punct cu valoare v dupa fiecare punct cu valoare v1
	punct *p, *q;

	p = cap;
	while (p)
	{
		if (p->x == v1) // adauga punct cu valoare v
		{
			q = new punct;
			q->x = v;
			q->prec = p;
			q->urm = p->urm;
			if (q->urm)
				(q->urm)->prec = q;

			p->urm = q;

			p = p->urm;
		}
		p = p->urm;
	}
	return cap;
}

int main() // program liste
{
	punct *cap;
	float v1, v;

	cap = creare_lista();
	cout << "cap lista v=" << cap->x << endl;

	parcurgere_lista(cap);

	parcurgere_lista_invers(cap);

	/* //stergere intreaga lista
	cap=stergere_lista(cap);
	parcurgere_lista(cap);

	//recreeaza lista
	cap=creare_lista();
	parcurgere_lista(cap);
	*/

	cout << "Adauga dupa valoare v1= "; cin >> v1;
	cout << "          valoarea v= "; cin >> v;
	cap = adauga_dupa_element(cap, v, v1);

	parcurgere_lista(cap);


	system("PAUSE");
	return 0;
}
