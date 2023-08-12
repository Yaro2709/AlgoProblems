#include <iostream>

using namespace std;

int main() {
	int maxv = 0;
	int k;
	int in;

	cin >> k;

	while (k--) {
		cin >> in;
		maxv = max(maxv, in);
	}

	cout << max(0, maxv - 25) << endl;

	return 0;
}