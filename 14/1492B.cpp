#include<iostream>
#include<vector>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector<int>a(n), b(n, 0);
		for (auto& t : a)cin >> t;
		b[0] = a[0];
		for (int i = 1; i < n; ++i) {
			b[i] = max(b[i - 1], a[i]);
		}
		int ri = n - 1;
		for (int i = n - 1; i >= 0; --i) {
			if (a[i] == b[i]) {
				for (int j = i; j <= ri; ++j)
					cout << a[j] << " ";
				ri = i - 1;
			}
		}
		cout << endl;
	}

	return 0;
}