#include <iostream>

using namespace std;

int main()
{
	int n, b, d; 
	cin >> n >> b >> d;
	long long int sum = 0; 
	int count = 0;

	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a <= b) {
			sum += a;
		}
		if (sum > d) {
			count++;
			sum = 0;
		}

	}
	cout << count;

	return 0;
}