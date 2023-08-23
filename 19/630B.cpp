#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
	long double n, t;
	cin >> n >> t;
	cout << fixed << setprecision(10) << pow(1.000000011, t) * n << endl;

	return 0;
}