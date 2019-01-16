#include "ShellSort.h"

ShellSort::ShellSort(vector<int> a)
{
    vec=a;
    n=(int)vec.size();
    SSort();
    afisare();
}

void ShellSort::SSort(){
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i += 1) {
            temp = vec[i];
            for (j = i; j >= gap && vec[j - gap] > temp; j -= gap)
                vec[j] = vec[j - gap];
            vec[j] = temp;
        }
    }
}

void ShellSort::afisare() const{
    for(auto ee:vec){
        cout << ee << ' ';
    }
    cout << endl;
}

ShellSort::~ShellSort()
{
    //dtor
}
