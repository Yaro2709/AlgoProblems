#include <iostream>

using namespace std;

const int N = 1e6 + 10;
char a[N];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cin >> a;
		int sum = 0;
		int j = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == '1') {
				j = i;
				break;
			}
		}
		for (int i = j; i < n - 1; i++) {
			if (a[i] != a[i + 1]) {
				sum++;
			}
		}
		cout << sum << "\n";
	}

	return 0;
}