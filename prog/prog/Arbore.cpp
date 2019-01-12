#include "Arbore.h"


Arbore::Arbore()
{
	// citeste arbore Binar

	// citim radacina
	cout << "Valoare radacina arbore = ";
	cin >> v;
	treenod* arboreB = new treenod;
	arboreB->parinte = nullptr;
	arboreB->fiustg = nullptr;
	arboreB->fiudr = nullptr;
	arboreB->val = v;

	citeste_arbore(arboreB, 1, 0);

	// parcurgere Stanga-Radacina-Dreapta
	cout << "Parcurgere SRD: ";
	parcurgere_SRD(arboreB);
	cout << endl;


	// parcurgere Stanga-Dreapta-Radacina
	cout << "Parcurgere SDR: ";
	parcurgere_SDR(arboreB);
	cout << endl;

	// parcurgere Radacina- Stanga-Dreapta
	cout << "Parcurgere RSD: ";
	parcurgere_RSD(arboreB);
	cout << endl;
}

void Arbore::citeste_arbore(treenod* radacina, int ok, int nivel)
{
	// nivel = nivelul la care se fac citirile fiilor

	treenod* a;
	// ok=1 daca adauga fii
	if (ok)
	{
		okf = 0;
		cout << "Fiu stg la nivel " << nivel << " [d/n] ?";
		cin >> c;
		if ((c == 'd') || (c == 'D'))
		{
			if (okf)
			{
				nivel--;
			}
			cout << "Valoare fiu stg = ";
			cin >> v;
			a = new treenod;
			a->parinte = radacina;
			a->fiustg = nullptr;
			a->fiudr = nullptr;
			a->val = v;
			radacina->fiustg = a;
			cout << "Fiul are fii [d/n] ?";
			cin >> c;
			if ((c == 'd') || (c == 'D'))
			{
				nivel++;
				okf = 1;
				citeste_arbore(a, 1, nivel);
			}
			/*else
			{
				nivel--;
			}*/
		}
		cout << "Fiu dr la nivel " << nivel << " [d/n] ?";
		cin >> c;
		if ((c == 'd') || (c == 'D'))
		{
			if (okf)
			{
				nivel--;
			}
			cout << "Valoare fiu dr = ";
			cin >> v;
			a = new treenod;
			a->parinte = radacina;
			a->fiustg = nullptr;
			a->fiudr = nullptr;
			a->val = v;
			radacina->fiudr = a;
			cout << "Fiul are fii [d/n] ?";
			cin >> c;
			if ((c == 'd') || (c == 'D'))
			{
				nivel++;
				citeste_arbore(a, 1, nivel);
			}
			/*else
			{
				nivel--;
			}*/
		}
	}
}

void Arbore::parcurgere_SRD(treenod* radacina)
{
	if (radacina != nullptr)
	{
		parcurgere_SRD(radacina->fiustg);
		cout << radacina->val << " , ";
		parcurgere_SRD(radacina->fiudr);
	}
}

void Arbore::parcurgere_SDR(treenod* radacina)
{
	if (radacina != nullptr)
	{
		parcurgere_SDR(radacina->fiustg);
		parcurgere_SDR(radacina->fiudr);
		cout << radacina->val << " , ";
	}
}

void Arbore::parcurgere_RSD(treenod* radacina)
{
	if (radacina != nullptr)
	{
		cout << radacina->val << " , ";
		parcurgere_RSD(radacina->fiustg);
		parcurgere_RSD(radacina->fiudr);
	}
}


Arbore::~Arbore()
{
}
