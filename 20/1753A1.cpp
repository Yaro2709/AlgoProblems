#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		if (n % 2)cout << "-1\n";
		else
		{
			vector<int> x, y;
			for (int i = 0; i < n; i += 2)
			{
				if (v[i] == v[i + 1])
				{
					x.push_back(i + 1);
					y.push_back(i + 2);
				}
				else
				{
					x.push_back(i + 1);
					y.push_back(i + 1);
					x.push_back(i + 2);
					y.push_back(i + 2);

				}
			}
			cout << x.size() << "\n";
			for (int i = 0; i < x.size(); i++)cout << x[i] << " " << y[i] << "\n";
		}
	}
	return 0;
}