#include<iostream>

using namespace std;

int main() {
	int n, x, y, ans = 0;
	cin >> n >> x >> y;
	string s;
	cin >> s;
	for (int i = n - x; i < n; ++i)
		ans += s[i] - '0' != (i == n - y - 1);
	cout << ans;

	return 0;
}