#include <iostream>

using namespace std;

int main() {
	long long int n, k;
	cin >> n >> k;
	long long int high = std::min(k - 1, n);
	long long int low = k - high;
	cout << ((high - low + 1) / 2 > 0 ? (high - low + 1) / 2 : 0);
	return 0;
}