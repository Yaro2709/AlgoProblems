#include<iostream>
#include<vector>

using namespace std;

#define ll long long int

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector <int> vec(n);
		for (int& a : vec)
			cin >> a;
		ll ans = 0;
		for (int i = 1; i < n; ++i)
			if (vec[i] < vec[i - 1])
				ans += vec[i - 1] - vec[i];
		cout << ans << endl;
	}

	return 0;
}