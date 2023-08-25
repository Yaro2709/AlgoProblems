#include<iostream>
#include<vector>

using namespace std;

#define int long long

int32_t main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int n = 0;
		cin >> n;
		int *a = new int[n];
		int *b = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int maxi = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			maxi = max(maxi, a[i] - b[i]);
		}

		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			if (a[i] - b[i] == maxi)
			{
				v.push_back(i + 1);
			}
		}

		n = v.size();
		cout << n << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << "\n";

		delete[] a;
		delete[] b;
	}

	return 0;
}