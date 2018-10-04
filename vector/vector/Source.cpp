#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a;
	int x;
	cout << "x=";
	cin >> x;
	while (x > 0)
	{
		a.push_back(x % 10);
		x /= 10;
	}
	for (vector<int>::iterator it = a.begin(); it != a.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << '\n';
	system("PAUSE");
	return 0;
}
