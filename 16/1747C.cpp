#include<iostream>

using namespace std;

const int N = 2e5 + 5;
int a[N];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int minn = 2e9;
		for (int i = 1; i <= n; i++) cin >> a[i], minn = min(minn, a[i]);
		if (a[1] == minn) cout << "Bob" << '\n';
		else cout << "Alice" << '\n';
	}
	return 0;
}