#include <iostream>

using namespace std;

using ll = long long int;

int main() {
	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll zero_cnt = 0, one_cnt = 0;
		for (char c : s) {
			if (c == '0') {
				zero_cnt++;
			}
			else {
				one_cnt++;
			}
		}
		if (min(zero_cnt, one_cnt) % 2 == 1) {
			cout << "DA" << endl;
		}
		else {
			cout << "NET" << endl;
		}
	}
	return 0;
}