#include <iostream>

using namespace std;

int main() {
	long long int n;
	long long int size = 1;
	cin >> n;
	long long int temp = n;
	while (temp) {
		size *= 10;
		temp /= 10;
	}
	size /= 10;
	cout << (n / size + 1) * size - n << endl;

	return 0;
}