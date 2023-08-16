#include <iostream>

using namespace std;

int n, k, x[128], y[128];

int main() 
{
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
		bool possible = 0;
		for (int i = 0; i < n; i++) {
			bool flag = 1;
			for (int j = 0; j < n; j++) {
				if (abs(x[i] - x[j]) + abs(y[i] - y[j]) > k) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				possible = 1;
				break;
			}
		}
		if (possible) cout << "1\n";
		else cout << "-1\n";
	}

	return 0;
}