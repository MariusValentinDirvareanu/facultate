#pragma once
#include <iostream>
#include <vector>

using namespace std;

class CountingSort
{
private:
	vector<int> vec;
	vector<int> output;
	vector<unsigned> count;
	int i, j, n;

public:
	CountingSort(vector<int>);
	//TODO:Counting Sort cand sunt numere egale in sir
	void afisare() const;
	~CountingSort();
};

