#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while (t--) {
		long long int a, b;
		cin >> a >> b;
		long long int m = min(a, b) - llabs(a - b);
		cout << (!(m % 3) and m >= 0 ? "YES\n" : "NO\n");
	}

	return 0;
}