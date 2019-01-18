#include "Graf.h"



Graf::Graf()
{
	addEdge(0, 1);
	addEdge(0, 4);
	addEdge(1, 2);
	addEdge(1, 3);
	addEdge(1, 4);
	addEdge(2, 3);
	addEdge(3, 4);
	printGraph(5);
}

void Graf::addEdge(int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void Graf::printGraph(int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Lista de adiacenta a punctului "
			<< v << "\n cap ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}


Graf::~Graf()
{
}
