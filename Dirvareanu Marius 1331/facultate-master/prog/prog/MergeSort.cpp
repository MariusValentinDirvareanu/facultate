#include "MergeSort.h"



MergeSort::MergeSort(vector<int> a, int l, int m)
{
	mSort(a, l, m);
	afisare();
}

void MergeSort::merge(int l, int m, int r)
{
	n1 = m - l + 1;
	n2 = r - m;
	L.resize(n1);
	R.resize(n2);

	for (i = 0; i < n1; i++)
		L[i] = vec[l + i];
	for (j = 0; j < n2; j++)
		R[j] = vec[m + 1 + j];

	i = 0; j = 0; k = l; 
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			vec[k] = L[i];
			i++;
		}
		else
		{
			vec[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		vec[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		vec[k] = R[j];
		j++;
		k++;
	}
}

void MergeSort::mSort(vector<int> a, int l, int r)
{
	vec = a;
	if (l < r)
	{
		m = l + (r - l) / 2;

		mSort(vec, l, m);
		mSort(vec, m + 1, r);

		merge(l, m, r);
	}
}

void MergeSort::afisare() const {
	for (auto ee : vec) {
		cout << ee << ' ';
	}
	cout << endl;
}


MergeSort::~MergeSort()
{
}
