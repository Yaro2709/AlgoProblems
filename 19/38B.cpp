#include<iostream>

using namespace std;

int main() {
	int n;
	string a, b;
	cin >> a >> b;
	int x2 = a[0] - 'a' + 1;
	int y2 = a[1] - '0';
	int x1 = b[0] - 'a' + 1;
	int y1 = b[1] - '0';
	int ans = 0;
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			if ((i == x1 && j == y1) || (i == x2 && j == y2)) continue;
			if (i == x1 + 1 && j == y1 + 2) continue;
			if (i == x1 + 2 && j == y1 + 1) continue;
			if (i == x1 - 1 && j == y1 + 2) continue;
			if (i == x2 + 2 && j == y2 - 1) continue;
			if (i == x1 + 1 && j == y1 - 2) continue;
			if (i == x1 - 2 && j == y1 + 1) continue;
			if (i == x1 + 2 && j == y1 - 1) continue;
			if (i == x1 - 1 && j == y1 - 2) continue;
			if (i == x1 - 2 && j == y1 - 1) continue;
			if (i == x2 || j == y2) continue;
			if (i == x2 + 1 && j == y2 + 2) continue;
			if (i == x2 + 2 && j == y2 + 1) continue;
			if (i == x2 - 1 && j == y2 + 2) continue;
			if (i == x2 - 2 && j == y2 - 1) continue;
			if (i == x2 + 1 && j == y2 - 2) continue;
			if (i == x2 - 2 && j == y2 + 1) continue;
			if (i == x2 - 1 && j == y2 - 2) continue;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}