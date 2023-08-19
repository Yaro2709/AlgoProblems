#include<iostream>
#include<math.h>

using namespace std;

int cari(int n)
{
	int x;
	for (x = sqrt(n); x >= 1; x--)
	{
		if (n % x == 0)
		{
			return x;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	if (sqrt(n) >= 5)
	{
		int temp = cari(n);
		int temp2 = n / temp;
		if (temp < 5 || temp2 < 5)
		{
			cout << -1 << endl;
			return 0;
		}
		int x, y;
		string save = "aiueo";

		for (x = 0; x < temp; x++)
		{
			for (y = 0; y < temp2; y++)
			{
				cout << save[(x + y) % 5];
			}
		}
		cout << endl;
	}
	else
	{
		cout << -1 << endl;
	}

	return 0;
}