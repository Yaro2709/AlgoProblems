#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if (k - 1 < n - k)
	{
		for (int i = 0; i < k - 1; i++) {
			cout << "LEFT" << endl;
		}
		for (int i = 0; i < n; i++)
		{
			cout << "PRINT " << s[i] << endl;
			if (i < n - 1) {
				cout << "RIGHT" << endl;
			}
		}
		return 0;
	}
	for (int i = 0; i < n - k; i++) {
		cout << "RIGHT" << endl;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << "PRINT " << s[i] << endl;
		if (i) {
			cout << "LEFT" << endl;
		}
	}

	return 0;
}