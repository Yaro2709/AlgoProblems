#include <iostream>

using namespace std;

int main() {
	int n, t, s, d;
	cin >> n >> t;
	int re = INT_MAX;
	int ans;
	for (int i = 0; i < n; i++) {
		cin >> s >> d;
		while (s < t) {
			s += d;
		}
		if (re > s) {
			re = s;
			ans = i + 1;
		}
	}
	cout << ans;

	return 0;
}