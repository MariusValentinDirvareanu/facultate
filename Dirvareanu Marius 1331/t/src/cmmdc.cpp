#include "cmmdc.h"

cmmdc::cmmdc()
{
    cout << "Numere: ";
    cin >> a >> b;
    c=a*b;
    cout << "cmmdc: " << cmmdcFunc() << endl;
    cmmmc();
}

void cmmdc::cmmmc(){
    cout << "cmmmc: " << c/cmmdcFunc() << endl;
}


int cmmdc::cmmdcFunc(){
    while(b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
    return a;
}


cmmdc::~cmmdc()
{
    //dtor
}
