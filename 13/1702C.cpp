#include<iostream>
#include<vector>
#include<map>

using namespace std;

void solve() {
	int n, q;
	cin >> n >> q;

	map<int, int> l, r;
	vector<int> tr(n + 1);
	for (int i = 1; i <= n; i++) cin >> tr[i];

	for (int i = 1; i <= n; i++) {
		if (!l[tr[i]]) l[tr[i]] = i;
		r[tr[i]] = i;
	}

	while (q--) {
		int a, b;
		cin >> a >> b;
		if (l[a] < r[b] && l[a] && r[b]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}