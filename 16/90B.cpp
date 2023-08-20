#include<iostream>

using namespace std;

const int MAX = 110;

char a[MAX][MAX];

bool check[MAX][MAX];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		for (int j = 0; j < x.size(); j++) {
			a[i][j] = x[j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				if (k != i && a[i][j] == a[k][j]) {
					check[i][j] = 1;
				}
			}
			for (int k = 0; k < m; k++) {
				if (k != j && a[i][j] == a[i][k]) {
					check[i][j] = 1;
				}
			}
		}
	}
	string ans = "";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check[i][j] == 0) {
				ans += a[i][j];
			}
		}
	}
	cout << ans << endl;

	return 0;
}