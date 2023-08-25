#include<iostream>

using namespace std;

int main() {
	int tc; cin >> tc;
	int n;
	while (tc--) {
		cin >> n;

		bool flag = 0;
		for (int k = 2; ; k++) {
			if (1 + k + k * k > n) break;

			int sum = 1 + k, cur = k;
			while (1) {
				cur *= k;
				sum += cur;

				if (sum == n) {
					flag = 1;
					cout << "YES\n";
					break;
				}
				if (sum > n) break;
			}
			if (flag) break;
		}
		if (!flag) cout << "NO\n";
	}

	return 0;
}