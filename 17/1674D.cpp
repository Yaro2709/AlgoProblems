#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long int

void sloth() {
    ll n; cin >> n;
    vector<ll> v(n), o, e;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i -= 2) {
        if (i >= 1 && v[i] < v[i - 1]) {
            swap(v[i], v[i - 1]);
        }
    }
    bool ok = is_sorted(v.begin(), v.end());
    cout << (ok ? "YES\n" : "NO\n");
}

int main() {
    int t; cin >> t;
    while (t--) {
        sloth();
    }

    return 0;
}