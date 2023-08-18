#include<iostream>

using namespace std;

int main()
{
	char A[4][4];
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			cin >> A[i][j];
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			int a = A[i][j] == '#' ? 1 : 0;
			int b = A[i + 1][j] == '#' ? 1 : 0;
			int c = A[i][j + 1] == '#' ? 1 : 0;
			int d = A[i + 1][j + 1] == '#' ? 1 : 0;

			if (a + b + c + d >= 3 || a + b + c + d <= 1)
			{
				cout << "YES" << endl;
				return 0;
			}
		}

	}
	cout << "NO" << endl;

	return 0;
}