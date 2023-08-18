#include<iostream>

using namespace std;

const int N = 3 + 1e2;
int a[N];

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		int long long ans = 0;
		for (int i = 1; i <= n; ++i) {
			ans += i * (n - i + 1);
			if (a[i] == 0) ans += i * (n - i + 1);
		}
		cout << ans << endl;
	}
	return 0;
}