#include "InsertionSort.h"

InsertionSort::InsertionSort(vector<int> a)
{
    vec=a;
    iSort();
    afisare();
}

void InsertionSort::iSort(){
	n = (int)vec.size();
    i=1;
    while(i<n){
        j=i;
        while(j>0 && vec[j-1]>vec[j]){
            swap(vec[j],vec[j-1]);
            j--;
        }
        i++;
    }
}

void InsertionSort::afisare() const{
    for(auto ee:vec){
        cout << ee << ' ';
    }
    cout << endl;
}

InsertionSort::~InsertionSort()
{
    //dtor
}
