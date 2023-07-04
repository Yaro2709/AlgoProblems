#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		
		int *s = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
		}

		long long int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += s[i];
		}

		if (sum >= m)	cout << m << endl;
		else			cout << sum << endl;

		delete[] s;
	}

	return 0;
}