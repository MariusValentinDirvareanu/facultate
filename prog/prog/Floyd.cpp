#include "Floyd.h"



Floyd::Floyd()
{
	int graph[VV][VV] = { {0, 5, INF, 10},
					{INF, 0, 3, INF},
					{INF, INF, 0, 1},
					{INF, INF, INF, 0}
	};

	floydWarshall(graph);
}


void Floyd::floydWarshall(int graph[][VV])
{
	int dist[VV][VV], i, j, k;

	for (i = 0; i < VV; i++)
		for (j = 0; j < VV; j++)
			dist[i][j] = graph[i][j];

	for (k = 0; k < VV; k++)
	{
		for (i = 0; i < VV; i++)
		{
			for (j = 0; j < VV; j++)
			{
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	printSolution(dist);
}

void Floyd::printSolution(int dist[][VV])
{
	cout << "Urmatoarea matrice arata distanta cea mai scurta intre orice noduri din graf \n" << endl;
	for (int i = 0; i < VV; i++)
	{
		for (int j = 0; j < VV; j++)
		{
			if (dist[i][j] == INF)
				cout << "INF" << " ";
			else
				cout << dist[i][j] << " ";
		}
		cout << endl;
	}
}



Floyd::~Floyd()
{
}
