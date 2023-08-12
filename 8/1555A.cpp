#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		long long int n; 
		cin >> n;
		n += n % 2;
		cout << (n <= 6 ? 15 : n * 5 / 2) << endl;
	}

	return 0;
}