#include <iostream>

using namespace std;

int a[200000];

int main() {
	int n;
	cin >> n;
	int ans = 0, z = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 2 * n; i++) {
		if (a[i % n]) {
			z++;
		}
		else {
			z = 0;
		}
		ans = max(ans, z);
	}
	cout << ans << endl;

	return 0;
}