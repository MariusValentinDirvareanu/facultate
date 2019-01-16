#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> vec={2,6,1,9,7,6,4,8,5,9,2,3,6,7,1};

//Start Descompunere Factori Primi
struct factori
{
	int x;
	int y = 0;
};

factori f[1000];
int j = 0;
int q = 0, imp = 0;

void afisare()
{
	int i = 1;
	for (int r = 0; r < j; ++r)
	{
		if (f[r].y > 1)
		{
			cout << f[r].x << "^" << f[r].y;
			if (i < imp)
			{
				cout << "*";
				i++;
			}
		}
		if (f[r].y == 1)
		{
			cout << f[r].x;
			if (i < imp)
			{
				cout << "*";
				i++;
			}
		}
	}
	cout << endl;
}

void factoriPrimi(int n)
{
	int k;
	for (int a = 2; a <= n; ++a)
	{
		k = 0;
		for (int i = 2; i < a; ++i)
		{
			if (a % i == 0)
			{
				k++;
			}
		}
		if (k == 0)
		{
			f[j].x = a;
			j++;
		}
	}
}

void impartireLaPrimi(int n)
{
	while (n > 1)
	{
		if (n%f[q].x == 0)
		{
			f[q].y++;
			n = n / f[q].x;
			q = 0;
		}
		else
		{
			q++;
		}
	}
}

void numararePrimiFolositi()
{
	for (int i = 0; i < j; ++i)
	{
		if (f[i].y != 0)
		{
			imp++;
		}
	}
}

void prim(int n)
{
	factoriPrimi(n);
	cout << n << "=";
	impartireLaPrimi(n);
	numararePrimiFolositi();
	afisare();
}

//End Descompunere Factori Primi



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

void BubleSort()
{
    cout<<endl<<"sortare"<<endl<<endl;
}

int main()
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

            case 3:
                int nn;
                cout << "Numar: "<< endl;
                cin >> nn;
                prim(nn);
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
        cout<<"2.1. Algoritm Buble Sort"<<endl;
        cout<<"2.2. "<<endl;
        cout<<"2.3."<<endl;
        cout<<"2.4. "<<endl;
        cout<<"2.0. Exit algoritmi de sortare!"<<endl;
        cout<<"Optiune algoritmi de sortare: "; cin>>op2;
        switch (op2)
        {
            case 1:
                //BubleSort();

                for(vector<int>::iterator it=vec.begin();it!=vec.end();++it){
                    cout << *it << ' ';
                }
                cout << endl;
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
