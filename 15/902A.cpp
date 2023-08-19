#include<iostream>

using namespace std;

int main()
{
	int n, m; 
	cin >> n >> m;
	int ma = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a <= ma)
			ma = max(ma, b);
	}
	if (ma == m)
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}