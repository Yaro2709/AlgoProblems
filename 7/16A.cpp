#include<iostream>

using namespace std;

int main()
{
	int a, b;
	bool flag = true;
	char c[101][101];
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> c[i][j];
			if (c[i][j] != c[i][j - 1] && j || c[i][j] == c[i - 1][j])
			{
				flag = false;
			}
		}
	}

	if (flag)	cout << "YES";
	else		cout << "NO";

	return 0;
}