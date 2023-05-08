#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int *arr = new int[n];
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		vector<int> ans;

		if (sum == x)
		{
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;

		sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (sum + arr[i] != x)
			{
				cout << arr[i] << " ";
				sum += arr[i];
				arr[i] *= -1;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > 0)
			{
				cout << arr[i] << " ";
			}
		}
		cout << endl;

		delete[] arr;
	}

	return 0;
}