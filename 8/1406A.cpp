#include <iostream>

using namespace std;

void solve() {
	int cnt[102] = { 0 };
	int n;
	cin >> n;
	int a, b, c;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cnt[a]++;
	}
	a = b = -1;
	for (int i = 0; i < 103; i++) {
		if (cnt[i] >= 2) {
			continue;
		}
		if (a == -1) {
			a = i;
		}
		if (cnt[i] == 0 && b == -1) {
			b = i;
		}
	}
	cout << a + b << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) solve();

	return 0;
}