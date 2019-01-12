#pragma once

#include <iostream>

using namespace std;

class Arbore
{
public:
	Arbore();
	~Arbore();

private:
	struct treenod
	{
		treenod* parinte;
		treenod* fiustg;
		treenod* fiudr;
		int val;
	};

	char c;
	int v;
	int okf = 0;

	void citeste_arbore(Arbore::treenod*, int, int);
	void parcurgere_SRD(Arbore::treenod*);
	void parcurgere_RSD(Arbore::treenod*);
	void parcurgere_SDR(Arbore::treenod*);
};

