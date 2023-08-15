#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		int ans = 0;
		for (int i = 0; i < a.size(); i++) {
			for (int j = 0; j < b.size(); j++) {
				int k = 0;
				while (i + k < a.size() && j + k < b.size() && a[i + k] == b[j + k]) k++;
				ans = max(ans, k);
			}
		}
		cout << a.size() + b.size() - ans * 2 << '\n';
	}

	return 0;
}