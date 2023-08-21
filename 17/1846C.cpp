#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long

const int N = 2e5 + 7;
ll cnt[N], a[N], tim[N], s[N];

int solve() {
	ll n, m, h; cin >> n >> m >> h;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) cin >> a[j];
		sort(a + 1, a + m + 1);
		ll pre = 0, sum = 0;
		cnt[i] = 0;
		for (int j = 1; j <= m; ++j) {
			pre += a[j];
			if (pre > h) break;
			cnt[i] = j;
			sum = sum + pre;
		}
		tim[i] = sum;
	}

	ll c = 0, k = tim[1], d = 0;
	for (int i = 1; i <= n; ++i) {
		if (cnt[i] == cnt[1]) s[++c] = tim[i];
		d += (cnt[i] > cnt[1]);
	}
	sort(s + 1, s + c + 1);
	for (int i = 1; i <= c; ++i) {
		if (s[i] == k) return d + i;
	}
}

int main() 
{
	int t; 
	cin >> t;
	while (t--) {
		cout << solve() << '\n';
	}

	return 0;
}