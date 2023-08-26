#include<iostream>

using namespace std;

int main()
{
	int x = 2, n;
	cin >> n;
	cout << n << " ";
	while (n > 1) {
		if (n % x != 0)x++;
		else {
			n /= x;
			cout << n << " ";
		}
	}
	return 0;
}