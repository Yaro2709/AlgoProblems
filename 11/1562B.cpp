#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> cnt(10);
    for (int i = 0; i < n; i++) {
        int c = s[i] - '0';
        cnt[c]++;
        if (c == 1 || (c % 2 == 0 && c != 2) || c == 9) {
            cout << 1 << '\n';
            cout << c << '\n';
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        int c = s[i] - '0';
        for (int j = i + 1; j < n; j++) {
            int num = c * 10 + s[j] - '0';
            if (num % 3 == 0 || num % 7 == 0 || num % 5 == 0 || num % 2 == 0 || (num % 11 == 0 && num != 11)) {
                cout << 2 << '\n';
                cout << num << '\n';
                return;
            }
        }
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc-- > 0) solve();

    return 0;
}