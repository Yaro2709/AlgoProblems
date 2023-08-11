#include<iostream>
#include <vector>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	vector<string> a(n);

	int ans = 0;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == a[0]) ++ans;
	}

	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}