#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long int x;
	cin >> x;
	long long int ans = x;
	long long int ans1;
	for (int i = 1; i < n; i++)
	{
		cin >> x;
		ans |= x;
	}
	cin >> x;
	ans1 |= x;
	for (int i = 1; i < n; i++)
	{
		cin >> x;
		ans1 |= x;
	}
	cout << ans + ans1;

	return 0;
}