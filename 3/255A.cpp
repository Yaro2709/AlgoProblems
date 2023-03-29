#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, x, c = 0;
	vector <int> v = { 0,0,0 };

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;

		v.at(c) += x;
		c++;
		if (c == 3) {
			c = 0;
		}
	}

	int m = max(v.at(0), max(v.at(1), v.at(2)));

	if (m == v.at(0)) cout << "chest";
	else if (m == v.at(1)) 	cout << "biceps";
	else cout << "back";

	return 0;
}