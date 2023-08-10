#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int flag = 0;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            a++;
        }
        else {
            b++;
        }
        if (b > a) {
            flag = 1;
            break;
        }
    }
    if (s[n - 1] != 'B')flag = 1;
    if (flag) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}