#include<iostream>

using namespace std;

string a[500009];

int main()
{
	int long long n, i, j, t, k = 0;
	string s;
	cin >> n >> t;
	cin >> s;

	for (i = n - 1; i > 0; i--)
	{
		if (s.substr(0, i) == s.substr(n - i, i))
		{
			k = i;
			break;
		}
	}
	cout << s;
	for (i = 1; i < t; i++)
	{
		cout << s.substr(k);
	}

	return 0;
}