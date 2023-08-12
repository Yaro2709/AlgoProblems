#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int t; 
	cin >> t;
	for (int i = 1; i < t + 1; i++) {
		long long int a, b, c, d, k;
		cin >> a >> b >> c >> d;
		k = min(b, d);
		if ((a * pow(10, b - k)) > (c * pow(10, d - k)))
			cout << ">" << "\n";
		else if ((a * pow(10, b - k)) < (c * pow(10, d - k)))
			cout << "<" << "\n";
		else
			cout << "=" << "\n";
	}

	return 0;
}