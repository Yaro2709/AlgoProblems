#include<iostream>

using namespace std;

int main() {
	int n, x;
	cin >> n;
	int pos1 = 0, pos2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x) {
			pos2 = i;
		}
		else {
			pos1 = i;
		}
	}
	cout << min(pos1, pos2) + 1 << endl;

	return 0;
}