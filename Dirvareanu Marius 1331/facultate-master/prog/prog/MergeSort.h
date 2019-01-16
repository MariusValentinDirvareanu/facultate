#pragma once
#include <iostream>
#include <vector>

using namespace std;


class MergeSort
{
private:
	int i, j, k, n1, n2, m;
	vector<int> vec;
	vector<int> L;
	vector<int> R;


public:
	MergeSort(vector<int>, int, int);
	void merge(int, int, int);
	void mSort(vector<int>, int, int);
	void afisare() const;
	~MergeSort();
};

