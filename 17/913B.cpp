#include <iostream>
#include <vector>

using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

const int N = 228228;
vector<int> t[N];
int n;

void read()
{
	cin >> n;
	rep(i, 1, n) { int x; cin >> x; t[x].push_back(i + 1); }
}

void solve() {
	rep(i, 1, n + 1) {
		if (t[i].size()) {
			int c = 0;
			for (int a : t[i]) if (t[a].empty()) c++;
			if (c < 3) { cout << "No" << endl; return; }
		}
	}
	cout << "Yes" << endl;
	return;
}

int main()
{
	read();
	solve();

	return 0;
}