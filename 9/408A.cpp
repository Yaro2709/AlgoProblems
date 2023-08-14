#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, x, sum, ans[1000];
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < arr[i]; j++)
		{
			cin >> x;
			sum += (x * 5) + 15;
		}
		ans[i] = sum;
	}
	sort(ans, ans + n);

	cout << ans[0] << endl;

	return 0;
}