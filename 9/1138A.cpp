#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n + 2];
	int cnt = 1, prev = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	a[0] = 0;
	a[n + 1] = 0;
	int ans = 0;
	for (int i = 1; i <= n + 1; i++) {
		if (a[i] != a[i - 1]) {
			ans = max(ans, min(prev, cnt));
			prev = cnt;
			cnt = 1;
		}
		else cnt++;
	}
	cout << 2 * ans << "\n";

	delete[] a;

	return 0;
}