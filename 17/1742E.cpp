#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (; t > 0; t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), b(n);
        cin >> a[0];
        b[0] = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            b[i] = b[i - 1] + a[i];
            a[i] = max(a[i], a[i - 1]);
        }
        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;
            x = upper_bound(a.begin(), a.end(), x) - a.begin() - 1;
            if (x < 0) cout << 0 << ' ';
            else cout << b[x] << ' ';
        }
        cout << '\n';
    }
    return 0;
}