#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		if (n >= m) {
			cout << "YES" << endl;
		}
		else {
			if (n >= 4) cout << "YES" << endl;
			else if (n == 2 and m == 3) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}

	return 0;
}