#include <iostream>

using namespace std;

int main()
{
	int c;
	string h, y;
	cin >> c >> y >> h;
	if (h == "week")
	{
		if (c == 5 || c == 6) cout << 53;
		else cout << 52;
	}
	else
	{
		if (c == 30) cout << 11;
		else if (c == 31) cout << 7;
		else cout << 12;
	}
	return 0;
}