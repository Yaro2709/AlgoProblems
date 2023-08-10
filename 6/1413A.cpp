#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n / 2; ++i)
		{
			int a, b;
			cin >> a >> b;
			cout << -b << " " << a << " ";
		}
		cout << endl;
	}
	return 0;
}