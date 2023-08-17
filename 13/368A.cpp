#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int *a = new int[n];
    int m, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    sort(a, a + n);
    for (int i = 0; i < m && i < n; i++) {
        ans += a[i];
    }
    ans -= max(0, m - n) * d;
    cout << ans;

    delete[] a;

    return 0;
}