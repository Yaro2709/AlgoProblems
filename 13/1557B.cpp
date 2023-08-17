#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

#define ll long long int

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		ll *a = new ll[n];
		ll i, c = 0;
		map<ll, ll> b;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			b[a[i]] = i;
		}
		sort(a, a + n);
		for (i = 0; i < n - 1; i++)
		{
			if (b[a[i + 1]] - b[a[i]] == 1)
			{
				c++;
			}
		}
		if (n - k <= c)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		delete[] a;
	}

	return 0;
}