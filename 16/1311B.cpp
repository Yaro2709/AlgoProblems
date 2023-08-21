#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--) {
		int n, m; 
		cin >> n >> m;
		vector <int> a(n);
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		vector <int> p(n);
		for (int i = 0; i < m; ++i) {
			int pos; cin >> pos;
			p[pos - 1] = 1;
		}
		while (true) {
			bool ok = false;
			for (int i = 0; i < n; ++i) {
				if (p[i] && a[i] > a[i + 1]) {
					ok = true;
					swap(a[i], a[i + 1]);
				}
			}
			if (!ok) break;
		}
		bool ok = true;
		for (int i = 0; i < n - 1; ++i) {
			ok = ok & (a[i] <= a[i + 1]);
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}