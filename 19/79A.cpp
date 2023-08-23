#include<iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	string winner[] = { "Ciel","Hanako" };

	int turn = 0;
	while (true)
	{
		if (turn == 0)
		{
			if (x >= 2 && y >= 2)
			{
				x -= 2;
				y -= 2;
				turn = 1;
			}
			else if (x < 2)
			{
				if (x == 1 && y >= 12)
				{
					x--;
					y -= 12;
					turn = 1;
				}
				else if (x == 0 && y >= 22)
				{
					y -= 22;
					turn = 1;
				}
				else break;
			}
			else break;
		}
		else
		{
			if (y >= 22)
			{
				y -= 22;
				turn = 0;
			}
			else if (x >= 1 && y >= 12)
			{
				x--;
				y -= 12;
				turn = 0;
			}
			else if (x >= 2 && y >= 2)
			{
				x -= 2;
				y -= 2;
				turn = 0;
			}
			else break;
		}
	}
	cout << winner[(turn + 1) % 2] << "\n";

	return 0;
}