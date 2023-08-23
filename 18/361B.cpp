#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	if (n == k) cout << -1 << '\n';
	else {
		cout << n - k;
		for (int i = 2; i <= n - k; i++) cout << ' ' << i - 1;
		for (int i = n - k + 1; i <= n; i++) cout << ' ' << i;
		cout << '\n';
	}

	return 0;
}