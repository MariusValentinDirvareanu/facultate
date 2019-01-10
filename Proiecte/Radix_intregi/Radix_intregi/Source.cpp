#include <iostream>
#include "RadixSort.h"

using namespace std;

int main()
{
	vector<int> myvector = { 13,-2,3,-55,65,10 };
	vector<int> myvectorPozitiv;
	vector<int> myvectorNegativ;
	for(auto element:myvector)
	{
		if (element < 0)
			myvectorNegativ.push_back(element*(-1));
		else
			myvectorPozitiv.push_back(element);
	}
	myvector.clear();
	RadixSort radixNegativ(myvectorNegativ,0);
	RadixSort radixPozitiv(myvectorPozitiv,1);
	getchar();
	return 0;
}