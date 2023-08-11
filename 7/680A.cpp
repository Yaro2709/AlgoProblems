#include<iostream>

using namespace std;

int d[200];

int main() {
	int s = 0;
	for (int i = 0, t; i < 5; ++i) {
		cin >> t;
		d[t]++;
		s += t;
	}

	int r = 0;
	for (int i = 1; i <= 100; ++i)
		if (d[i] > 1) r = max(r, min(3, d[i]) * i);

	cout << s - r << endl;

	return 0;
}