#include<iostream>
#include<vector>

using namespace std;

#define ll long long

int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}

		reverse(a.begin(), a.end());

		for (ll i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}