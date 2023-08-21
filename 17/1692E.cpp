#include<iostream>
#include<vector>

using namespace std;

void solve() {
	int n, s; cin >> n >> s;
	bool k; vector<int> ones;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k) ones.push_back(i);
	}
	if (ones.size() < s) { cout << -1 << '\n'; return; }
	else if (ones.size() == s) { cout << 0 << '\n'; return; }
	int i = 1, min = n - ones[s], x;
	while (i + s - 1 < ones.size()) {
		x = ones[i - 1] + 1;
		if (i + s < ones.size()) x += n - ones[i + s];
		if (min > x) min = x;
		i++;
	}
	cout << min << '\n';
}

int main() {
	int t = 1; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}