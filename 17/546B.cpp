#include<iostream>

using namespace std;

bool v[10000009];

int main()
{
	int r = 0, n, c;
	cin >> n;
	while (n--)
	{
		cin >> c;
		while (v[c] >= 1)
		{
			c++;
			r++;
		}
		v[c] = 1;
	}
	cout << r;

	return 0;
}