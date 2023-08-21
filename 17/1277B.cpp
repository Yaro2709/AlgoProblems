#include<iostream>
#include<set>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int n, i;
	while (t)
	{
		cin >> n;
		set<int> a;
		for (int i = 0; i < n; i++) {
			int elem;
			cin >> elem;
			a.insert(elem);
		}
		int result = 0;
		while (!a.empty()) {
			int m = *a.rbegin();
			a.erase(m);
			if (m % 2 == 0) {
				result++;
				a.insert(m / 2);
			}
		}
		cout << result << endl;
		t--;
	}

	return 0;
}