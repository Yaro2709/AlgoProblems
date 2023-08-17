#include <iostream>

using namespace std;

int main() {
	int A[5] = { 0 }, B[5] = { 0 };
	int n;
	cin >> n;
	bool b = 1;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		A[a - 1]++;
	}
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		B[a - 1]++;
	}
	int s = 0;
	for (int i = 0; i < 5; i++)
	{
		int c = (A[i] + B[i]);
		if (c % 2 != 0)
		{
			b = 0;
			break;
		}
		else
		{
			s += abs(A[i] - (A[i] + B[i]) / 2);
		}
	}
	if (b == 0)
		cout << -1;
	else
		cout << s / 2 << endl;

	return 0;
}