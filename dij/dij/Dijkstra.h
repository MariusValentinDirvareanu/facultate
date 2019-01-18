#pragma once
#include <iostream>
#include <limits.h> 

using namespace std;

// Numarul de noduri in graf
#define V 9 

class Dijkstra
{
public:
	Dijkstra();
	void printSolution(int dist[], int n);
	int minDistance(int dist[], bool sptSet[]);
	void dijkstra(int graph[V][V], int src);
	~Dijkstra();
};

