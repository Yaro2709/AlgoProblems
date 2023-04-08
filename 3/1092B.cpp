#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int>vec;
	for (int r = 0; r < n; ++r)
	{
		int y;
		cin >> y;
		vec.push_back(y);
	}

	sort(vec.begin(), vec.end());

	int sum = 0;
	for (int r = 0; r < n; r += 2)
	{
		sum += vec[r + 1] - vec[r];

	}

	cout << sum << endl;

	return 0;
}