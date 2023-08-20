#include<iostream>

using namespace std;

int n, m;
char arr[101][101];

int check(int x, int y) {
	if (x < n && x >= 0 && y < m && y >= 0 && arr[x][y] == '*')
		return 1;
	return 0;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	int x, y, count, flag = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == '.')
				arr[i][j] = '0';
			if (arr[i][j] == '*')
				continue;
			count = 0;
			if (check(i - 1, j - 1))
				count++;
			if (check(i - 1, j))
				count++;
			if (check(i - 1, j + 1))
				count++;
			if (check(i, j - 1))
				count++;
			if (check(i, j + 1))
				count++;
			if (check(i + 1, j - 1))
				count++;
			if (check(i + 1, j))
				count++;
			if (check(i + 1, j + 1))
				count++;
			if (((int)arr[i][j] - '0') != count)
				flag = 0;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}