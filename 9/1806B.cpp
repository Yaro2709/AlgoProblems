#include <iostream>

using namespace std;

int a[200005];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int zero = 0, one = 0, flag = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			if (a[i] == 0)zero++;
			else if (a[i] == 1)one++;
			else flag = 1;
		}
		if (n % 2 == 1)n += 1;
		if (n / 2 < zero && one >= 1 && flag == 0)cout << 2 << endl;
		else if (n / 2 < zero && flag == 1)cout << 1 << endl;
		else if (n / 2 < zero)cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}