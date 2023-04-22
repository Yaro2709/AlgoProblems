#include <iostream>
#include <set>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		set<int> s;
		int a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (s.count(a)) {
				a++;
			}
			s.insert(a);
		}

		cout << s.size() << endl;
	}

	return 0;
}