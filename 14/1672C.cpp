#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, flag = 0, p = 0, b = 0, c = 0;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (i + 1 < n && a[i] == a[i + 1])
			{
				p = i;
				if (flag == 1 && p != b)
				{
					c += p - b;
					b = p;
				}
				else if (flag == 1 && p == b)
				{
					c += 1;
					i++;
					b = p + 1;
				}
				else b = p + 1;
				flag = 1;
			}
		}
		cout << c << endl;

		delete[] a;
	}

	return 0;
}