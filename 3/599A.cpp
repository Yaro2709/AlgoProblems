#include<iostream>

using namespace std;

int main() {
	long long int d1, d2, d3, min1;
	cin >> d1 >> d2 >> d3;
	min1 = min(d1 + d2 + d3, (2 * (d1 + d2)));
	min1 = min(min1, (2 * (d1 + d3)));
	cout << min(min1, (2 * (d2 + d3))) << endl;

	return 0;
}