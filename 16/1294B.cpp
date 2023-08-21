#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end());
	int m = 0, b = 0;
	vector<char>vv;
	for (int i = 0; i < n; i++) {
		if (v[i].first < m || v[i].second < b) {
			cout << "NO\n";
			return;
		}
		else {
			while (v[i].first > m) {
				vv.push_back('R');
				m++;
			}
			while (v[i].second > b)
			{
				vv.push_back('U');
				b++;
			}
		}
	}
	cout << "YES\n";
	for (char i : vv) {
		cout << i;
	}
	cout << "\n";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}