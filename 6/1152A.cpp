#include<iostream>
#include<string>

using namespace std;

#define ll long long int

int main()
{
	ll n, m;
	cin >> n >> m;
	ll ce1 = 0, co1 = 0, ce2 = 0, co2 = 0;
	while (n--)
	{
		ll k;
		cin >> k;
		if (k % 2 == 0)
			ce1++;
		else
			co1++;
	}
	while (m--)
	{
		ll k;
		cin >> k;
		if (k % 2 == 0)
			ce2++;
		else
			co2++;

	}
	ll x = min(ce1, co2) + min(ce2, co1);
	cout << x;

	return 0;
}