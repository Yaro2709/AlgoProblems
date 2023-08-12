#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n;
		cin >> m;
		n--;
		while (n--)
		{
			int c;
			cin >> c;
			m = min(m, (m & c));
		}
		cout << m << endl;
	}

	return 0;
}