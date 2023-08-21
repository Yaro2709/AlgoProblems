#include<iostream>
#include<math.h>

using namespace std;

const int N = 3e5 + 5;
int num[N];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int n1, c;
		n1 = c = 0;
		for (int i = 1; i <= n; i++) {
			int m;
			cin >> m;
			if (m & 1) {
				n1++, num[c++] = i;
			}
		}
		if (((n1 - k + 1) & 1) != 1 || n1 < k) {
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		for (int i = 0; i < k - 1; i++) {
			cout << num[i] << " ";
		}
		cout << " " << n << endl;
	}

	return 0;
}