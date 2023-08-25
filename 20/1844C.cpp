#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long> v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		long long odd = 0;
		long long even = 0;
		long long maxVal = -1e18;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				even = max(even, even + v[i]);
			}
			else {
				odd = max(odd, odd + v[i]);
			}
			maxVal = max(maxVal, v[i]);
		}
		if (maxVal < 0) {
			cout << maxVal << "\n";
		}
		else {
			cout << max(odd, even) << "\n";
		}
	}
	return 0;
}