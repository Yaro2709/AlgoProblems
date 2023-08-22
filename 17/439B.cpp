#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long int

ll a[100000] = { 0 };

int main() {
	ll n, x;
	cin >> n >> x;

	for (int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n);

	ll sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += a[i] * x;
		if (x > 1) x--;
	}

	cout << sum << "\n";

	return 0;
}