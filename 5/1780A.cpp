#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		vector<int> even, odd;
		for (int i = 0; i < n; i++)
		{
			if (a[i] & 1) {
				odd.push_back(i + 1);
			}
			else {
				even.push_back(i + 1);
			}
		}

		if (odd.size() == 0) {
			cout << "NO\n";
		}
		else if (n == 3 && odd.size() == 2) {
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
			if (odd.size() > 2) {
				cout << odd[0] << " " << odd[1] << " " << odd[2] << endl;
			}
			else {
				cout << odd[0] << " " << even[0] << " " << even[1] << endl;
			}
		}

		delete[] a;
	}

	return 0;
}