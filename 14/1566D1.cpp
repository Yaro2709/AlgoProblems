#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int>v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 1; i < m; i++) {
        int val = v[i];
        int temp = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (v[j] < v[i]) {
                temp++;
            }
        }
        ans += temp;

    }
    cout << ans << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}