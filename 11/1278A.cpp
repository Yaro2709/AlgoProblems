#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int q;
	cin >> q;
	while (q--) {
		string a, b;
		cin >> a >> b;
		string aa = a;
		bool ans = false;
		sort(aa.begin(), aa.end());
		for (int i = 0; i < b.size(); i++) {
			string res = "";
			for (int j = i; j < i + a.size(); j++) {
				res += b[j];
			}
			sort(res.begin(), res.end());
			if (res == aa) {
				ans = true;
				break;
			}
		}
		if (ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}