#include <iostream>

using namespace std;

char a[110][110];

int main() {
	int n, m, ans;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			bool ch = true;
			for (int q = 0; q < n; q++)
				if (a[q][j] > a[i][j])
					ch = false;
			if (ch == true) {
				ans++;
				break;
			}
		}
	}

	cout << ans << endl;

	return 0;
}