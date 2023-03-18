#include<iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int j = 0; j < t; j++) {
		int a;
		cin >> a;

		int b;
		cin >> b;

		int c = a * b;

		if (c % 2 == 0) {
			cout << (c / 2) << endl;
		}
		else {
			cout << ((c/2) + 1) << endl;
		}
	}

	return 0;
}