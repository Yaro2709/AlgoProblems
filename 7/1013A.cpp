#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *f = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> f[i];
	}
	int *s = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int a = 0;
	for (int i = 0; i < n; i++)
	{
		a += s[i] - f[i];
	}

	if (a <= 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	delete[] f;
	delete[] s;

	return 0;
}