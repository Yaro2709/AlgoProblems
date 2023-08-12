#include <iostream>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (n & (n - 1))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}