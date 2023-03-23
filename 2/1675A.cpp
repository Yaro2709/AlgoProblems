#include <iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		int a;
		int b;
		int c;
		int x;
		int y;

		cin >> a;
		cin >> b;
		cin >> c;
		cin >> x;
		cin >> y;
		
		int cat = 0;
		if (a >= x) {
			cat = 0;
		}
		else {
			cat = x - a;
		}

		int dog = 0;
		if (b >= y) {
			dog = 0;
		}
		else {
			dog = y - b;
		}
		
		int universal = (cat + dog) - c;

		if ((universal <= 0)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}