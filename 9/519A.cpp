#include <iostream>

using namespace std;

int main() {
	int x = 0, w = 0;

	for (int i = 0; i < 64; i++) {
		char c;
		cin >> c;
		if (c == 'q')
			x += 9;
		if (c == 'r')
			x += 5;
		if (c == 'b')
			x += 3;
		if (c == 'n')
			x += 3;
		if (c == 'p')
			x += 1;

		if (c == 'Q')
			w += 9;
		if (c == 'R')
			w += 5;
		if (c == 'B')
			w += 3;
		if (c == 'N')
			w += 3;
		if (c == 'P')
			w += 1;

	}

	if (w > x)
		cout << "White";
	if (x > w)
		cout << "Black";
	if (x == w)
		cout << "Draw";

	return 0;
}