#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	while (1) {
		if (n % m == 0) {
			for (int i = 1; i <= m; i++)
				cout << n / m << ' ';
			return 0;
		}
		else {
			cout << n / m << ' ';
			n -= (n / m);
			m--;
		}
	}

	return 0;
}