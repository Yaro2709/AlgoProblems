#include<iostream>

using namespace std;

int main() {
	int n, x, y, ans = 0, ct = 0;
	cin >> n >> x >> y;
	if (x > y) {
		cout << n; return 0;
	}
	for (int i = 0; i < n; i++) {
		int v;
		cin >> v;
		if (v <= x)ct++;

	}
	if (ct % 2 && 1)cout << ct / 2 + 1;
	else cout << ct / 2;

	return 0;
}