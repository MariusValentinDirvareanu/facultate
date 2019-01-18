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

	void citeste_arbore(treenod*, int, int);
	void parcurgere_SRD(treenod*);
	void parcurgere_RSD(treenod*);
	void parcurgere_SDR(treenod*);
};

