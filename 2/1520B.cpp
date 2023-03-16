#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = (s.size() - 1) * 9;
        ans += s[0] - '0' - 1;

        int p = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                if (s[i] < s[0]) {
                    p = 0;
                }
                break;
            }
        }

        cout << ans + p << endl;
    }

    return 0;
}