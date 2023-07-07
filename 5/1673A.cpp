#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		int n = str.length();
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += (str[i] - 'a' + 1);
		}
		if (n % 2 == 0) {
			cout << "Alice " << sum << endl;
		}
		else {
			int x = sum - 2 * (str[0] - 'a' + 1);
			int y = sum - 2 * (str[n - 1] - 'a' + 1);
			if (x > 0 || y > 0) {
				cout << "Alice " << max(x, y) << endl;
			}
			else {
				cout << "Bob " << abs(min(x, y)) << endl;
			}
		}
	}
	return 0;
}