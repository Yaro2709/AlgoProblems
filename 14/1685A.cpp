#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e5;
int a[N], b[N];

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		if (n & 1) {
			cout << "NO" << endl;
			continue;
		}
		sort(a + 1, a + 1 + n);
		int k = 0;
		for (int i = 1, j = n / 2 + 1; i <= n / 2; i++, j++) {
			b[++k] = a[i];
			b[++k] = a[j];
		}
		b[0] = b[n], b[n + 1] = b[1];
		int fl = 1;
		for (int i = 1; i <= n; i++) {
			if ((b[i] < b[i + 1] && b[i] < b[i - 1]) || (b[i] > b[i + 1] && b[i] > b[i - 1])) {
				continue;
			}
			fl = 0;
			break;
		}
		if (fl) {
			cout << "YES" << endl;
			for (int i = 1; i <= n; i++) {
				cout << b[i];
				if (i != n) cout << " ";
				else cout << endl;
			}
		}
		else cout << "NO" << endl;
	}

	return 0;
}