#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
	int n, x;
	cin >> n >> x;
	int sum = 0;
	int f;
	for (int i = 0; i < n; i++)
	{
		cin >> f;
		sum += f;
	}
	sum = abs(sum);
	cout << sum / x + (sum % x ? 1 : 0) << endl;
    
	return 0;
}