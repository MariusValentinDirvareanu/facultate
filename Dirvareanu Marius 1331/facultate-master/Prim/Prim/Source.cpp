#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> factoriPrimi;
	vector<int>vec;
	vector<int>vec2;
	int n = 100, k = 0;
	/*for (int i = 2; i < n; ++i)
	{
		k = 0;
		for (int a = 2; a < i; ++a)
		{
			if (i % a == 0)
			{
				k++;
			}
		}
		if (k == 0)
		{
			factoriPrimi.push_back(i);
		}
	}*/
	for (int j=2;j<n;++j)
	{
		for(int a=2;a<j;++a)
		{
			if (j%a == 0)
				k++;
		}
		if (k == 0) {
			vec.push_back(j);
			vec2.push_back(0);
		}
	}
	factoriPrimi.push_back(vec);
	factoriPrimi.push_back(vec2);
	for(int i=0;i<2;++i)
	{
	}
	
	
	system("PAUSE");
	return 0;
}
