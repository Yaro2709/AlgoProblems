#include<iostream>

using namespace std;

int main()
{
	long long int a, b, t, s, c = 0, i;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		s = a + b;
		for (i = 2; i * i <= s; i++)
		{
			if (s % i < 1)
			{
				c++;
				break;
			}
		}

		if (a - b == 1 && c == 0)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
		c = 0;
	}

	return 0;
}