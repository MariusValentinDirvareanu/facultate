#include <iostream>

using namespace std;

struct monom{
     float coef;
     int grad;
     monom *urm;};

monom *creare()
{
    monom *p, *q, *r;
    float c;
    int g;
    char dn;

    // p = capatul listei polinom
    // q = tine minte ultimul monom din polinom

    cout<<"Coeficientul primului monom din polinom coef = "; cin>>c;
    cout<<"Gradul primului monom din polinom grad = "; cin>>g;
    p=new monom;
    p->coef=c; p->grad=g; p->urm=NULL;
    q=p;

    //adauga celelalte monoame
    do{
        cout<<"Adauga monoame in polinom [d/n]? "; cin>>dn;
        if ((dn == 'd') || (dn=='D'))
        {
             cout<<"Coeficientul monomului din polinom coef = "; cin>>c;
             cout<<"Gradul monomului din polinom grad = "; cin>>g;
             r=new monom;
             r->coef=c; r->grad=g; r->urm=NULL;
             q->urm=r;
             q=r;
        }
    }while((dn == 'd') || (dn=='D'));
    return p;
}

void parcurgere(monom *poli)
{
    int semn=0;
    monom *p;
    monom *prim=poli;
    int n=0; //numara punctele din coada
    if (!prim) // cap este NULL, adica coada este vida
         cout<<"Polinomul este vida! "<<endl;
    else
    {
        // coada nu este vida; o afiseaza si numara ounctele cozii
        for(p=prim; p ; p=p->urm)
        {
            n++;
            if(semn==1&&p->coef>0){
                cout << "+";
            }
            cout<<p->coef<<"*X^"<<p->grad;
            semn=1;
        }
    }
}


int main()
{
    monom *p1, *p2; // listele pentru cele doua polinoame

    // citeste cel doua polinoame
    p1=creare();
    p2=creare();

    cout<<"Primul polinom este p1 = ";
    parcurgere(p1);
    cout << endl;
    cout<<"al doilea polinom este p2 = ";
    parcurgere(p2);

    return 0;
}
