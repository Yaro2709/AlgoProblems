#include<iostream>

using namespace std;

int main()
{
	long long m;
	long long ans = -10000000;
	long long tmp;
	cin >> m;
	for (long long i = 0; i < m; i++)
	{
		cin >> tmp;
		ans = max(ans, min(abs(tmp - 1), abs(tmp - 1000000)));
	}
	cout << ans << endl;

	return 0;
}