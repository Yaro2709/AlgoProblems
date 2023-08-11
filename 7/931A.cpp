#include<iostream>

using namespace std;

long long int  a[100003];

int main() 
{
	long long int n, x;
	cin >> n >> x;
	int k = (n + x) / 2;
	int m = abs(k - n);
	int p = abs(k - x);
	cout << m * (m + 1) / 2 + p * (p + 1) / 2;
	return 0;
}