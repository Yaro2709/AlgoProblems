#include <iostream>
#include <cstring>

using namespace std;

int a[100010], b[100010];

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        int maxn = 0, maxn1 = 0;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] += a[i - 1];
            maxn = max(maxn, a[i]);
        }
        cin >> m;
        for (int i = 1; i <= m; i++) {
            cin >> b[i];
            b[i] += b[i - 1];
            maxn1 = max(maxn1, b[i]);
        }
        cout << maxn + maxn1 << endl;
    }
    return 0;
}