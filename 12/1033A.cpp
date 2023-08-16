#include <iostream>

using namespace std;

int sign(int x) { return x > 0 ? 1 : (x < 0 ? -1 : 0); }

int main()
{
	int n, ax, ay, bx, by, cx, cy;
	cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
	cout << (sign(bx - ax) == sign(cx - ax) && sign(by - ay) == sign(cy - ay) ? "YES" : "NO");

	return 0;
}