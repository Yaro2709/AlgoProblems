#include <iostream>

using namespace std;

int main()
{
	long long int a, b, c, sa, sb;
	cin >> a >> b >> c;
	sa = a / c;
	if (a % c != 0) {
		sa++;
	}
	sb = b / c;
	if (b % c != 0) {
		sb++;
	}
	cout << sa * sb;

	return 0;
}