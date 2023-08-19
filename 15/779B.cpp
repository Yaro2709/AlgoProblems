#include<iostream>

using namespace std;

int main()
{
	int n, k, m, l, result = 0, count = 0;
	cin >> n >> k;
	m = n;
	if (m == 0) {
		cout << "0";
	}
	else
	{
		while (m && k > 0)
		{
			l = m % 10;
			if (l == 0)
			{
				k--;
			}
			else
			{
				result++;
			}
			m = m / 10;
			count++;
		}
		if (k > 0)
		{
			cout << count - 1;
		}
		else
			cout << result;
	}
	return 0;
}