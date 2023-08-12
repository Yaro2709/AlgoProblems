#include <iostream>

using namespace std;

int main() {
	int n, k, x;
	cin >> n >> k >> x;
	int ans1 = 0, ans2 = 0, p;
	for (int i = 1; i <= n; i++) {
		cin >> p;
		if (i <= n - k) ans1 += p;
		else ans2 += x;
	}
	cout << ans2 + ans1 << endl;
	return 0;
}