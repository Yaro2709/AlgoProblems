#include<iostream>
#include<string.h>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int mp[26];
        memset(mp, 0, sizeof(mp));
        int m; cin >> m;
        for (int i = 0; i < m; i++) {
            char ch; cin >> ch;
            int x = (int)ch - 97;
            mp[x] = 1;
        }

        int ans = 0;
        int cur = 0;
        for (int i = 0; i < n; i++) {
            if (mp[(int)s[i] - 97]) {
                ans = max(ans, i - 1 - cur + 1);
                cur = i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}