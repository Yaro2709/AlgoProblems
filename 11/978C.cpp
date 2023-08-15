#include <iostream>

using namespace std;

#define ll long long int

int main()
{
	int n, m;
	cin >> n >> m;
	ll *a = new ll[n]; 
	ll *s = new ll[n + 10];
	for (int i = 1; i <= n; i++) {
		s[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		s[i] = s[i - 1] + a[i - 1];
	}
	int p = 1;
	for (int i = 0; i < m; i++)
	{
		ll x;
		cin >> x;
		while (x > s[p])
			p++;
		cout << p << " " << x - s[p - 1] << "\n";
	}

	delete[] a;
	delete[] s;

	return 0;
}