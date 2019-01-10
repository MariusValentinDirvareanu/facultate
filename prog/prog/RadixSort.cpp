#include "RadixSort.h"

RadixSort::RadixSort(vector<int> a)
{
    vec=a;
    Count.resize(10);
    n=(int)vec.size();
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
	fill(Count.begin(), Count.end(), 0);

    for (i = 0; i < n; i++)
        Count.at((vec.at(i)/exp)%10 )++;

    for (i = 1; i < 10; i++)
        Count.at(i) += Count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output.at(Count.at((vec.at(i)/exp)%10 ) - 1) = vec.at(i);
        Count.at((vec.at(i)/exp)%10)--;
    }

    for (i = 0; i < n; i++)
        vec.at(i) = output.at(i);
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
