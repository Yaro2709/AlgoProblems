#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int t, n, a, p;
	cin >> t;
	vector<int> vec;
	for (int i = 0; i < t; i++) {
		vec.clear();
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> a;
			vec.push_back(a);
		}
		sort(vec.begin(), vec.end());
		p = vec.size() / 2;
		for (int j = 1; j <= n; j++) {
			cout << vec[p] << " ";
			if (j % 2 == 0) {
				p += j;
			}
			else {
				p -= j;
			}
		}
		cout << "\n";
	}

	return 0;
}