#pragma once
#include <iostream>
#include <vector>

using namespace std;

class QuickSort
{
private:
	int pivot, i, j, pi, low, high;
	vector<int> vec;

public:
	QuickSort(vector<int>, int, int);
	void qSort(vector<int>, int, int);
	int partition();
	void afisare() const;
	~QuickSort();
};

