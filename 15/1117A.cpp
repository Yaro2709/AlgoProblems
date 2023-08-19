#include<iostream>

using namespace std;

const int N = 1e5 + 4;
int V[N];

int main() {
	long int n, i, max = 0, cont = 0, maxcont = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> V[i];
		max = max > V[i] ? max : V[i];
	}

	for (i = 0; i < n; i++) {
		if (V[i] == max) {
			cont++;
			maxcont = maxcont > cont ? maxcont : cont;
		}
		else {
			cont = 0;
		}
	}

	cout << maxcont << endl;

	return 0;
}