#include<iostream>
#include<vector>

using namespace std;

vector<int>v[100100];

int main()
{
	int n, last1, last2;
	cin >> n;
	for (int i = 0; i < 2 * n; i++)
	{
		int x;
		cin >> x;
		v[x].push_back(i);
	}
	long long ans = 0;
	for (int i = 1; i <= n; i++)
	{
		ans += abs(v[i][0] - last1) + abs(v[i][1] - last2);
		last1 = v[i][0];
		last2 = v[i][1];
	}
	cout << ans << endl;

	return 0;
}