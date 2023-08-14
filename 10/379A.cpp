#include <iostream>

using namespace std;

int main() {
	int m, k;
	cin >> m >> k;
	int ans = ((m * k) - 1) / (k - 1);
	cout << ans << endl;

	return 0;
}