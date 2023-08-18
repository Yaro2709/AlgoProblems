#include<iostream>
#include<vector>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll int n;
        cin >> n;
        ll int k;
        vector<ll int> v;
        vector<ll int> v1;
        vector<ll int> v2;
        for (ll int i = 0; i < n; i++) {
            cin >> k;
            v.push_back(k);
        }
        ll int c = -1, d = -1, e = 0, f = 0;
        for (ll int i = 0; i < n; i++) {
            if (v[i] != v[n - 1 - i]) { c = v[i]; d = v[n - 1 - i]; break; }
        }
        for (ll int i = 0; i < n; i++) {
            if (v[i] != c) v1.push_back(v[i]);
            if (v[i] != d) v2.push_back(v[i]);
        }
        for (ll int i = 0; i < v1.size(); i++) {
            if (v1[i] != v1[v1.size() - 1 - i]) { e++; break; }
        }
        for (ll int i = 0; i < v2.size(); i++) {
            if (v2[i] != v2[v2.size() - 1 - i]) { f++; break; }
        }
        if (e == 0 || f == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}