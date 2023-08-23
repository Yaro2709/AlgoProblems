#include<iostream>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int *a = new int[n + 5];
		int *b = new int[n + 5];
		for (int i = 1; i <= n; i++) {
			cin >> a[i] >> b[i];
		}
		int *ans = new int[n + 5];
		int sec = 1;
		for (int i = 1; i <= n; i++) {
			if (b[i] >= sec) {
				ans[i] = max(sec, a[i]);
				sec = ans[i] + 1;
			}
			else {
				ans[i] = 0;
			}
		}
		for (int i = 1; i <= n; i++) {
			cout << ans[i] << ' ';
		}
		cout << '\n';

		delete[] a;
		delete[] b;
		delete[] ans;
	}
	return 0;
}