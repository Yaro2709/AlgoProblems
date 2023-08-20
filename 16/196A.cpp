#include<iostream>

using namespace std;

int main() {
    string s, ans;
    cin >> s;
    int mx = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] < mx) continue;
        mx = s[i];
        ans += s[i];
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}