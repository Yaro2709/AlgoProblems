#include <iostream>

using namespace std;

void solve() 
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
    
	for (int i = 0; i < n; ++i)
	{
		if ((i + 1) >= a[i]) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;

	delete[] a;
}

int main() 
{
	int t; 
	cin >> t; 
	while (t--) solve();

	return 0;
}