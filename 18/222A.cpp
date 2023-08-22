#include<iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int *s = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	int p = 0;
	for (int i = k - 1; i < n - 1; i++)
	{
		if (s[i] != s[i + 1])
		{
			cout << "-1";
			return 0;
		}
	}
	for (int i = 0; i < k - 1; i++)
	{
		if (s[i] != s[k - 1])
			p = i + 1;
	}

	delete[] s;

	cout << p;

	return 0;
}