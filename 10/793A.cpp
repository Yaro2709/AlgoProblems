#include <iostream>

using namespace std;

const int maxn = 1e5 + 6;
int a[maxn];

int main() {
    int n, k;
    while (cin >> n >> k) {
        int m = 1e9 + 10;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m = min(m, a[i]);
        }
        long long ans = 0, f = 0;
        for (int i = 0; i < n; i++) {
            long long tmp = a[i] - m;
            if (tmp % k != 0) {
                f = 1;
                break;
            }
            else ans += tmp / k;
        }
        if (f == 1) cout << "-1" << endl;
        else cout << ans << endl;
    }

    return 0;
}