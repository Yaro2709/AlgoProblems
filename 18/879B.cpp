#include<iostream>

using namespace std;

int main()
{
	long long n;
	long long k;
	cin >> n >> k;
	long long *a = new long long[n];
	for (long long i = 0; i < n; i++)
		cin >> a[i];
	long long ans = a[0], index = 0, f = 1;
	for (long long int i = 1; i < n; i++)
	{
		if (ans > a[i])
		{
			if (i - index == k)
			{
				cout << ans << endl;
				f = 0;
				break;
			}
		}
		else
		{
			ans = a[i];
			index = i - 1;
		}
	}
	if (f)
		cout << ans << endl;

	delete[] a;

	return 0;
}