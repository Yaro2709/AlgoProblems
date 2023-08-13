#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n, s, t;
		cin >> n >> s >> t;
		cout << max(n - s, n - t) + 1 << endl;
	}

	return 0;
}