#include <iostream>

using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while (t--)
	{
		long long int n;
		cin >> n;
		if (n % 2 == 0) {
			cout << "2" << " " << n / 2 << endl;
		}
		else {
			cout << "2" << " " << n - (n % 2) << endl;
		}
	}

	return 0;
}