#include<iostream>
#include <set>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		multiset<int> s;
		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			s.insert(temp);
		}
		int ans = 0;
		while (!s.empty()) {
			auto it = s.begin();
			while (it != s.end()) {
				int p = *it;
				s.erase(it);
				it = s.find(p + 1);
			}
			ans++;
		}
		cout << ans << endl;
	}

	return 0;
}