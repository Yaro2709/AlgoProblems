#include<iostream>

using namespace std;

void iluzn() {
	int n, s;
	cin >> n >> s;
	int *a = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum <= s) cout << 0 << "\n";
	else {

		int ts = 0;
		int ind = 0;
		int mx = 0;
		int ans = 0;
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
	int t ;
	cin >> t;
	while (t--) iluzn();

	return 0;
}