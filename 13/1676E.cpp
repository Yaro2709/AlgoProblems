#include<iostream>
#include<algorithm>

using namespace std;

const int MAXN = 1.5e5 + 5;
int a[MAXN], sum[MAXN];
int x;

bool ch(int y) {
    return sum[y] >= x;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; ++i)cin >> a[i], a[i] = -a[i];
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; ++i) {
            sum[i] = sum[i - 1] - a[i];
        }
        while (q--) {
            cin >> x;
            int l, r;
            l = 0, r = n + 1;
            while (l < r - 1) {
                int mid = (l + r) >> 1;
                if (ch(mid))r = mid;
                else l = mid;
            }
            if (r == n + 1) {
                cout << "-1\n";
                continue;
            }
            cout << r << "\n";
        }
    }

    return 0;
}