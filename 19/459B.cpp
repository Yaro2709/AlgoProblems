#include<iostream>
#include<algorithm>

using namespace std;

long long a, b, c, d[1234567], e, i, j, n;
string s, s1;

int main() {
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> d[i];
	sort(d + 1, d + n + 1);
	cout << d[n] - d[1] << " ";
	for (i = 1; i <= n; i++) {
		if (d[i] == d[1]) a++;
		if (d[i] == d[n]) b++;
	}
	if (d[n] == d[1]) {
		cout << a * (a - 1) / 2;
		exit(0);
	}
	cout << a * b;

	return 0;
}