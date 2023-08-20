#include<iostream>

using namespace std;

const int N = 1e5 + 123;

int long long a[N], p[N];

int main() {
    int long long n;
    cin >> n;
    p[0] = 1;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int l = 0, r = n, ans = 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (x >= p[mid]) {
                l = mid + 1;
                ans = mid;
            }
            else {
                r = mid - 1;
            }
        }

        cout << ans + 1 << endl;
    }

    return 0;
}