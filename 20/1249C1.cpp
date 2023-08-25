#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int t;
		cin >> t;
		while (true)
		{
			int flag = 1;
			int cnt = t;
			while (cnt)
			{
				if (cnt % 3 == 2) flag = 0;
				cnt /= 3;
			}
			if (flag) break;
			++t;
		}
		cout << t << " ";
		cout << endl;
	}
	return 0;
}