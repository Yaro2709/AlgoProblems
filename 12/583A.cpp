#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* h = new int[n]; 
	int* v = new int[n];
	int a, b;
	for (int i = 0; i < n; i++) h[i] = v[i] = 0;
	for (int i = 0; i < n * n; i++) {
		cin >> a >> b;
		if (h[a - 1] == 0 && v[b - 1] == 0) {
			cout << i + 1 << " ";
			h[a - 1] = 1;
			v[b - 1] = 1;
		}
	}

	delete[] h;
	delete[] v;

	return 0;
}