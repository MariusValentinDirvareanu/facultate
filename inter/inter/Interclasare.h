#pragma once
#include <iostream>

using namespace std;

class Interclasare
{
private:
	struct nod {
		int info;
		nod* adr;
	};

public:
	Interclasare();
	auto creare()->nod *;
	void parcurgere(nod *);
	auto inserare(nod *, int)->nod *;
	int testare(nod *);
	~Interclasare();
};

