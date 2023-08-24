#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int i;
		for (i = n - 2; i >= 0; --i) {
			if (k <= n - 1 - i) break;
			k -= n - 1 - i;
		}
		string ans(n, 'a');
		ans[i] = 'b';
		ans[n - k] = 'b';
		cout << ans << '\n';
	}

	return 0;
}