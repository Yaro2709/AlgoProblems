#include<iostream>

using namespace std;

#define N 3100

int A[N], B[N];

int main()
{
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> A[i];
		B[A[i]]++;
	}
	for (i = 1; i <= 3000; i++)
		if (!B[i]) {
			cout << i;
			return 0;
		}
	cout << i;

	return 0;
}