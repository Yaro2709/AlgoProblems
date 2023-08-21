#include<iostream>
#include<vector>

using namespace std;

void solve() {
	int long long i, j, n;
	cin >> n;
	vector<string>arr(n);
	for (i = 0; i < n; ++i)
		cin >> arr[i];
	int long long ans = 0;
	for (i = 0; i < n; ++i) {
		for (j = i; j < n - i - 1; ++j) {
			int long long zero = 0;
			if (arr[i][j] == '0')	++zero;
			if (arr[j][n - 1 - i] == '0')	++zero;
			if (arr[n - 1 - j][i] == '0')	++zero;
			if (arr[n - 1 - i][n - 1 - j] == '0')	++zero;
			if (zero == 1)++ans;
			else if (zero == 2)ans += 2;
			else if (zero == 3)ans += 1;
		}
	}
	cout << ans << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}