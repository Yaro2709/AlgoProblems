#include<iostream>
#include<vector>

using namespace std;

long long int gcd(long long int a, long long int b)
{
	return b ? gcd(b, a % b) : a;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n), vis(n, 0);
		for (int i = 0; i < n; i++)cin >> v[i];
		int ma = INT_MIN, t;
		for (int i = 0; i < n; i++) {
			if (ma < v[i]) {
				ma = v[i];
				t = i;
			}
		}
		cout << ma << " ";
		vis[t] = 1;
		int p = n - 1;
		int prev = v[t];
		while (p--) {
			ma = INT_MIN;
			for (int i = 0; i < n; i++) {
				if (!vis[i]) {
					if (ma < gcd(prev, v[i])) {
						ma = gcd(prev, v[i]);
						t = i;
					}
				}
			}
			cout << v[t] << " ";
			vis[t] = 1;
			prev = ma;
		}
		cout << endl;
	}
	return 0;
}