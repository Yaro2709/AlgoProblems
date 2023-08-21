#include <iostream>

using namespace std;

int a[1000010], v[1000100];

signed main() {
	int x = 0;
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
			v[i] = 10000000000;
		for (int i = 1; i <= n; i++) {
			char c;
			cin >> c;
			a[i] = c - '0';
		}
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j * i <= n; j++) {
				if (a[i * j])
					break;
				v[i * j] = min(v[i * j], i);
			}
		}
		for (int i = 1; i <= n; i++)
			if (!a[i])
				ans += v[i];
		cout << ans << '\n';
	}
	return 0;
}