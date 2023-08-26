#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        char x;
        int ans = 1e9;
        for (x = 'a'; x <= 'z'; x++) {
            int a = 0, b = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == x) {
                    a = 0;
                }
                else {
                    a++;
                }
                b = max(a, b);
            }
            int c = 0;
            while (b > 0) {
                c++;
                b = b / 2;
            }
            ans = min(ans, c);
        }
        cout << ans << "\n";

    }
    return 0;
}