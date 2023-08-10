#include <iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c0 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			c0++;
		}
	}

	if (c0 == n - c0) {
		cout << 2 << endl;
		cout << s.substr(0, n - 1) << " " << s[n - 1] << endl;
	}
	else {
		cout << 1 << endl;
		cout << s;
	}

	return 0;
}