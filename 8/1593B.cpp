#include <iostream>

using namespace std;

int main() {
	long long int n, s, p, k, m, t, x, y, z, ans, res;
	string a;

	cin >> t;

	while (t--) {
		cin >> a;

		s = 0;
		ans = a.size() - 1;
		for (int i = a.size() - 1; i > 0; i--) {
			for (int j = i - 1; j >= 0; j--) {
				p = (a[j] - '0') * 10 + (a[i] - '0');

				m = a.size() - j - 2;
				if (!p || p % 25 == 0) ans = min(ans, m);
			}
		}

		cout << ans << endl;
	}

	return 0;
}