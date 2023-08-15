#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, b;
	cin >> n >> b;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int finals = 0;
	if (v[b - 1] == 1)
		finals = 1;

	int l = b - 2, r = b;
	while (l >= 0 && r <= n - 1) {
		if (v[l] == 1 && v[r] == 1) {
			finals += 2;
		}
		l--;
		r++;
	}
	for (int i = 0; i <= l; i++) {
		if (v[i] == 1)
			finals++;
	}

	for (int i = n - 1; i >= r; i--) {
		if (v[i] == 1)
			finals++;
	}
	cout << finals << "\n";

	return 0;
}