#ifndef RADIXSORT_H
#define RADIXSORT_H
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class RadixSort
{
    private:
        vector<int> vec;
        vector<int> output;
        vector<int> Count;
        int i,j,m,exp,n;

    public:
        RadixSort(vector<int>);
        ~RadixSort();
    private:
        void countSort(int,int);
        void rsort();
        void afisare() const;
        int maxElement();
};

#endif // RADIXSORT_H
