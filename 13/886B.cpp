#include <iostream>

using namespace std;

const int maxN = 2 * 100000 + 10;
int pos[maxN];

int main()
{
	int n;
	cin >> n;
	pos[0] = maxN;
	for (int i = 1; i <= n; i++)
	{
		int b;
		cin >> b;
		pos[b] = i;
	}

	int ans = 0;
	for (int i = 1; i < maxN; i++)
	{
		if (pos[i] > 0)
		{
			if (pos[i] < pos[ans])
				ans = i;
		}
	}

	cout << ans;

	return 0;
}