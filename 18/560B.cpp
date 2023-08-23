#include<iostream>

using namespace std;

void solve(int x, int y, int a1, int a2, int b1, int b2)
{
	if ((x - a1 >= b1 && y >= b2 && y >= a2) || (x - a1 >= b2 && y >= b1 && y >= a2) || (x - a2 >= b2 && y >= b1 && y >= a1) || (x - a2 >= b1 && y >= b2 && y >= a1)) cout << "YES";
	else 	if ((y - a1 >= b1 && x >= b2 && x >= a2) || (y - a1 >= b2 && x >= b1 && x >= a2) || (y - a2 >= b2 && x >= b1 && x >= a1) || (y - a2 >= b1 && x >= b2 && x >= a1)) cout << "YES";
	else cout << "NO";
}

int main()
{
	int x, y, a1, a2, b1, b2;
	cin >> x >> y >> a1 >> a2 >> b1 >> b2;
	solve(x, y, a1, a2, b1, b2);

	return 0;
}