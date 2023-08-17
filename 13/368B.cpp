#include<iostream>
#include<set>

using namespace std;

int a[100005], dp[100005];

int main() {
	int i, l;
	int n, m;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)cin >> a[i];
	set<int>s;
	for (i = n; i > 0; --i) {
		s.insert(a[i]);
		dp[i] = s.size();
	}
	for (i = 0; i < m; ++i) {
		cin >> l;
		cout << dp[l] << endl;
	}

	return 0;
}