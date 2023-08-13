#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		int x1; int y1;
		cin >> x1; cin >> y1;
		x = max(x, x1 + y1);
	}
	cout << x << endl;

	return 0;
}