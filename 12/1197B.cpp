#include <iostream>

using namespace std;

int main()
{
	long long int n, a, count = -0, temp = -1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (count == 0)
		{
			if (temp > a)
			{
				count = 1;
			}
		}
		else
		{
			if (temp < a)
			{
				count = 2;
				break;
			}
		}
		temp = a;
	}

	if (count == 1 || count == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}