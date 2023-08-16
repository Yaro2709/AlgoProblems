#include <iostream>

using namespace std;

int main() {
	int n, b, cnt;
	cin >> n;

	cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> b;
		if (b == 1) cnt++;
	}

	if (n == 1 && cnt == 1) return cout << "YES", 0;
	else if (n > 1 && cnt == n - 1) return cout << "YES", 0;

	return cout << "NO", 0;
}