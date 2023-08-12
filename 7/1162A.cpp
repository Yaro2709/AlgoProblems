#include <iostream>

using namespace std;

int a[55];

int main() {
	int n, m, h;
	cin >> n >> h >> m;
	for (int i = 1; i <= n; i++) {
		a[i] = h;
	}
	int b, c, d;
	for (int i = 0; i < m; i++) {
		cin >> b >> c >> d;
		for (int j = b; j <= c; j++)
			a[j] = min(d, a[j]);
	}
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += a[i] * a[i];
	}
	cout << sum << endl;

	return 0;
}