#include<iostream>

using namespace std;

const int N = 1e5 + 5;
int c[N];

int main() {
	int n, mx;
	cin >> n;
	for (int i = 2; i <= n + 1; i++)
		if (c[i] == 0)
			for (int j = i + i; j <= n + 1; j += i) {
				c[j] += (c[i] == c[j]);
				mx = max(mx, c[j]);
			}

	cout << mx + 1 << endl;
	for (int i = 2; i <= n + 1; i++)
		cout << c[i] + 1 << " ";
	cout << endl;

	return 0;
}