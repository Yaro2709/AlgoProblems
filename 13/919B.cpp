#include<iostream>

using namespace std;

int gorgeous(int n)
{
	int ans = 0;
	while (n != 0) {
		ans += n % 10;
		n /= 10;
	}
	if (ans == 10) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	int k;
	cin >> k;
	int i = 1;
	while (k != 0) {
		if (gorgeous(i)) {
			--k;
		}
		i += 9;
	}
	cout << i - 9 << endl;

	return 0;
}