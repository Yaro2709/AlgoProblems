#include<iostream>
#include<algorithm>

using namespace std;

int n, a[100010], t, ans;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (t <= a[i]) {
			t += a[i];
			ans++;
		}
	}
	cout << ans;

	return 0;
}