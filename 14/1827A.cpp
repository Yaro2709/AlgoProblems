#include<iostream>
#include<algorithm>

using namespace std;

const int maxn = 1020000;
const int mod = 1e9 + 7;

int a[maxn], b[maxn];

int main() {
    int t; cin >> t;
    int n;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        sort(b + 1, b + n + 1);
        sort(a + 1, a + n + 1);
        int j = 1, num = 0;
        int ans = 1;
        for (int i = 1; i <= n; i++) {
            while (j <= n && b[j] < a[i]) { j++; num++; }
            if (num == 0) { ans = 0; }
            else { ans = 1ll * ans * num % mod; num--; }
        }
        cout << ans << endl;
    }

    return 0;
}