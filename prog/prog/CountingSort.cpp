#include "CountingSort.h"



CountingSort::CountingSort(vector<float> a)
{
	vec = a;
	n = (int)vec.size();
	for (i = 0; i < n; ++i) {
		++count[vec[i]];
	}
}


CountingSort::~CountingSort()
{
}
