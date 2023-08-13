#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b, c, d;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b >> c >> d;
		cout << max(a + b, c + d) << endl;
	}

	return 0;
}