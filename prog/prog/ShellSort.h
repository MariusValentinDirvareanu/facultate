#ifndef SHELLSORT_H
#define SHELLSORT_H

#include <iostream>
#include <vector>

using namespace std;


class ShellSort
{
    private:
        vector<int> vec;
        int gap,temp,i,j,n;

    public:
        ShellSort(vector<int>);
        ~ShellSort();

    private:
        void SSort();
        void afisare() const;
};

#endif // SHELLSORT_H
