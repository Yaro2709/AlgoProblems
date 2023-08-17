#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int>v(n);
		set<int>s;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			while (v[i] > n)v[i] = v[i] / 2;
			while (s.find(v[i]) != s.end())v[i] = v[i] / 2;
			if (v[i] != 0)s.insert(v[i]);

		}
		if (s.size() == n)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}