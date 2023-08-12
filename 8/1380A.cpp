#include <iostream>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		int n; 
		cin >> n;
		int f = 0;
		int *arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 1; i < n - 1; i++)
		{
			if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1]))
			{
				cout << "YES" << endl;
				cout << i << " " << i + 1 << " " << i + 2 << endl;
				f = 1;
				break;
			}
		}
		if (!f) {
			cout << "NO" << endl;
		}

		delete[] arr;
	}
	return 0;
}