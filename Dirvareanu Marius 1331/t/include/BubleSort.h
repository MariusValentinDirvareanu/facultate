#ifndef BUBLESORT_H
#define BUBLESORT_H

#include <vector>

using namespace std;

class BubleSort
{
private:
	vector<int> vec;
	int n = 0, i, newn, j;

public:
	BubleSort();
	BubleSort(vector<int>);
	void afisare() const;
	~BubleSort();
};
#endif // BUBLESORT_H

