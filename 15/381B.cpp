#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int *a = new int[n];
	int *q = new int[n];
	int *p = new int[n];
	int op = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		q[i] = 0;
	}

	sort(a, a + n);

	for (int i = 0; i < n; i++)
	{
		if (op == 0)
		{
			p[op] = a[i];
			op++;
			q[i] = 1;
			continue;

		}
		if (a[i] > p[op - 1])
		{
			p[op] = a[i];
			q[i] = 1;
			op++;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (q[i] == 0)
		{
			if (a[i] < p[op - 1])
			{
				p[op] = a[i];
				op++;

			}
		}
	}
	cout << op << endl;
	for (int i = 0; i < op; i++)
	{
		cout << p[i] << ' ';
	}

	delete[] a;
	delete[] q;
	delete[] p;

	return 0;
}