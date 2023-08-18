#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, l, r, flag = 1;
		cin >> n >> l >> r;
		int *arr = new int[n + 1];
		int temp;
		for (int i = 1; i <= n; i++)
		{
			temp = (((l - 1) / i) + 1) * i;
			if (temp >= l && temp <= r)
				arr[i] = temp;
			else
			{
				flag = 0;
			}
		}
		if (flag)
		{
			cout << "YES" << endl;
			for (int i = 1; i <= n; i++)
				cout << arr[i] << " ";
			cout << endl;
		}
		else
			cout << "NO" << endl;

		delete[] arr;
	}

	return 0;
}