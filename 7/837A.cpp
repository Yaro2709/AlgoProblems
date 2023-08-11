#include<iostream>

using namespace std;

int main() {
	int n;
	string c;
	cin >> n;
	int max = 0;
	int aux = 0;
	while (cin >> c) {
		for (int i = 0; i < c.length(); ++i) {
			if (c[i] >= 65 and c[i] <= 90) ++aux;
		}
		if (aux > max) max = aux;
		aux = 0;
	}
	cout << max << endl;

	return 0;
}