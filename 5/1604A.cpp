#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int k;
            cin >> k;
            ans = max(ans, k - i - 1);
        }

        cout << ans << endl;
    }

    return 0;
}