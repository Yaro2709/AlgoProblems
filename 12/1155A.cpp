#include <iostream>

using namespace std;

int main() {
	long long int n;
	string s;
	cin >> n >> s;
	int f = 0;
	long i;
	for (i = 0; i < n; i++) {
		if (s[i] < s[i - 1]) {
			f = 1;
			break;
		}
	}
	if (f == 0)
		cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		cout << i << " " << i + 1 << endl;
	}
	return 0;
}