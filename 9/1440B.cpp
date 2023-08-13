#include<iostream>

using namespace std;

#define int long long int

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n, k; 
		cin >> n >> k;
		int *a = new int[n * k];
		for (int i = 0; i < n * k; i++) {
			cin >> a[i];
		}
		int ans = 0;
		for (int i = k; i >= 1; i--) {
			ans += a[n * k - i * ((n + 2) / 2)];
		}
		cout << ans << endl;

		delete[] a;
	}

	return 0;
}