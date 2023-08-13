#include <iostream>

using namespace std;

int p[4][4] = {
	{1, 1, 0, 0},
	{1, 1, 0, 0},
	{0, 0, 1, 1},
	{0, 0, 1, 1}
};

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cout << p[i % 4][j % 4] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}