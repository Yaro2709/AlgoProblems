#include<iostream>

using namespace std;

int main() {
	int n, k, s, p;
	cin >> k >> n >> s >> p;
	cout << ((((n + s - 1) / s) * k) - 1 + p) / p << endl;

	return 0;
}