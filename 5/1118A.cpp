#include <iostream>

using namespace std;

int main() 
{
	long long int  t;
	cin >> t;
	while (t--) {
		long long int a, b, c;
		cin >> a >> b >> c;
		if (b <= c / 2) {
			cout << a * b << endl;
		}
		else {
			if (a % 2 == 0) cout << (a / 2) * c << endl;
			else			cout << (a / 2) * c + b << endl;
		}
	}

	return 0;
}