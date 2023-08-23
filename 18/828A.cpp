#include<iostream>

using namespace std;

int main() {
	long int a, n, deny = 0, g = 0;
	long int b;
	cin >> n >> a >> b;
	int *t = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < n; i++) {
		if (t[i] == 1 && a > 0)
			a--;
		else if (t[i] == 1 && a == 0 && b > 0)
		{
			b -= 1; g++;
		}
		else if (t[i] == 1 && a == 0 && b == 0 & g > 0)
		{
			g--;
		}
		else if (t[i] == 1 && a == 0 && b == 0 && g == 0)
			deny++;
		if (t[i] == 2 && b > 0)
			b--;
		else if (t[i] == 2 && b == 0)
			deny += 2;
	}
	cout << deny;

	delete[] t;

	return 0;
}