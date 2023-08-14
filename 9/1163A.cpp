#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (b == 0) {
		cout << 1;
	}
	else
	{
		if (b <= (a / 2)) {
			cout << b;
		}
		else {
			cout << a - b;
		}
	}

	return 0;
}