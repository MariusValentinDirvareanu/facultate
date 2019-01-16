#include <iostream>
#include <math.h>

using namespace std;

void ec2()
{
    float a,b,c,delta,x1,x2;
    cout<<"citeste coeficienti: "<<endl;
    cin>>a>>b>>c;
    if (a==0)
    {
        if (b!=0)
            cout<<"x= "<<-c/b<<" "<<endl;
        else
        {
            if (c==0)
                cout<<"infinitate de solutii "<<endl;
                else
                    cout<<"nu exista solutii "<<endl;
        }
    }
    else
    {
        delta=(b*b)-4*a*c;
        if (delta>=0)
        {
            cout<<"delta="<<delta<<" ";

            x1=(-1*(b)+sqrt(delta))/(2*a);
            x2=(-1*(b)-sqrt(delta))/(2*a);

            cout<<"solutiile sunt:"<<x1<<" "<<x2<<" "<<endl;
        }
        if (delta<0)
        {
            delta=delta*(-1);
            cout<<"delta="<<delta<<" "<<endl;
            cout<<"Partea reala:"<<(-1)*b/(2*a)<<" Partea imaginara:"<<(-1)*sqrt(delta)/(2*a)<<endl;
            cout<<"sol:"<<-b/2<<"+"<<"i*"<<sqrt(delta)/2<<" si "<<-b/2<<"-"<<"i*"<<sqrt(delta)/2<<endl;
        }
    }
}
//void c.m.m.d.c

//bubleSort
void BubleSort()
{int a[50],n,i,j,aux;
cout<<"Nr de elemente: ";
cin>>n;
cout<<"Elementele sunt: " ;
for(i=0;i<n;i++)
    cin>>a[i];

     for(i=1;i<n;i++){
        for(j=0;j<(n-i);j++)
        if(a[j]>a[j+1]){
            aux=a[j];
            a[j]=a[j+1];
            a[j+1]=aux;
        }
     }
    cout<<"Numarul final este:";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];

}


int nrprim(int m)
{
    int d;
    int prim=0;

    //?????

    return prim;
}
void cmmdc_cmmmc()
{
     int n,m;
    cout<<"nr1=";cin>>n;
    cout<<"nr2=";cin>>m;
    int a=n,b=m;
    while (m!=n)
    {
        if (n>m)
            n=n-m;
        else
            m=m-n;
    }
    cout<<"cmmdc:"<<n<<endl;
    cout<<"cmmmc:"<<(a*b)/n;
}





int main() // PROGRAM PRINCIPAL
{
    int op, op1, op2;

    do  // reia meniu principal pana la exit
    {
    // meniu principal
    cout << "PROGRAME SDA "<< endl;
    cout<<"1. Probleme diverse"<<endl;
    cout<<"2. Algoritmi de sortare"<<endl;
     // se vor adauga optiuni
    cout<<"0. Exit program."<<endl;

    cout<<"Optiune : "; cin>>op;

    switch (op) // switch pentruoptiune meniu principal
    {

    case 1: //Probleme diverse (laborator 1)
       do
       {
        cout<<endl<<"Probleme diverse"<<endl;
        cout<<"1.1. Rezolvarea ecuatiei de gradul al doilea"<<endl;
        cout<<"1.2. Determinare numar prim"<<endl;
        cout<<"1.3. Determinare in factori primi"<<endl;
        cout<<"1.4. Determinare c.m.m.d.c si c.m.m.m.c"<<endl;
        cout<<"1.0. Exit probleme diverse!"<<endl;

        cout<<"Optiune probleme diverse : "; cin>>op1;

        switch (op1)
        {
            case 1:
                ec2();
                break;

            case 2:
                {int n;
                cout<<"n="; cin>>n;
                int ok=nrprim(n); //ok=0 nu e numar prim
                if (ok==0)
                    cout<<"Numarul "<<n<<" nu e numar prim "<<endl;
                else
                    cout<<"Numarul "<<n<<" este numar prim "<<endl;
                }
                break;

            case 0:
                cout<<"A terminat submeniu 1"<<endl<<endl;
                break;

            default :
                cout<<"Optiune invalida!"<<endl;
                break;

        }
       } while(op1!=0);
       break;

   case 2: //algoritmi de sortare
       do
       {
        cout<<endl<<"Algoritmi de sortare"<<endl;
        cout<<"2.1. Algoritm Buble Sort"<<endl;
        cout<<"2.2. "<<endl;
        cout<<"2.3."<<endl;
        cout<<"2.4. "<<endl;
        cout<<"2.0. Exit algoritmi de sortare!"<<endl;
        cout<<"Optiune algoritmi de sortare: "; cin>>op2;
        switch (op2)
        {
            case 1:
                BubleSort();
                break;

            case 0:
                cout<<"A terminat submeniu 2"<<endl<<endl;
                break;

            default :
                cout<<"Optiune invalida!"<<endl;
                break;

        }
       } while(op2!=0);
       break;

    case 0:
        cout<<"Bye! Bye!"<<endl;
        break;

    default :
        cout<<"Optiune invalida!"<<endl;
        break;
    }
    }while(op!=0); // end meniu principal

    return 0;
}
