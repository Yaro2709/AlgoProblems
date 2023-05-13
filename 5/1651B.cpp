#include <iostream>
#include <vector>

using namespace std;

int main() {

	int tt;
	cin >> tt;

	vector<int> ans;
	for (long long i = 1; i <= int(1e9); i *= 3) {
		ans.push_back(i);
	}

	while (tt--) {
		int n;
		cin >> n;
		if (n > ans.size()) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		for (int i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}