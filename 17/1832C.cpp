#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)cin >> a[i];
        int f = 0;
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                if (f != 1) ans++;
                f = 1;
            }
            else if (a[i] < a[i + 1]) {
                if (f != -1) ans++;
                f = -1;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}