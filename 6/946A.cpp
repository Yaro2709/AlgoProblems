#include <iostream>

using namespace std;

int main() {
	long long int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long int a;
		cin >> a;
		ans += abs(a);
	}
	cout << ans;

	return 0;
}