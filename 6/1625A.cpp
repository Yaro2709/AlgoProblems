#include <iostream>

using namespace std;

const int N = 1000;
int s[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i += 1) {
            cin >> s[i];
        }
        int ans = 0;
        for (int i = 0; i < m; i += 1) {
            int ss = 0;
            for (int j = 1; j <= n; j += 1) {
                ss += (s[j] & (1 << i)) ? 1 : 0;
            }
            if (ss > n / 2) {
                ans += (1 << i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}