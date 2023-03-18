#include<iostream>
#include <algorithm>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	while (n--) {
		int x; 
		cin >> x;
		int y; 
		cin >> y;
		int z;
		cin >> z;

		int v[3] = { x,y,z };
		sort(v, v + 3);

		if (v[0] == v[2]) {
			cout << "YES" << '\n';
			cout << v[0] << " " << v[0] << " " << v[0] << '\n';
		}
		else if (v[1] == v[2]) {
			cout << "YES" << '\n';
			cout << v[1] << " " << v[0] << " " << v[0] << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}

	return 0;
}