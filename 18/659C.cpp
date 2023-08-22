#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	map<int, int> m;
	m.clear();
	int temp = 0;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		m[temp]++;
	}
	vector<int> v;
	v.clear();
	for (int i = 1; i < 1000000000 && k>0; i++) {
		if (m[i] == 1) {
			continue;
		}
		if (k >= i) {
			v.push_back(i);
			k -= i;
		}
		else {
			break;
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	return 0;
}