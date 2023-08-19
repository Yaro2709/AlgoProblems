#include<iostream>

using namespace std;

int a[3][100000], b[3];

int main() {
	int t;
	cin >> t;
	for (; t--;) {
		int n, x;
		cin >> n >> x;
		for (int i = 0; i ^ 3; ++i) {
			for (int j = 0; j ^ n; ++j) {
				cin >> a[i][j];
			}
		}
		b[0] = b[1] = b[2] = 0;
		for (int i = 0; i ^ 3; ++i) {
			int y = 0;
			for (int j = 0; j ^ n; ++j) {
				y |= a[i][j];
				if ((x | y) == x)
					b[i] = y;
				else
					break;
			}
		}
		cout << ((b[0] | b[1] | b[2]) == x ? "Yes\n" : "No\n");
	}

	return 0;
}