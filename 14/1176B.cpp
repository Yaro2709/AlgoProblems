#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int a;
		cin >> a;
		long long int *arr = new long long int[a];
		long long int ans = 0;
		int ar[3] = { 0,0,0 };
		for (int i = 0; i < a; i++)
		{
			cin >> arr[i];
			ar[arr[i] % 3] += 1;
		}
		int x = min(ar[1], ar[2]);
		ans = x + ar[0];
		ans += (ar[1] - x) / 3;
		ans += (ar[2] - x) / 3;
		cout << ans << endl;
	}

	return 0;
}