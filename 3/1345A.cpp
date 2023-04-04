#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		int x = min(a, b); 
		int y = max(a, b);
		if (x == 1) {
			cout << "YES" << endl;
		}
		else {
			if (y <= 2) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}

	return 0;
}