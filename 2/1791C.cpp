#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string number;
		cin >> number;

		int min = n;
		int pos = n;
		for (int i = 0; i < n; i++) {
			pos -= 1;
			if (number[i] != number[pos]) {
				min -= 2;
			}
			else {
				break;
			}
		}
		
		if (min > 0) {
			cout << min << endl;
		}
		else {
			cout << 0 << endl;
		}
	}

	return 0;
}