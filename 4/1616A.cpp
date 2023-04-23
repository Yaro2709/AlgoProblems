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
		set<int> st;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (st.find(a) == st.end()) {
				st.insert(a);
			}
			else {
				st.insert(-a);
			}
		}

		cout << st.size() << endl;
	}

	return 0;
}