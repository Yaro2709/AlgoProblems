#include<iostream>

using namespace std;

const int maxn = 3e+7;
int a[maxn];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, d;
		cin >> n >> m;
		for (int i = m / 2 + n / 2; i <= m + n; i++) {
			a[i] = 0;
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				int in = max(i - 1 + j - 1, max(n - i + j - 1, max(i - 1 + m - j, n - i + m - j)));
				a[in]++;
			}
		}
		cout << m / 2 + n / 2;
		a[m / 2 + n / 2]--;
		for (int i = m / 2 + n / 2; i <= m + n; i++) {
			while (a[i]--) cout << " " << i;
		}
		cout << endl;
	}

	return 0;
}