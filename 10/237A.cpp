#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int t1 = -1, t2 = -1, count = 1, temp = 1;
	for (int i = 0; i < n; i++)
	{
		int h, m;
		cin >> h >> m;
		if (t1 == h && t2 == m)
		{
			count++;
			if (count >= temp)
				temp = count;
		}
		else
			count = 1;
		t1 = h, t2 = m;

	}
	cout << temp;

	return 0;
}