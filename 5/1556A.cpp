#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a;
		cin >> a;
		int b;
		cin >> b;
		int d1 = a - b;

		if (d1 % 2 == 0)
		{
			if (a == 0 && b == 0) {
				cout << "0" << endl;
			}
			else if (a == b) {
				cout << "1" << endl;
			}
			else {
				cout << "2" << endl;
			}
		}
		else
		{
			cout << "-1" << endl;
		}
	}

	return 0;
}