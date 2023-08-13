#include<iostream>
#include<vector>
#include<map>

using namespace std;

void solve() {

    int n;
    cin >> n;
    vector<int>v(n);
    map<int, int>m;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]]++;
        if (m[v[i]] > max)
            max = m[v[i]];
    }
    int ans, x;
    ans = x = 0;
    while (max < n) {
        x = min(n - max, max);
        ans = ans + 1 + x;
        max += x;
    }

    cout << ans << endl;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}