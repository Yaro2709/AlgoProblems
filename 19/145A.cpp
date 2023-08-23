#include<iostream>

using namespace std;

#define ll long long int

int main()
{
	string a, b;
	cin >> a >> b;
	ll n = a.size();
	ll counta = 0, countb = 0;
	for (ll i = 0; i < n; i++)
	{
		if (a[i] == '4' && b[i] == '7')
			counta++;
		if (a[i] == '7' && b[i] == '4')
			countb++;
	}
	cout << min(counta, countb) + abs(counta - countb);

	return 0;
}