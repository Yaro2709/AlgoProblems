#include<iostream>

using namespace std;

#define ll long long int

int main() {
	ll r, d;
	cin >> r >> d;
	int n;
	cin >> n;
	int x, y, ri;
	int ans;
	while (n--) {
		cin >> x >> y >> ri;
		if (ri * 2 > d) {
			continue;
		}
		if (((r - d + ri) * (r - d + ri) <= x * x + y * y) && (x * x + y * y <= (r - ri) * (r - ri)))ans++;
	}
	cout << ans;

	return 0;
}