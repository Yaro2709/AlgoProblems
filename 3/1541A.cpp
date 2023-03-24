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

		if (n % 2 == 0)
		{
			for (int i = 0; i < n; i += 2)
			{
				cout << i + 2 << " " << i + 1 << " ";
			}
			cout << endl;
		}
		else
		{
			for (int i = 0; i < n - 3; i += 2)
			{
				cout << i + 2 << " " << i + 1 << " ";
			}
			cout << n << " " << n - 2 << " " << n - 1 << endl;
		}
	}

	return 0;
}