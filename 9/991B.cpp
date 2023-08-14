#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a[110], s = 0, l;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a + n);
    if (n & 1) l = 9 * (n - 1) / 2 + 5;
    else l = 9 * n / 2;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s >= l) break;
        s += (5 - a[i]);
        ++cnt;
    }
    cout << cnt << endl;

    return 0;
}