#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n; int count = 0; cin >> n; int k;
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			k = pow(i * i + j * j, 0.5);
			if (k <= n && k * k == (i * i + j * j))
				count++;
		}
	}
	cout << count;
	return 0;
}