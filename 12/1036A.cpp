#include <iostream>

using namespace std;

int main() {

	long long int n, x, ans;
	cin >> n >> x;
	if (x % n != 0) ans++;
	ans += x / n;
	cout << ans;

	return 0;
}