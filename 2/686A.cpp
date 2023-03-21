#include <iostream>

using namespace std;

int main()
{
	long long int n, x;
	cin >> n >> x;

	long long int d = 0;
	for (int i = 1; i <= n; i++)
	{
		char c;
		long long int m;
		cin >> c >> m;

		if (c == '+') {
			x = x + m;
		}
		else
		{
			if (x >= m) {
				x = x - m;
			}
			else {
				d++;
			}
		}
	}
	cout << x << " " << d << endl;

	return 0;
}