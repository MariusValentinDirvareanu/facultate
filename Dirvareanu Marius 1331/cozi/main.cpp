#include <iostream>
#include <conio.h>

using namespace std;
// PROGRAM LISTA COZI

struct punct{
        float x;
        punct *prec;
        punct *urm;};

punct *prim, *ultim;

void creare_coada()
{
   punct *p;
   float v; char a;

   prim=new punct;
   cout<<"Valoarea primului punct din coada este v= ";
   cin>>v;
   prim->x=v;
   prim->prec=nullptr;
   prim->urm=nullptr;
   ultim=prim; // q este utlimul punct din coada, care la inceput coincide cu primul punct
   do
   {
     cout<<"Adaugam element nou in coada (d/n)? ";
     cin>>a;
     if ((a=='d') || (a=='D'))
     {
       cout<<"Valoare punct v= ";
       cin>>v;
       p=new punct;
       p->x=v;
       p->prec=ultim;
       p->urm=nullptr;
       ultim->urm=p;
       ultim=p; // ultimul punct din lista
     }
   }while((a=='d') || (a=='D'));
}

void parcurgere_coada()
{
    punct *p;
    int n=0; //numara punctele din coada
    if (!prim) // cap este NULL, adica coada este vida
         cout<<"Coada este vida! "<<endl;
    else
    {
        // coada nu este vida; o afiseaza si numara ounctele cozii
        cout<<"Coada de puncte este:"<<endl;
        for(p=prim; p ; p=p->urm)
        {
            n++;
            cout<<p->x<<" ";
        }
        cout<<endl<<"Numarul de puncte din coada este n="<<n<<endl;
    }
}

void stergere_element_coada()
{
    punct *p;

    cout<<"Sterge element din coada!"<<endl;
    p=prim;

    prim=prim->urm;
    prim->prec=nullptr;
    delete p;

}

void adauga_element_coada(float v)
{
    punct *p;

    cout<<"Adauga element la coada!"<<endl;

    p=new punct;
    p->x=v;
    ultim->urm=p;
    p->prec=ultim;
    p->urm=nullptr;
    ultim=p;
}

int main() // program liste
{
   float v;

   //creare coada
   creare_coada();
   cout<<"prim element din lista v="<<prim->x<<endl;
   cout<<"ultim element din lista v="<<ultim->x<<endl;

   parcurgere_coada();

   getch();
   //stergere element din coada
   stergere_element_coada();
   parcurgere_coada();

   // adauga element la coada
   cout<<"Adauga valoare v = "; cin>>v;
   adauga_element_coada(v);
   parcurgere_coada();

   return 0;
}
