#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int t;
	int flag = 0;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		if (flag) {
			if (t >= v[v.size() - 1] && t <= v[0]) {
				cout << "1";
				v.push_back(t);
			}
			else {
				cout << "0";
			}
			continue;
		}
		if (v.empty()) {
			v.push_back(t);
			cout << "1";
		}
		else {
			if (t >= v[v.size() - 1]) {
				v.push_back(t);
				cout << "1";
			}
			else {
				if (t <= v[0]) {
					flag = 1;
					cout << "1";
					v.push_back(t);
				}
				else {
					cout << "0";
				}

			}
		}
	}
	cout << "\n";
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		solve();
	}

	return 0;
}