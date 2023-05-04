#include <iostream>

using namespace std;

void work()
{
	int n, k1, k2, w, b;
	cin >> n >> k1 >> k2 >> w >> b;
	if (k1 + k2 >= w * 2 && n - k1 + n - k2 >= b * 2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		work();
	}

	return 0;
}