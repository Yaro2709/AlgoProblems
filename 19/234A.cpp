#include<iostream>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	long long int n, i, j;
	cin >> n;
	string s;
	cin >> s;
	j = n / 2;
	for (i = 0; i < n / 2; i++) {
		if (s[i] == 'L' && s[j] == 'R')
			cout << i + 1 << " " << j + 1 << "\n";
		else
			cout << j + 1 << " " << i + 1 << "\n";

		j++;
	}
	return 0;
}