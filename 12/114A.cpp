#include <iostream>

using namespace std;

int main()
{
	int long long k, l, i = 0;
	cin >> k >> l;
	while (l != 1)
	{
		if (l % k != 0)
		{
			cout << "NO";
			return 0;
		}
		++i;
		l /= k;
	}
	cout << "YES" << endl << i - 1;

	return 0;
}