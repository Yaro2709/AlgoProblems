#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int ans = 1;
	for (int j = 1; j < n; j++) {
		if (a[j] != a[j - 1]) {
			ans++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << max(ans, i) << " ";
	}
	cout << endl;
}

int main() {
	int t; 
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}