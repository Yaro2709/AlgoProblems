#include <iostream>
#include <algorithm>

using namespace std;

int a[50];
int f[50];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> f[i];
	}
	sort(f, f + m);
	int res = f[n - 1] - f[0];
	for (int i = 0; i <= m - n; i++) {
		res = min(res, f[i + n - 1] - f[i]);
	}
	cout << res << endl;

	return 0;
}