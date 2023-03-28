#include<iostream>
#include <vector>

using namespace std;

void solve(vector<string> s, int n, int m) {
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = 0;
            for (int k = 0; k < m; k++) {
                temp += abs(s[i][k] - s[j][k]);
            }
            ans = min(ans, temp);
        }
    }
    cout << ans << endl;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        solve(a, n, m);
    }
    return 0;
}