#ifndef CAUTARE_H
#define CAUTARE_H
#include <iostream>
#include <vector>

using namespace std;

class Cautare
{
    public:
        Cautare(vector<int>, int);
        ~Cautare();
    private:
        vector<int> copie;
        int i,j,x,n;

};

#endif // CAUTARE_H
