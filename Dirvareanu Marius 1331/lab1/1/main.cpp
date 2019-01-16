#include <iostream>

using namespace std;

int main()
{
    unsigned a,b,c,k;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    if(a>b){
        swap(a,b);
    }
    k=0;
    c=a;
    while(c<=b){
        if(c%2==0){
            cout<< c << ' ';
            k++;
        }
        c++;
    }
    cout << k;
    return 0;
}
