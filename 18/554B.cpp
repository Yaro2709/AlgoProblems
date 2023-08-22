#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <string> v(n);
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v[i] = s;
	}
	int k = 0, a(0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i] == v[j]) k++;
		}
		if (k > a) a = k;
		k = 0;
	}
	cout << a << endl;

	return 0;
}