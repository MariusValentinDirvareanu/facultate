#include "RadixSort.h"

RadixSort::RadixSort(vector<double> a)
{
	numarZecimale(a);
	vec.resize(a.size());
	copyVectorRealtoInt(a);
    Count.resize(10);
    n=static_cast<int>(vec.size());
    m=maxElement();
	output.resize(n);
    rsort();
    afisare();
}

void RadixSort::numarZecimale(vector<double> b) {
	z = to_string(b[0]-static_cast<int>(b[0]));
	for (i = z.size() - 1; i >= 0; i--) {
		if(z[i]!='0'&&z[i]!='.') {
			zecimale++;
		}
	}
}

void RadixSort::copyVectorRealtoInt(vector<double> b){
	for(i=0;i<b.size();++i)
	{
		vec[i] = (int)(b[i] * pow(10,zecimale));
	}
}



int RadixSort::maxElement(){
    int maxx=0;
    for(auto ee:vec){
        if(maxx<ee){
            maxx=ee;
        }
    }
    return maxx;
}

void RadixSort::countSort(int exp)
{
	Count = { 0,0,0,0,0,0,0,0,0,0 };
	for (i = 0; i < n; i++) 
		Count[(vec[i] / exp) % 10]++;


	for (i = 1; i < 10; i++)
		Count[i] += Count[i - 1];

	for (i = n - 1; i >= 0; i--)
	{
		output[Count[(vec[i] / exp) % 10] - 1] = vec[i];
		Count[(vec[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
		vec[i] = output[i];
}

void RadixSort::rsort()
{
	for (exp = 1; m / exp > 0; exp *= 10)
		countSort(exp);
}

void RadixSort::afisare() const{
    for(auto ee:vec){
        cout << static_cast<double>(ee)/pow(10,zecimale) << ' ';
    }
    cout << endl;
}

RadixSort::~RadixSort()
{

}
