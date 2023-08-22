#include<iostream>

using namespace std;

long long a[100010], b[100010];

int main()
{
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t >> a[i];
		b[t] ++;
	}
	for (int i = 0; i < n; i++)
		cout << n + b[a[i]] - 1 << " " << n - b[a[i]] - 1 << '\n';
	return 0;
}