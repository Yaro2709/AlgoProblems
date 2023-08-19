#include<iostream>
#include<vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < (1 << 4); ++i) {
        vector<int> bit;
        for (int x = 0; x < 4; ++x) {
            bit.push_back(1 & (i >> x));
        }
        if (bit[0] == bit[1] && bit[2] == bit[3] && bit[0] != bit[2]) {
            vector<pair<int, int>> need;
            if (a[0][1] - '0' != bit[0]) {
                need.push_back({ 1, 2 });
            }
            if (a[1][0] - '0' != bit[1]) {
                need.push_back({ 2, 1 });
            }
            if (a[n - 1][n - 2] - '0' != bit[2]) {
                need.push_back({ n, n - 1 });
            }
            if (a[n - 2][n - 1] - '0' != bit[3]) {
                need.push_back({ n - 1, n });
            }
            if (need.size() <= 2) {
                cout << need.size() << "\n";
                for (auto i : need) {
                    cout << i.first << " " << i.second << "\n";
                }
                return;
            }
        }
    }
}

int main() {
    int num;
    cin >> num;
    while (num--) {
        solve();
    }

    return 0;
}