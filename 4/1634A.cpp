#include <iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		if (k == 0) {
			cout << 1 << endl; 
			continue;
		}

		int flag = 1;
		for (int i = 0; i < n / 2; i++) 
		{
			if (s[i] != s[n - 1 - i]) {
				flag = 0;
			}
		}

		if (flag == 1) {
			cout << 1 << endl;
		}
		else {
			cout << 2 << endl;
		}
	}

	return 0;
}