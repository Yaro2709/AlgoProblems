#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n, m, x, y;
	cin >> n >> m;
	set <int> Light;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		for (int i = 0; i < x; i++)
		{
			cin >> y;
			Light.insert(y);
		}
	}

	if (Light.size() == m) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}