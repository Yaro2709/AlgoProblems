#include<iostream>

using namespace std;

int main()
{
	double n, k;
	long long a;
	char s;
	cin >> n >> s >> k;
	if (n >= 12) n = n - 12;
	n = n * 30;
	n += k / 2;
	k = k * 6;
	n = n * 1000000000;
	k = k * 1000000000;
	a = n; n = a; n = n / 1000000000;
	a = k; k = a; k = k / 1000000000;
	cout << n << " " << k;
	return 0;
}