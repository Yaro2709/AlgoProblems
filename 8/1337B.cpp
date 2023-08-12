#include <iostream>

using namespace std;

int main()
{
	int t, x, n, m, answer;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> x >> n >> m;
		answer = x;
		while ((answer > 20) && (n != 0))
		{
			answer = answer / 2 + 10;
			n = n - 1;
		}
		answer = answer - m * 10;
		if (answer <= 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}