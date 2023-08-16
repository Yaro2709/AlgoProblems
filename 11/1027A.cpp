#include <iostream>
#include <string.h>

using namespace std;

int am[26];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        memset(am, 0, sizeof(am));
        string s;
        cin >> n >> s;
        for (i = 0; i < n / 2; i++) {
            if (abs(s[i] - s[n - i - 1]) != 2 && s[i] != s[n - i - 1]) {
                cout << "NO" << endl;
                break;
            }
        }
        if (i == n / 2) {
            cout << "YES" << endl;
        }
    }

    return 0;
}