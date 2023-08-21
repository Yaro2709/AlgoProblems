#include<iostream>

using namespace std;

int main()
{
	int n, s, t;
	cin >> n >> s >> t;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
		cin >> p[i];
	int f = s;
	for (int i = 0; i < n; i++)
	{ 
		if (f == t)
		{
			cout << i;
			return 0;
		}
		f = p[f - 1];
	}
	cout << -1;

	delete[] p;

	return 0;
}