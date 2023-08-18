#include<iostream>

using namespace std;

int a[500000];
int pos[500000];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = n + 1;
		for (int i = 1; i <= 150000; i++)pos[i] = 0;
		for (int i = 1; i <= n; i++) {
			int x;
			cin >> x;
			if (!pos[x]) {
				pos[x] = i;
			}
			else {
				ans = min(ans, i - pos[x]);
				pos[x] = i;
			}
		}
		cout << n - ans << endl;
	}

	return 0;
}