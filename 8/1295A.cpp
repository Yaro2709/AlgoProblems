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
		if (n % 2 != 0)
		{
			cout << "7";
			n = n - 3;
		}
		for (; n > 0; n -= 2)
		{
			cout << "1";
		}
		cout << endl;
	}

	return 0;
}