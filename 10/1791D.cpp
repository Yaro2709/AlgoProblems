#include <iostream>
#include <map>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int now = 0;
        int ans = 0;
        map<char, int> d;
        for (auto c : s) {
            d[c]++;
            if (d[c] == 1)now++;
        }
        ans = now;
        map<char, int> dd;
        for (auto c : s) {
            dd[c]++;
            d[c]--;
            if (dd[c] == 1) now++;
            if (d[c] == 0) now--;
            ans = max(ans, now);
        }
        cout << ans << endl;
    }

    return 0;
}