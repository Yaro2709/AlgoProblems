#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        if (s[0] == s[1] && s[0] == '0') {
            ans += 2;
        }

        for (int i = 1; i < (n - 1); i++) {
            if (s[i] == '0' && s[i + 1] == '0')
                ans += 2;
            if (s[i] == '1' && s[i + 1] == '0' && s[i - 1] == '0')
                ans += 1;
        }

        cout << ans << endl;
    }
    return 0;
}