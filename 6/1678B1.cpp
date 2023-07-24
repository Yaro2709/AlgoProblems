#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    string str; cin >> str;
    bool fl = 0;
    int ans = 0;
    int p = 0;
    for (int i = 1; i < n; ++i) {
        if (str[i] != str[i - 1]) {
            if ((i - p) & 1) fl ^= 1, ans += fl;
            else if (fl) ans++;
            p = i;
        }
    }
    cout << ans << endl;
}

int main() {
    int t; 
    cin >> t;
    while (t--) solve();

    return 0;
}