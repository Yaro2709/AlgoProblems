#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	set<int> b;
	vector<int> a;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (!b.count(x)) {
			a.push_back(i);
			b.insert(x);
		}
	}

	if (int(a.size()) < k) {
		cout << "NO";
	}
	else {
		cout << "YES ";
		for (int i = 0; i < k; i++) {
			cout << a[i] + 1 << " ";
		}
		cout << endl;
	}

	return 0;
}