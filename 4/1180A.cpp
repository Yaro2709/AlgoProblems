#include <iostream>

using namespace std;

int main() {
	int n; 
	cin >> n;
	
	int ans = 2 * n * n - (2 * n - 1);
	
	cout << ans << endl;

	return 0;
}