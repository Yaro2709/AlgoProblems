#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 2; i < n; i++) {
		sum += i * (i + 1);

	}
	cout << sum << endl;

	return 0;
}