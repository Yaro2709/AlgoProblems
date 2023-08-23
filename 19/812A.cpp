#include<iostream>

using namespace std;

int main()
{
	int a[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		if (a[i][3]) {
			for (int j = 0; j < 3; j++) {
				if (a[i][j]) {
					cout << "YES"; return 0;
				}
			}
		}
		if (a[i][0] && a[(i + 3) % 4][3]) {
			cout << "YES"; return 0;
		}
		if (a[i][1] && a[(i + 2) % 4][3]) {
			cout << "YES"; return 0;
		}
		if (a[i][2] && a[(i + 1) % 4][3]) {
			cout << "YES"; return 0;
		}
	}
	cout << "NO";

	return 0;
}