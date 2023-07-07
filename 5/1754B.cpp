#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n % 2 == 0)
		{
			int num = n / 2;
			for (int i = num; i >= 1; i--)
			{
				cout << i << " " << i + num << " ";
			}
		}
		else
		{
			int num = n / 2;
			for (int i = num; i >= 1; i--)
			{
				cout << i << " " << i + num << " ";
			}
			cout << n;
		}
		cout << endl;
	}

	return 0;
}