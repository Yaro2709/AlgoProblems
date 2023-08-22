#include<iostream>

using namespace std;

typedef long long ll;

ll pr(ll n)
{
	for (ll i = 2; i * i <= n; i++)
		if (n % i == 0) return i;
	return n;
}

int main()
{
	ll n; cin >> n;
	ll cc = 0;
	while (n % 2)
	{
		n -= pr(n);
		cc++;
	}
	cout << cc + n / 2;
	return 0;
}