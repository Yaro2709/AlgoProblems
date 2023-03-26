#include<iostream>

using namespace std;

int main()
{
	int a, b, num[9] = { 1,2,3,4,5,6,7,8,9 };
	cin >> b;
	while (b > 0)
	{
		cin >> a;
		int shu[9] = { 0 };
		for (int i = 8; i >= 0; i--)
		{
			int x = a - num[i];
			if (x >= 0) {
				shu[i] = num[i];
			}
			if (x < 0) {
				a += num[i];
			}
			a -= num[i];
		}
		for (int i = 0; i < 9; i++)
		{
			if (shu[i] == 0) {
				continue;
			}
			else {
				cout << shu[i];
			}
		}
		cout << endl;
		b--;
	}

	return 0;
}