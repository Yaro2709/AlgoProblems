#include <iostream>

using namespace std;

typedef long long ll;

void run() {
	ll n;
	cin >> n;
	ll *a = new ll[n + 5];
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll d = 0;
	for (ll i = 1; i < n; i++) {
		if (a[i] >= a[i - 1]) {
			d = 1;
			break;
		}
	}
	if (d == 1) cout << "YES" << endl;
	else cout << "NO" << endl;

	delete[] a;
}

int main() {
	ll t;
	cin >> t;
	while (t--) run();

	return 0;
}