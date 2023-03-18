#include<iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;

	for (int j = 0; j < t; j++) {
		int n;
		cin >> n;

		int countOdd = 0;
		for (int i = 0; i < 2 * n; i++) {
			int k;
			cin >> k;
			if (k % 2 != 0) {
				countOdd++;
			}
		}

		if (countOdd == n) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}

	return 0;
}