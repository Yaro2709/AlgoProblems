#include <iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		int sum = 0;
		for (int j = 0; j < n; ++j) {
			if (s[j] > '0') {
				sum += ((s[j] - '0') + (j < n - 1));
			}
		}
		cout << sum << endl;
	}

	return 0;
}