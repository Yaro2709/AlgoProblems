#include<iostream>

using namespace std;

int main() {
	int n, m, j;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> j;
		if (j != 86400) {
			m -= 86400 - j;
		}
		if (m <= 0) {
			cout << i + 1;
			return 0;
		}
	}
	return 0;
}