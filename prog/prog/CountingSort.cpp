#include "CountingSort.h"



CountingSort::CountingSort(vector<int> a)
{
	vec = a;
	n = (int)vec.size();
	output.resize(n);
	count.resize(n);
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			if (vec[j] < vec[i]) {
				count[i]++;
			}
		}
	}
	for (i = 0; i < n; ++i) {
		output[count[i]] = vec[i];
	}
	afisare();
}

void CountingSort::afisare() const {
	for (auto ee : output) {
		cout << ee << ' ';
	}
	cout << endl;
}


CountingSort::~CountingSort()
{
}
