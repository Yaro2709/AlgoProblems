#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int t;
		bool retfirst = true;
		bool first = true;
		bool deted = false;
		while (n--) {
			cin >> t;
			if (!deted && t > 1) {
				deted = true;
				retfirst = first;
			}
			if (t == 1)first = !first;
		}
		if (!deted)
			cout << ((!first) ? "First" : "Second") << endl;
		else
			cout << (retfirst ? "First" : "Second") << endl;
	}

	return 0;
}