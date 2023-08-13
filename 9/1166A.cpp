#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    vector<int> cnt(26);
    for (int i = 0; i < n; i++) {
        cin >> s;
        cnt[s[0] - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        int a = cnt[i] / 2, b = cnt[i] - a;
        ans += a * (a - 1) / 2;
        ans += b * (b - 1) / 2;
    }
    cout << ans << endl;

    return 0;
}