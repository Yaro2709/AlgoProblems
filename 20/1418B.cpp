#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int *lock = new int[n];
		for (int i = 0; i < n; i++)
			cin >> lock[i];
		vector<int> unlock;
		for (int i = 0; i < n; i++)
		{
			if (lock[i] == 0)
				unlock.push_back(arr[i]);
		}
		sort(unlock.rbegin(), unlock.rend());
		int j = 0;
		for (int i = 0; i < n; i++)
		{
			if (lock[i] == 0)
			{
				arr[i] = unlock[j];
				j++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		delete[] lock;
	}
	return 0;
}