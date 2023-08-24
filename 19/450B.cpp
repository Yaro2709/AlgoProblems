#include<iostream>

using namespace std;

long long mod = 1e9 + 7;

int main()
{
	long long f1, f2, n;
	cin >> f1 >> f2 >> n;
	long long x[] = { f1,f2,f2 - f1,-1 * f1,-1 * f2,-1 * f2 + f1 };
	n--;
	n %= 6;
	cout << (x[n] + 2 * mod) % mod << endl;

	return 0;
}