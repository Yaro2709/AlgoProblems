#include<iostream>

using namespace std;

int main() {
	int n, m, ans;
	char a[1000][1000];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 2; i < n; i++) {
		for (int j = 2; j < n; j++) {
			if (a[i][j] == 'X' && a[i - 1][j - 1] == 'X' && a[i + 1][j + 1] == 'X' && a[i - 1][j + 1] == 'X' && a[i + 1][j - 1] == 'X')ans++;
		}
	}

	cout << ans << endl;

	return 0;
}