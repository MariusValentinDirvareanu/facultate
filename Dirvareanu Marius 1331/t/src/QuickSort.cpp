#include "QuickSort.h"



QuickSort::QuickSort(vector<int> a, int l, int h)
{
	qSort(a, l, h);
	afisare();
}

int QuickSort::partition()
{
	pivot = vec[high];
	i = (low - 1);   

	for (j = low; j < high; ++j)
	{
		if (vec[j] <= pivot)
		{
			++i;   
			swap(vec[i], vec[j]);
		}
	}
	swap(vec[i + 1], vec[high]);
	return (i + 1);
}

void QuickSort::qSort(vector<int> a, int l, int h)
{
	vec = a;
	low = l;
	high = h;
	if (low < high)
	{
		pi = partition();
		qSort(vec, low, pi - 1);
		qSort(vec, pi + 1, high);
	}
}

void QuickSort::afisare() const {
	for (auto ee : vec) {
		cout << ee << ' ';
	}
	cout << endl;
}


QuickSort::~QuickSort()
{
}
