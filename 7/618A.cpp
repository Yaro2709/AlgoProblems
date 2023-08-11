#include<iostream>
#include <vector>

using namespace std;

int main() 
{
	vector <int> vs;
	int n;
	cin >> n;
	int sum = 1;
	while (n) {
		if (n % 2 == 1) {
			vs.push_back(sum);
		}
		sum++;
		n = n / 2;
	}
	for (int i = vs.size() - 1; i >= 0; i--) {
		cout << vs[i] << " ";
	}
	cout << endl;

	return 0;
}