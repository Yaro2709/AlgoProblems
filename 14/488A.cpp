#include<iostream>

using namespace std;

int main()
{
	int n = 0, count = 1, i = 0, temp = 0;
	cin >> n;
	n++;
	while (1)
	{
		temp = n;
		while (temp)
		{
			if (temp % 10 == 8 || temp % 10 == -8)
			{
				cout << count;
				return 0;
			}
			else
				temp /= 10;
		}
		n++;
		count++;
	}

	return 0;
}