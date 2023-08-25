#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<int, int> mp;
	sort(a.begin(), a.end());
	int ansl = 0, ansr = -1, l = -1, r = -1;
	for (int i = 0; i < n; i++) {
		if (l == -1) l = a[i];
		if (r + 1 < a[i] || a[i] != r && mp[r] < k) l = a[i];
		r = a[i];
		int kk = ++mp[r];
		if (kk == k) {
			if (r - l + 1 > ansr - ansl + 1) {
				ansl = l, ansr = r;
			}
		}
	}

	if (ansr == -1) {
		cout << "-1\n";
		return;
	}
	cout << ansl << " " << ansr << "\n";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}