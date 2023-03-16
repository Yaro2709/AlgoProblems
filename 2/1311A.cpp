#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long int a;
		long int b;
		int count = 0;
		cin >> a >> b;
		if (a == b) 
		{
			cout << count << "\n";
		}
		else if (a > b)
		{
			if ((a - b) % 2 == 0)
				count = 1;
			else
				count = 2;
			cout << count << "\n";
		}
		else
		{
			if ((b - a) % 2 == 0)
				count = 2;
			else
				count = 1;
			cout << count << "\n";
		}
	}

	return 0;
}