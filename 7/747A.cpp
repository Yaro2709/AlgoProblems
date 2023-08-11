#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n; 
	cin >> n;
	for (int i = sqrt(n); i > 0; i--)
	{
		if (n % i == 0)
		{
			cout << i << " " << n / i << endl;
			return 0;
		}
	}

	return 0;
}