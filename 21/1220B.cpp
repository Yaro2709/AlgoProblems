#include<iostream>
#include<math.h>

using namespace std;

#define ll long long int

int main() {
	ll n; 
	cin >> n;
	ll m[1000][1000];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> m[i][j];
	}
	ll a1 = sqrt((m[0][1] * m[0][2]) / m[1][2]);
	cout << a1 << " ";
	for (int i = 1; i < n; i++) {
		cout << m[i][0] / a1 << " ";
	}

	return 0;
}