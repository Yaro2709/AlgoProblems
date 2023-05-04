#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int s;
	cin >> s;

	int x[1000];
	for (int i = 0; i < s; i++) {
		cin >> x[i];
	}

	int f = 0;
	for (int i = 0; i < s; i++) {
		if (x[i] == 1) {
			f++;
		}
	}

	cout << f << endl;
	for (int j = 1; j < s; j++) {
		if (x[j] == 1) {
			cout << x[j - 1] << " ";
		}
	}
	cout << x[s - 1] << endl;

	return 0;
}