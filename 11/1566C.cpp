#include <iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if ((s1[i] - '0') + (s2[i] - '0') == 1)
                ans += 2;
            else {
                if ((s1[i] - '0') + (s2[i] - '0') == 0 && (s1[i + 1] - '0') + (s2[i + 1] - '0') == 2 || (s1[i] - '0') + (s2[i] - '0') == 2 && (s1[i + 1] - '0') + (s2[i + 1] - '0') == 0) {
                    ans += 2;
                    i += 1;
                }
                else if ((s1[i] - '0') + (s2[i] - '0') == 0)
                    ans += 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}