#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

int main() {
	ll n;
	cin >> n;
	ll *a = new ll[n / 2];
	for (ll i = 0; i < (n / 2); i++)
	{
		cin >> a[i];
	}
	sort(a, a + (n / 2));
	ll out1 = 0, out2 = 0;
	for (ll i = 1; i <= n; i += 2)
	{
		ll k = i / 2;
		out1 += abs(i - a[k]);
		out2 += abs(i + 1 - a[k]);
	}
	cout << min(out1, out2);

	delete[] a;

	return 0;
}