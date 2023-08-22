#include<iostream>
#include<cstring>

using namespace std;

const int maxn = 1e5 + 10;
bool ha[maxn];
int ans[maxn];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		memset(ha, 0, sizeof(ha));
		memset(ans, 0, sizeof(ans));
		ans[0] = a[0];
		ha[a[0]] = 1;
		int x = 1;
		if (ha[1] == 1) {
			x++;
		}
		int bok = 0;
		for (int i = 1; i < n; i++) {
			if (a[i] != a[i - 1]) {
				ans[i] = a[i];
				ha[a[i]] = 1;
			}
			else {
				while (ha[x] == 1) {
					x++;
				}
				ans[i] = x;
				ha[x] = 1;
				if (x > a[i]) {
					bok = 1;
				}
			}
		}
		if (bok == 1) {
			cout << -1 << endl;
			continue;
		}
		for (int i = 0; i < n; i++) {
			cout << ans[i] << ' ';
		}
		cout << endl;

		delete[] a;
	}

	return 0;
}