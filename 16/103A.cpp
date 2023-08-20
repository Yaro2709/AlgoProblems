#include<iostream>

using namespace std;

int main()
{
	long long i, a, n, sum = 0;
	cin >> n;
	for (i = 1; i <= n; i++) { cin >> a; sum += (a - 1) * i + 1; }
	cout << sum;

	return 0;
}