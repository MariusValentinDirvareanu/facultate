#pragma once
#include <iostream>
#include <vector>

using namespace std;

class CountingSort
{
private:
	vector<double> vec;
	vector<double> output;
	vector<unsigned> count;
	int i, j, n;

public:
	CountingSort(vector<double>);
	//TODO:Counting Sort cand sunt numere egale in sir
	void afisare() const;
	~CountingSort();
};

