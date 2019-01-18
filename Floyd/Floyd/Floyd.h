#pragma once

#include <iostream> 

// Numarul de noduri
#define V 4 

using namespace std;

#define INF 99999 

class Floyd
{
public:
	Floyd();
	void floydWarshall(int graph[][V]);
	void printSolution(int dist[][V]);
	~Floyd();
};

