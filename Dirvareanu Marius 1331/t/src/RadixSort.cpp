#include "RadixSort.h"

RadixSort::RadixSort(vector<int> a)
{
    vec=a;
    Count.resize(10);
    n=vec.size();
    m=maxElement();
    rsort();
    afisare();
}

int RadixSort::maxElement(){
    int maxx=0;
    for(auto ee:vec){
        if(maxx<ee){
            maxx=ee;
        }
    }
    return maxx;
}

void RadixSort::countSort(int n, int exp)
{
    output.resize(n);

    for (i = 0; i < n; i++)
        Count[ (vec[i]/exp)%10 ]++;

    for (i = 1; i < 10; i++)
        Count[i] += Count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[Count[ (vec[i]/exp)%10 ] - 1] = vec[i];
        Count[ (vec[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i++)
        vec[i] = output[i];
}

void RadixSort::rsort()
{
    for (exp = 1; m/exp > 0; exp *= 10)
        countSort(n, exp);
}

void RadixSort::afisare() const{
    for(auto ee:vec){
        cout << ee << ' ';
    }
    cout << endl;
}

RadixSort::~RadixSort()
{

}
