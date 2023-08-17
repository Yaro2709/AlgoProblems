#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long int x, y, z;
	cin >> x >> y >> z;
	cout << 4 * (sqrt((x * z) / y) + sqrt((y * x) / z) + sqrt((z * y) / x));

	return 0;
}