#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--) {
		int n, k; 
		cin >> n >> k;
		if (k == 0) {
			cout << "NO" << endl;
			continue;
		}

		bool flag = true;
		vector<pair<int, int> > ans;
		for (int i = 1; i <= n; i += 2) {
			if ((i + k) * (i + 1) % 4 == 0) {
				ans.push_back(make_pair(i, i + 1));
			}
			else if ((i + 1 + k) * i % 4 == 0) {
				ans.push_back(make_pair(i + 1, i));
			}
			else {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << "YES" << endl;
			for (pair<int, int> i : ans) {
				cout << i.first << " " << i.second << '\n';
			}
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}