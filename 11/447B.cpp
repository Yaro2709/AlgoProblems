#include <iostream>

using namespace std;

int main() {
    string s; 
    int k, v[26], ans = 0;
    cin >> s >> k;
    int x = 0, n = s.length();
    for (int i = 0; i < 26; i++)cin >> v[i], x = max(x, v[i]);
    for (int i = 0; i < n; i++) ans += (i + 1) * (v[s[i] - 'a']);
    for (int i = 1; i <= k; i++) ans += (i + n) * x;
    return cout << ans << "\n", 0;
}