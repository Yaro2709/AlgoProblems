#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, m, k, a[51];
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    int s = 0, i;
    for (i = 0; i < n; i++) {
        if (m - s <= k - i) {
            cout << i;
            return 0;
        }
        s += a[i];
    }
    if (m - s <= k - i) {
        cout << i;
        return 0;
    }
    cout << "-1";

    return 0;
}