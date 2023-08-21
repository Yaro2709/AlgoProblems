#include<iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int *a = new int[n + 7];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int mnpos = n + 1;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) { mnpos = i; break; }
	}
	for (int i = 1; i < mnpos; i++) {
		cout << i << ' ';
	}
	cout << n + 1 << ' ';
	for (int i = mnpos; i <= n; i++) {
		cout << i << ' ';
	}
	cout << endl;

	delete[] a;
}

int main() {
	int t; 
	cin >> t; 
	for (int i = 1; i <= t; i++) { 
		solve(); 
	}

	return 0;
}