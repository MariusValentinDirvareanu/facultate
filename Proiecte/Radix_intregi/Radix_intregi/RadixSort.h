#pragma once

#include <iostream>
#include <vector>

using namespace std;

class RadixSort
{
private:
	vector<int> vec;
	vector<int> output;
	vector<int> Count;
	int i, j, m, exp, n;
	vector<int>::reverse_iterator it;

public:
	RadixSort(vector<int>, int);
	~RadixSort();
private:
	void countSort(int, int);
	void rsort();
	void afisare(int);
	int maxElement();
};

