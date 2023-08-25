#include<iostream>
#include<vector>
#include<set>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll int n;
        cin >> n;
        vector<ll int> v;
        set<ll int> s;
        ll int c1 = 0, c2 = 0, c3 = 0;
        for (ll int i = 0; i < n; i++) {
            ll int x;
            cin >> x;
            if (x != 0) v.push_back(x);

            if (x > 0) c1++;
            if (x < 0)c2++;
            if (x == 0 && c3 < 3) { v.push_back(x); c3++; }
            s.insert(x);
        }
        ll int check = 0;
        if (c1 >= 3 || c2 >= 3) cout << "NO" << endl;
        else {
            for (ll int i = 0; i < v.size(); i++) {
                for (ll int j = i + 1; j < v.size(); j++) {
                    for (ll int k = j + 1; k < v.size(); k++) {
                        auto it = s.find(v[i] + v[j] + v[k]);
                        if (it == s.end()) { check = 1; break; }
                    }
                }
            }
            if (check == 1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }

    return 0;
}