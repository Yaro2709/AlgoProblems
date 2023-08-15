#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (find(v.begin(), v.end(), t) == v.end()) {
			if (v.size() >= k) v.pop_back();
			v.insert(v.begin(), t);
		}
	}
	cout << v.size() << endl;
	for (auto i : v) cout << i << ' ';
	cout << endl;

	return 0;
}