#pragma once
#include <vector>

using namespace std;

class BubleSort
{
private:
	vector<int> vec;
	int n = 0, i, newn;

public:
	BubleSort();
	BubleSort(vector<int>);
	void sort(vector<int>);
	void afisare();
	~BubleSort();
};

