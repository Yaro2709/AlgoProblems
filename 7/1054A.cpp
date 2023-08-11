#include <iostream>

using namespace std;

int main()
{
	int x, y, z, a, b, c;
	cin >> x >> y >> z >> a >> b >> c;
	int aa = abs(x - y) * a;
	int ab = abs(z - x) * b + abs(x - y) * b + 3 * c;
	if (aa < ab)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}
	return 0;
}