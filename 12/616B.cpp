#include <iostream>

using namespace std;

int a[110][110];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int tmp = 1e9;
		for (int j = 1; j <= m; j++)
			tmp = min(tmp, a[i][j]);
		ans = max(ans, tmp);
	}
	cout << ans << endl;
	return 0;
}