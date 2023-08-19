#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int mx = -1;
	int *ans = new int[n];
	ans[n - 1] = 0;
	for (int i = n - 2; i >= 0; --i) {
		mx = max(a[i + 1], mx);
		ans[i] = max(mx - a[i] + 1, 0);
	}
	for (int i = 0; i < n; ++i) {
		if (i)	cout << " ";
		cout << ans[i];
	}
	cout << endl;

	delete[] a;
	delete[] ans;

	return 0;
}