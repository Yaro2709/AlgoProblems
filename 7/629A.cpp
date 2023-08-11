#include<iostream>

using namespace std;

char c[102][102];

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> c[i];
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (c[i][j] == 'C') {
				for (int q = j + 1; q < n; q++) sum += (c[i][q] == 'C');
				for (int q = i + 1; q < n; q++) sum += (c[q][j] == 'C');
			}

	cout << sum << endl;

	return 0;
}