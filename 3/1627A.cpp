#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int g = 0; g < t; g++) 
	{
		int n, m, r, c;
		cin >> n >> m >> r >> c;

		int a[60][60] = { 0 };
		string s;
		bool flag = true;
		int sumr = 0;
		int sumc = 0;
		for (int i = 1; i <= n; i++) {
			cin >> s;
			for (int j = 1; j <= m; j++) {
				if (s[j - 1] == 'B') {
					a[i][j] = 1;
					flag = false;
				}
				sumr += a[r][j];
			}
			sumc += a[i][c];
		}

		if (flag) {
			cout << -1 << endl;
		}
		else if (a[r][c] == 1) {
			cout << 0 << endl;
		}
		else {
			if (sumc > 0 || sumr > 0 || n == 1 || m == 1) {
				cout << 1 << endl;
			}
			else {
				cout << 2 << endl;
			}
		}
	}

	return 0;
}