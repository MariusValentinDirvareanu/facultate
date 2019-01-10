#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

class RadixSort
{
    private:
        vector<int> vec;
        vector<int> output;
        vector<int> Count;
		int i, j, m, exp, n, zecimale = 0;
		string z;

    public:
        RadixSort(vector<double>);
        ~RadixSort();
    private:
        void countSort(int);
        void rsort();
        void afisare() const;
        int maxElement();
		void numarZecimale(vector<double>);
		void copyVectorRealtoInt(vector<double>);
};
