#include <iostream>

using namespace std;

void proc() 
{
	int n;
	cin >> n;

	int r = 0;
	int a;
	cin >> a;
	for (int i = 1; i < n; i++) {
		int b;
		cin >> b;
		if ((a ^ b) & 1);
		else r++;
		a = b;
	}

	cout << r << endl;
}

int main() 
{
	int t;
	cin >> t;

	while (t--) proc();

	return 0;
}