#include<iostream>
#include<vector>

using namespace std;

#define ll long long int

void solve() {
    int n;
    cin >> n;
    vector<int> ans(2 * n + 1);
    vector<int> arr(2 * n + 1, 0);
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        ans[2 * i - 1] = x;
        arr[x] = 1;
    }
    for (int i = 1; i <= n; i++) {
        int j = ans[i * 2 - 1];
        while (j <= 2 * n && arr[j] == 1) {
            j++;
        }
        if (j > 2 * n) {
            cout << -1 << endl;
            return;
        }
        ans[i * 2] = j;
        arr[j] = 1;
    }
    for (int i = 1; i <= 2 * n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ll t; cin >> t;
    for (ll i = 0; i < t; i++) {
        solve();
    }

    return 0;
}