#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		cout << min(a, a / b * b + b / 2) << endl;
	}
	return 0;
}