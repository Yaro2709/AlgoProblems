#include <iostream>

using namespace std;

int main() 
{
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int n;
		cin >> n;
		string t;
		cin >> t;
		if (t.length() == 2 && t[0] >= t[1]) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl << "2" << endl;
			cout << t[0] << " ";
			for (int j = 1; j < n; j++) {
				cout << t[j];
			}
			cout << endl;
		}

	}

	return 0;
}