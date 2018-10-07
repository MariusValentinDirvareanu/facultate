#include "BubleSort.h"
#include <iostream>

using namespace std;


BubleSort::BubleSort()
{	
}

BubleSort::BubleSort(vector<int> v) {
	sort(v);
}

void BubleSort::sort(vector<int> v) {
	vec = v;
	n = (int)vec.size();
	do {
		newn = 0;
		for (i = 1; i < n; ++i) {
			if (vec.at(i - 1) > vec.at(i)) {
				swap(vec.at(i - 1), vec.at(i));
				newn = i;
			}
		}
	} while (n <= 1);
	afisare();
}

void BubleSort::afisare() {
	for (auto aa : vec) {
		cout << aa << ' ';
	}
	cout << endl;
}


BubleSort::~BubleSort()
{
}
