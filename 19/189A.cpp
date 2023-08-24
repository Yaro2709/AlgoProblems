#include<iostream>

using namespace std;

int n, i, j, x[9], y[4100];

int main() {
	cin >> n >> x[0] >> x[1] >> x[2];
	for (i = 0; i < 3; i++)
		for (j = x[i]; j <= n; j++)
			if (j == x[i] || y[j - x[i]])
				y[j] = max(y[j], y[j - x[i]] + 1);
	cout << y[n];

	return 0;
}