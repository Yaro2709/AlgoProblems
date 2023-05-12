#include <iostream>

using namespace std;

int main()
{
	int n;
	int a[200];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		if (x < n) {
			a[x + 1] += a[x] - y;
		}
		a[x] = 0;
		if (x > 1) {
			a[x - 1] += y - 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i] << endl;
	}

	return 0;
}