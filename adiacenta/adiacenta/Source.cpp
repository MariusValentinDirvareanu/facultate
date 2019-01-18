#include <iostream>
#include <cmath>

using namespace std;

int A[100][100], n;


void matrice_drumuri()
{
	int i, j, k;
	for (k = 1; k <= n; k++)
		for (i = 1; i <= n; i++)   //algoritm Roy-Floyd verifica daca exista noduri k care sa scurteze drumul de la i la j, trecand mai intai prin k
			for (j = 1; j <= n; j++)
				if (A[i][j] > A[i][k] + A[k][j])  //daca distanta de la nodul i la j este mai mare decat distanta de la i la k + de la k la j
					A[i][j] = A[i][k] + A[k][j];  //atunci distanta de la i la j ia suma distantelor(sau a ponderilor) de la i la k +de la k la j

}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> A[i][j];
			if (!A[i][j] && i != j)
				A[i][j] = 1000;
			// daca nu exista drum de la i la j ar trebui ca sa punem distanta de la i la j infinit,
			//dar in acest caz punem o valoare foarte mare care tine loc de infinit
		}
	matrice_drumuri();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
		{
			if (A[i][j] >= 1000)   // afisez infinit acolo unde nu exista legatura intre i si j
				cout << " ~ ";
			else
				cout << " " << A[i][j] << " ";
		}
		cout << endl;
	}
	system("PAUSE");

	return 0;
}
