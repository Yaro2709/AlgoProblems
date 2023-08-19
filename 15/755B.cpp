#include<iostream>
#include<set>

using namespace std;

int n, m;
set <string> dict;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n + m; ++i) {
		string t;
		cin >> t;
		dict.insert(t);
	}
	int p = n + m - dict.size();
	if (p % 2) {
		cout << (n >= m ? "YES" : "NO");
	}
	else {
		cout << (n > m ? "YES" : "NO");
	}
	
	return 0;
}