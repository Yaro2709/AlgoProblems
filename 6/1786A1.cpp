#include<iostream>

using namespace std;

int main()
{
	long long int n, t;
	cin >> t;
	while (t--)
	{
		int a = 0, b = 0;
		cin >> n;
		for (int i = 1; ; i++)
		{
			if (i > n)
			{
				if (i % 4 == 0 or i % 4 == 1) a += n;
				else b += n;
				break;
			}
			else
			{
				if (i % 4 == 0 or i % 4 == 1) a += i;
				else b += i;
				n -= i;
			}
		}
		cout << a << " " << b << endl;
	}
}