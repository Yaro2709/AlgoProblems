#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l, r;
	cin >> l >> r;
	int sum = 0;
	for (int i = 0; i < n; i++) sum += a[i];
	int k = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i];
		if (ans >= l && ans <= r) {
			if (sum - ans < l) {
				k = 0; break;
			}
			else if (sum - ans >= l && sum - ans <= r) {
				k = i + 2; break;
			}
		}
		else if (ans > r) {
			k = 0; break;
		}
	}
	cout << k << endl;

	delete[] a;

	return 0;
}