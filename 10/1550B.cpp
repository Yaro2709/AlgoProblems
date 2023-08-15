#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        int ans = n * a;
        if (b >= 0) ans += n * b;
        else {
            string ns = "";
            for (int i = 0; i < n; i++) {
                if (i == 0 || s[i - 1] != s[i]) ns += s[i];
            }
            ans += b * (1 + min(count(ns.begin(), ns.end(), '1'), count(ns.begin(), ns.end(), '0')));
        }
        cout << ans << endl;
    }

    return 0;
}