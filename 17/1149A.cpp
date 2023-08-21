#include<iostream>

using namespace std;

#define ll long long int

int main()
{
	ll n, x, y = 0, z = 0;
	cin >> n;
	ll* a = new ll[n] ;
	for (ll i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 1)
			y++;
		else
			z++;
	}
	if (y == 0)
	{
		for (ll i = 0; i < z; i++)
			cout << "2 ";
	}
	else
	{
		if (z > 0)
			cout << "2 ";
		cout << "1 ";
		for (ll i = 0; i < z - 1; i++)
			cout << "2 ";
		for (ll i = 0; i < y - 1; i++)
			cout << "1 ";
	}

	delete[] a;

	return 0;
}