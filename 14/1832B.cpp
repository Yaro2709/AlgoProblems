#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long

void solve() {
	ll n, k, sum = 0;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr.begin(), arr.end());
	ll s = 0;
	for (int i = 0; i < k; i++) {
		s += arr[n - 1 - i];
	}
	ll ans = s;
	for (int i = 0; i < k; i++) {
		s = s + arr[2 * i] + arr[2 * i + 1] - arr[n - k + i];
		ans = min(ans, s);
	}
	cout << sum - ans << endl;
}

int main()
{
	ll t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}