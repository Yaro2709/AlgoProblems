#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> res;
		int cur = n;
		for (int i = 2; i * i <= n && res.size() < 2; i++) {
			if (cur % i == 0) {
				cur /= i;
				res.push_back(i);
			}
		}
		if (res.size() == 2 && cur > res[1]) {
			cout << "YES\n" << res[0] << ' ' << res[1] << ' ' << cur << '\n';
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}