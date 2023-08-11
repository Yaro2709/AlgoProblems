#include<iostream>

using namespace std;

int main() {
	int h, w, w1, w2, h1, h2, i;
	cin >> w >> h >> w1 >> h1 >> w2 >> h2;
	i = h;
	for (; i > 0; i--) {
		if (i == h1) {
			w = w - w1;
		}

		if (i == h2) {
			w = w - w2;
		}

		w = w + i;
		if (w <= 0) {
			w = 0;
		}
	}

	cout << w;

	return 0;
}