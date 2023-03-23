#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int p = 0;
		string ss = to_string(n);
		for (int i = 0; i < ss.size(); i++)
		{
			if ((int)ss[i] % 2 == 0)
			{
				p = 1;
				break;
			}

		}
		int r = n % 10;
		if (p == 0) {
			cout << -1 << endl;
		}
		else if (r % 2 == 0) {
			cout << 0 << endl;
		}
		else if ((int)ss[0] % 2 == 0) {
			cout << 1 << endl;
		}
		else {
			cout << 2 << endl;
		}
	}
	return 0;
}