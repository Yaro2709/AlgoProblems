#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	n *= n;
	for (int i = 1; i <= n / 2; ++i) {
		cout << i << " " << n - i + 1 << "\n";
	}
	return 0;
}