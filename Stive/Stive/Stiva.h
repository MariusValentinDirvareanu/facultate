#pragma once
#include <iostream>
#include <map>
#include <cmath>

using namespace std;

class Stiva
{
public:
	Stiva();
	void creare_stiva();
	void parcurgere_stiva();
	void stergere_din_stiva();
	void adaugare_in_stiva(float);
	void schimbareBaza(int, int);
	void verificare(int);
	~Stiva();

private:
	map<int, char> baza16 = { {10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'} };
	int b16 = 0, numarElemente = 0;
	struct punct {
		float x;
		punct *urm;
	};
	punct *cap;
	double numar;
	punct *prim, *p;
	float v; 
	char a;
	punct *q;
};

