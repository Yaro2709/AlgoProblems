#include<iostream>

using namespace std;

void iluzn() {
	long long int n, s;
	cin >> n >> s;
	long long int* a = new long long int[n];
	long long int sum = 0;
	for (long long int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum <= s) cout << 0 << "\n";
	else {

		long long int ts = 0;
		long long int ind = 0;
		long long int mx = 0;
		long long int ans = 0;
		while (ind < n && ts <= s) {
			ts += a[ind];
			if (mx < a[ind]) {
				mx = a[ind];
				ans = ind + 1;
			}
			ind++;
		}
		cout << ans << "\n";
	}

	delete[] a;
}

int main() {
	long long int t;
	cin >> t;
	while (t--) iluzn();

	return 0;
}