#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int n[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
	int ans = 0;
	for (int i = a; i <= b; i++) {
		int j = i;
		while (j > 0) {
			ans += n[j % 10];
			j /= 10;
		}
	}
	cout << ans;

	return 0;
}