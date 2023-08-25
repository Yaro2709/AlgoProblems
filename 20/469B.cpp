#include<iostream>
#include<vector>

using namespace std;

using pi = pair<int, int>;

int main() {
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pi> a(p), c(q);
    for (auto& nx : a) {
        cin >> nx.first >> nx.second;
    }
    for (auto& nx : c) {
        cin >> nx.first >> nx.second;
    }
    int res = 0;
    for (int i = l; i <= r; i++) {
        int x = 0, y = 0;
        while (x < p && y < q) {
            if (a[x].second < i + c[y].first) { x++; continue; }
            if (a[x].first > i + c[y].second) { y++; continue; }
            res++; break;
        }
    }
    cout << res << "\n";

    return 0;
}