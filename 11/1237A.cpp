#include <iostream>

using namespace std;

int main()
{
	int n;   
	cin >> n;
	int cnt = 0;
	while (n--)
	{
		int x; 
		cin >> x;
		if (x % 2 == 0)			cout << x / 2 << endl;
		else
		{
			if (cnt % 2 == 1)   cout << ((x + 1) / 2) - 1 << endl;
			else				cout << (x + 1) / 2 << endl;
			cnt++;
		}
	}
	return 0;
}