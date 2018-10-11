#pragma once
#include <vector>
#include <iostream>

using namespace std;


class SelectionSort
{
private:
	int i, j;
	int n;
	int iMin;
	vector<int> vec;
public:
	SelectionSort(vector<int>);
	~SelectionSort();
};

