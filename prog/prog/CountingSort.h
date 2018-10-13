#pragma once
#include <iostream>
#include <vector>

using namespace std;

class CountingSort
{
private:
	vector<float> vec;
	vector<float> output;
	vector<unsigned> count;
	int i, j, n;

public:
	CountingSort(vector<float>);
	~CountingSort();
};

