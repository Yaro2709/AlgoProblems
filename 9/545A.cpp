#include <iostream>

using namespace std;

int a[101][101];

int main()
{
	int n;
	cin >> n;
	int count = 0;
	bool good[101];
	for (int i = 0; i < 101; i++)
	{
		good[i] = true;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 1 || a[i][j] == 3)
			{
				good[i] = false;
			}
		}
		if (good[i] == true) { 
			count++; 
		}
	}

	cout << count << endl;
	for (int i = 0; i < n; i++)
	{
		if (good[i] == true) {
			cout << i + 1 << " ";
		}
	}

	return 0;
}