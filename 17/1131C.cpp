#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int aa[200] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> aa[i];
	}
	sort(aa, aa + n);
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << aa[i] << ' ';
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (i % 2 != 0)
		{
			cout << aa[i] << ' ';
		}
	}
	return 0;
}