#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m, d; 
        cin >> n >> m >> d;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            int a; cin >> a; a--;
            p[a] = i;
        }
        int ans = 1e9;
        int prev, curr; cin >> prev; prev--;
        for (int i = 1; i < m; ++i) {
            cin >> curr; curr--;
            int x = p[prev], y = p[curr];
            if (y < x or y > x + d)
                ans = 0;
            else
                ans = min(ans, min(y - x, d >= n - 1 ? (int)1e9 : x + d + 1 - y));

            prev = curr;
        }
        cout << ans << '\n';
    }

    return 0;
}