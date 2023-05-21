#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (k > (n - 1) / 2) {
			cout << "-1\n";
			continue;
		}
		vector<int> ans(n, 0);
		int val = n;
		for (int i = 1, cnt = 0; cnt < k; i += 2) {
			ans[i] = val;
			val--;
			cnt++;
		}
		for (int i = 0; i < n; i++) {
			if (ans[i] == 0)
				ans[i] = val--;
		}
		for (int x : ans)
			cout << x << " ";
		cout << "\n";
	}
	return 0;
}