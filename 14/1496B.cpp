#include<iostream>
#include<set>

using namespace std;

int main() 
{
	int t; 
	cin >> t;
	while (t--) {
		int n, k; 
		cin >> n >> k;
		set<int> s;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			s.insert(x);
		}

		int mex = -1, max;
		max = *s.rbegin();
		int i = 0;
		for (int x : s) {
			if (x != i) {
				mex = i;
			}
			else {
				i++;
			}
		}
		if (mex == -1) {
			mex = max + 1;
		}
		if (mex > max) {
			cout << s.size() + k << endl;
		}
		else {
			int ans = s.size();
			if (k > 0 and s.count((mex + max + 1) / 2) == 0) {
				ans += 1;
			}
			cout << ans << endl;
		}
	}

	return 0;
}