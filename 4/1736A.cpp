#include <iostream>

using namespace std;

const int N = 1e5 + 5;

int a[N], b[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0, na = 0, nb = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        for (int i = 1; i <= n; i++) {
            if (a[i] != b[i]) cnt++;
            if (a[i]) na++;
            if (b[i]) nb++;
        }
        int ans = min(cnt, abs(na - nb) + 1);
        cout << ans << endl;
    }

    return 0;
}