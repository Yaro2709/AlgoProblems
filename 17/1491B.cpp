#include<iostream>
#include<vector>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n, u, vv;
		cin >> n >> u >> vv;
		int maxAbsDiff = 0;
		vector<int> v(n);
		int temp;
		for (temp = 0; temp < n; temp++) cin >> v[temp];

		for (temp = 0; temp < n - 1; temp++) maxAbsDiff = max(maxAbsDiff, abs(v[temp] - v[temp + 1]));

		if (maxAbsDiff > 1) {
			cout << "0\n";
		}
		else if (maxAbsDiff == 1) {
			cout << min(u, vv) << "\n";
		}
		else {
			cout << min(vv + vv, u + vv) << "\n";
		}
	}

	return 0;
}