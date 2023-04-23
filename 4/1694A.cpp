#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;

		string ans = "";
		int c = min(a, b);

		for (int i = 0; i < c; ++i) {
			ans += "10";
		}

		a -= c;
		b -= c;
		for (int i = 0; i < a; ++i) {
			ans += "0";
		}
		for (int i = 0; i < b; ++i) {
			ans += "1";
		}

		cout << ans << endl;
	}

	return 0;
}