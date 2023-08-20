#include<iostream>

using namespace std;

int dx[] = { 0,0,1,-1,1,-1,-1,1 };
int dy[] = { 1,-1,0,0,1,-1,1,-1 };

int main()
{
	int x, y, ok = 0;
	string ma[4];
	for (int i = 0; i < 4; i++) {
		cin >> ma[i];
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (ma[i][j] == 'x')
			{
				for (int k = 0; k < 8; k++)
				{
					x = i + dx[k];
					y = j + dy[k];
					if (x < 0 || x>3 || y < 0 || y>3 || ma[x][y] == 'o')continue;
					if (ma[x][y] == 'x')
					{
						x = i - dx[k];
						y = j - dy[k];
						if (x < 0 || x>3 || y < 0 || y>3)continue;
						if (ma[x][y] == 'x' || ma[x][y] == '.')ok = 1;
					}
					else if (ma[x][y] == '.')
					{
						x = i - dx[k];
						y = j - dy[k];
						if (x < 0 || x>3 || y < 0 || y>3)continue;
						if (ma[x][y] == 'x')ok = 1;
					}
				}
			}
			if (ma[i][j] == '.')
			{
				for (int k = 0; k < 8; k++)
				{
					x = i + dx[k];
					y = j + dy[k];
					if (x < 0 || x>3 || y < 0 || y>3 || ma[x][y] == 'o')continue;
					if (ma[x][y] == 'x')
					{
						x = i - dx[k];
						y = j - dy[k];
						if (x < 0 || x>3 || y < 0 || y>3)continue;
						if (ma[x][y] == 'x')ok = 1;
					}
				}
			}
		}
	}

	if (ok) cout << "YES";
	else cout << "NO";

	return 0;
}