#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n, a;
	cin >> n;
	vector <int> v1, v2;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		v1.push_back(a);
	}
	int x = -1, y = -1;
	v2 = v1;
	sort(v2.begin(), v2.end());

	for (int i = 1; i < n; i++) {
		if (v1[i] < v1[i - 1]) {
			x = i - 1;
			for (int j = i; j < n; j++) {
				if (v1[j] < v1[j - 1]) {
					y = j;
				}
				i = j;
			}
		}
	}
	reverse(v1.begin() + x, v1.begin() + y + 1);
	if (x == -1 && y == -1) {
		x = 0; y = 0;
	}
	if (v1 == v2) {
		cout << "yes" << endl;
		cout << x + 1 << " " << y + 1 << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}