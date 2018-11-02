#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <iostream>
#include <vector>

using namespace std;


class InsertionSort
{
    public:
        InsertionSort(vector<int>);
        ~InsertionSort();
    private:
        vector<int> vec;
        int i,j,n;
    private:
        void iSort();
        void afisare() const;
};

#endif // INSERTIONSORT_H
