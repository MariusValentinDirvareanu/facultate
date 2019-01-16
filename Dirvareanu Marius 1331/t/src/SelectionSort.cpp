#include "SelectionSort.h"



SelectionSort::SelectionSort(vector<int> a){
	vec = a;
	n = (int)vec.size();
	for (j = 0; j < n - 1; ++j) {
		iMin = j;
		for (i = j + 1; i < n; ++i) {
			if (vec.at(i) < vec.at(iMin)) {
				iMin = i;
			}
		}
		if (iMin != j) {
			swap(vec.at(j), vec.at(iMin));
		}
	}
	afisare();
}

void SelectionSort::afisare() const{
	for (auto e : vec) {
		cout << e << ' ';
	}
	cout << endl;
}


SelectionSort::~SelectionSort()
{
}
