#include <iostream>

using namespace std;

int main() {
	int row, col;
	cin >> row >> col;

	char arr[200][200];
	int r, c;

	int count = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		count = 0;
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == '*')
				count++;
		}

		if (count == 1) {
			r = i;
			break;
		}
	}

	for (int i = 0; i < col; i++) {
		count = 0;
		for (int j = 0; j < row; j++) {
			if (arr[j][i] == '*')
				count++;
		}

		if (count == 1) {
			c = i;
			break;
		}
	}

	cout << r + 1 << " " << c + 1 << endl;

	return 0;
}