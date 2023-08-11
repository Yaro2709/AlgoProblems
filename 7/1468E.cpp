#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t)
	{
		vector<int> a(4);
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		sort(a.begin(), a.end());
		cout << a[0] * a[2] << endl;
		t--;
	}
	return 0;
}