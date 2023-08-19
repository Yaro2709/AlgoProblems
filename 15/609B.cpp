#include<iostream>

using namespace std;

int main()
{
	long long int n, m, arr[10] = { 0 }, con = 0, num;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> num, arr[num - 1]++;
	n--, n = (n * (n + 1)) / 2;
	for (int i = 0; i < m; i++)
		while (--arr[i])
			n -= arr[i];
	return cout << n, 0;
}