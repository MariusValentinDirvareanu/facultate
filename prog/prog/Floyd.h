#pragma once

#include <iostream> 

// Numarul de noduri
#define VV 4 

using namespace std;

#define INF 99999 

class Floyd
{
public:
	Floyd();
	void floydWarshall(int graph[][VV]);
	void printSolution(int dist[][VV]);
	~Floyd();
};

