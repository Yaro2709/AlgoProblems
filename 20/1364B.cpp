#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		vector<int>v;
		v.push_back(0);
		for (int i = 1; i < (n - 1); i++)
		{
			if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) || (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))
				v.push_back(i);
		}
		v.push_back(n - 1);
		int temp = v.size();
		cout << temp << endl;
		for (int i = 0; i < temp; i++)
			cout << arr[v[i]] << " ";
		cout << endl;

		delete[] arr;

	}
	return 0;
}