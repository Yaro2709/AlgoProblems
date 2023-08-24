#include<iostream>

using namespace std;

int main()
{
	long t;  cin >> t;
	while (t--)
	{
		long long int a, b, n, m;  cin >> a >> b >> n >> m;
		if (a + b < m + n)
			cout << "No\n";
		else
		{
			if (min(a, b) >= m)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}

	return 0;
}