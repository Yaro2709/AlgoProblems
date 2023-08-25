#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n); for (int i = 0; i < n; ++i) cin >> arr[i];
    long long int sum = 0; for (int num : arr) sum += num;
    if (sum == 0) {
        cout << 0 << '\n';
        return;
    }
    long long int md = 0; for (int num : arr) md = max(md, 2 * num - sum);
    cout << max(md, 1LL) << '\n';
}

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; ++i) solve();

    return 0;
}