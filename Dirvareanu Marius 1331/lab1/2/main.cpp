#include <iostream>
#include <math.h>

using namespace std;

void ecuatie(float a, float b, float c){
    float delta=b*b-4*a*c;
    if(delta>0){
        cout << (-b+sqrt(delta))/(2*a) << endl;
        cout << (-b-sqrt(delta))/(2*a) << endl;
    }
    if(delta==0){
        cout << -b/(2*a) << endl;
    }
    if(delta<0){
        cout << (-b+sqrt((delta*-1)))/(2*a) << "i" << endl;
        cout << (-b-sqrt((delta*-1)))/(2*a) << "i" << endl;
    }
}

unsigned cmmdc(unsigned a, unsigned b){
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

void cmmmc(unsigned a, unsigned b){
    cout << (a*b)/cmmdc(a,b);
}

int main()
{
    // a b c reale
    //sol ex ax^2+bx+c=0

    //a b nat nenule
    //cmmdc
    //cmmmc
    ///ecuatie(3,2,1);
    ///cout << cmmdc(12,24) << endl;
    ///cmmmc(12,24);
    unsigned n;


    return 0;
}
