#include <iostream>

using namespace std;

int main()
{
	int t, s, x;
	cin >> t >> s >> x;
	if (x - t != 1 && ((x - t) % s == 0 || (x - t) % s == 1) && x >= t) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}