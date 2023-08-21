#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>arr(n, 0);
		int a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			arr[i] = a;
		}
		map<int, int>mp;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				mp[arr[i] ^ arr[j]]++;
			}
		}
		if (n % 2 != 0)cout << -1 << "\n";
		else {
			int ans = -1;
			for (auto it = mp.begin(); it != mp.end(); it++) {
				if (it->second == n / 2) {
					ans = it->first;
					break;
				}
			}
			cout << ans << "\n";
		}
	}

	return 0;
}