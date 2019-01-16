#include "Cautare.h"

Cautare::Cautare(vector<int> a, int b)
{
    x=b;
    copie=a;
    n=(int)copie.size();
    i=0;
    j=n-1;
    while(i<j){
        while(copie[i]<=x){
            i++;
        }
        while(copie[j]>x){
            j--;
        }
        if(i<j){
            swap(copie[i],copie[j]);
            i++;
            j++;
        }
        for (auto ee : copie){
            cout << ee << ' ';
        }
        cout << endl;
    }
    cout << "Pozitia lui " << x << " este " << j << endl;
}

Cautare::~Cautare()
{
    //dtor
}
