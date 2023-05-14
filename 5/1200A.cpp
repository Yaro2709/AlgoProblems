#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int r[10] = { 0 };
	string s;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'L')
		{
			for (int j = 0; j < 10; j++)
			{
				if (r[j] == 0)
				{
					r[j] = 1;
					break;
				}
			}
		}
		else if (s[i] == 'R')
		{
			for (int j = 9; j >= 0; j--)
			{
				if (r[j] == 0)
				{
					r[j] = 1;
					break;
				}
			}
		}
		else
		{
			r[s[i] - 48] = 0;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << r[i];
	}

	return 0;
}