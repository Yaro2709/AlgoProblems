#include <iostream>

using namespace std;

int main() 
{
	int t; 
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		if (n == 1)
		{
			cout << "0" << endl;
			continue;
		}
		if (n == 2)
		{
			cout << "1" << endl;
			continue;
		}
		if (n == 3)
		{
			cout << "2" << endl;
			continue;
		}
		if (n & 1)
		{
			cout << "3" << endl;
			continue;
		}
		cout << "2" << endl;
	}
	return 0;
}