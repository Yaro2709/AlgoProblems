#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	bool* done = new bool[n];
	for (int i = 0; i < n; i++) done[i] = 0;
	for (int i = 0; i < n; i++) {
		if (!done[i]) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] % a[i] == 0) {
					done[j] = 1;
				}
			}
			ans++;
		}
	}
	cout << ans << '\n';

	delete[] a;
	delete[] done;

	return 0;
}