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

void parcurgere(monom *cap)
{
    monom *p;
    int semn=0;

    if (!cap) // cap este NULL, adica polinom este vida
         cout<<"Polinoml este vid! "<<endl;
    else
    {
        // polinom nu este vida; il afiseaza
        for(p=cap; p ; p=p->urm)
        {
            if ((semn == 1) && (p->coef > 0))
                cout<<"+";
            cout<<p->coef<<"*X^"<<p->grad;
            semn=1;
        }
    }
    cout<<endl;
}

monom *inmultire(monom *p1, monom *p2)
{
    monom *s, *p, *q, *u, *r;

    s=new monom;
    s->coef=0;
    s->grad=0;
    s->urm=NULL;
    u=s;
    for(p=p1; p; p=p->urm)
    {
         for(r=p2; r; r=r->urm)
        {
             q=new monom;
             q->coef=p->coef*r->coef;
             q->grad=p->grad+r->grad;
             q->urm=NULL;
             u->urm=q;
             u=q;
        }
    }

    return s;
}

monom *reducere(monom *s)
{
    monom *p, *q, *u;

    for(p=s; p; p=p->urm)
    {
        u=p;
        for(q=p->urm; q ;q=q->urm)
        {
            if (p->grad == q->grad)
            {
                p->coef=p->coef + q->coef;
                // sterge q din lista
                u->urm=q->urm;
                delete q;
                q=u;
            }
            u=q;
        }
    }
    return s;
}




int main()
{
    monom *p1, *p2; // listele pentru cele doua polinoame
    monom *produs;

    // citeste cel doua polinoame
    cout<<"Primul polinom"<<endl;
    p1=creare();
    cout<<"Al doilea polinom"<<endl;
    p2=creare();

    cout<<"Primul polinom este p1 = ";
    parcurgere(p1);
    cout<<endl;
    cout<<"Al doilea polinom este p2 = ";
    parcurgere(p2);

    // inmultim polinoamele date;
    // concatenam listele date intr-o singura lista

    produs=inmultire(p1,p2);
    cout<<endl<<"Produsul fara reducerea termenilor este s = ";
    parcurgere(produs);

    // reducem termenii asemenea: adaugam la un monom din coeficientul altui monom din lista cu acelasi grad,
    //                            dupa care stergem monomul al carui coeficient l-am adaugat la primul monom

    produs=reducere(produs);
    cout<<endl<<"Produsul polinoamelor este s = ";
    parcurgere(produs);

    return 0;
}
