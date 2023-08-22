#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long int

int main()
{
	ll len;
	cin >> len;
	string s, t;
	cin >> s >> t;
	string a, b; a = s; b = t;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	if (a != b) {
		cout << "-1" << endl;
	}
	else {
		vector<ll>  v;
		for (ll i = 0; i < len; i++) {
			if (s[i] != t[i]) {
				for (ll j = i + 1; j < len; j++) {
					if (s[j] == t[i]) {
						ll index = j;
						while (index != i) {
							v.push_back(index);
							swap(s[index], s[index - 1]);
							index--;
						}
						break;
					}
				}
			}
		}

		ll size = v.size();
		cout << size << endl;
		for (ll i = 0; i < size; i++) cout << v[i] << " ";
	}

	return 0;
}