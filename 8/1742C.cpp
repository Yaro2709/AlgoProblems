#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	while (a--)
	{
		char q[8][8];
		bool x = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
				cin >> q[i][j];
		}
		for (int i = 0; i < 8; i++)
		{
			if (q[i][0] == 'R' && q[i][1] == 'R' && q[i][2] == 'R' && q[i][3] == 'R' && q[i][4] == 'R' && q[i][5] == 'R' && q[i][6] == 'R' && q[i][7] == 'R')
			{
				x = 1; break;
			}
		}
		if (x)	cout << "R" << endl;
		else	cout << "B" << endl;
	}

	return 0;
}