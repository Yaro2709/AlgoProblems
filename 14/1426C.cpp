#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << ceil(2 * (sqrt(n) - 1)) << "\n";
	}

	return 0;
}