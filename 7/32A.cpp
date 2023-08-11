#include<iostream>

using namespace std;

int a[1000005];

int main() {
	int n, d;
	cin >> n >> d;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (abs(a[i] - a[j]) <= d)ans += 2;
		}
	}
	cout << ans << endl;

	return 0;
}