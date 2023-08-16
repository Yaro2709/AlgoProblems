#include <iostream>

using namespace std;

int main() {
	int n, x, l, r, t = 1, ans = 0;
	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> l >> r;
		ans += r - l + 1;
		ans += (l - t) % x;
		t = r + 1;
	}

	cout << ans << endl;

	return 0;
}