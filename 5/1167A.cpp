#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t, n;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> s;
		if (n < 11) {
			cout << "NO" << endl;
		}
		else {
			if (s.find("8") > n - 11) {
				cout << "NO" << endl;
			}
			else {
				cout << "YES" << endl;
			}
		}
	}

	return 0;
}