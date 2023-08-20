#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const int MAXN = 5 * 1000 * 100 + 20, INF = 1000 * 1000 * 1000;
int a[MAXN];

int main() {
	int q;
	cin >> q;
	while (q--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];

		sort(a, a + n);

		int ans = 0;
		int pre = -1;
		for (int i = 0; i < n; i++) {
			if (a[i] <= i - pre) {
				ans++;
				pre = i;
			}
		}
		cout << ans << endl;
	}

	return 0;
}