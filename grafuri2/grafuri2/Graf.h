#pragma once

#include <iostream>
#include <vector>

using namespace std;


class Graf
{

private:
	vector<int> adj[5];
	void addEdge(int, int);
	void printGraph(int);

public:
	Graf();
	~Graf();
};

