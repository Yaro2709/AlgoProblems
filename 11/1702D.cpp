#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.size();
		string ss = s;
		int p;
		cin >> p;
		sort(s.begin(), s.end());
		int sum = 0;
		for (auto& c : s) {
			sum += (c - 'a') + 1;
		}
		int ans = 0, i = s.size() - 1;
		while (sum > p) {
			sum -= ((s[i] - 'a') + 1);
			i--;
		}
		vector<int> v(26);
		while (i >= 0) {
			v[s[i] - 'a']++;
			i--;
		}
		string ann = "";
		for (int i = 0; i < n; i++) {
			if (v[ss[i] - 'a'] > 0) {
				ann += ss[i];
				v[ss[i] - 'a']--;
			}
		}
		cout << ann << "\n";
	}
	return 0;
}