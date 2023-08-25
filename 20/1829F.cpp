#include<iostream>
#include<vector>

using namespace std;

void lcborz() {
    int n, m; cin >> n >> m;
    vector<int> deg(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b; a--; b--;
        deg[a]++;
        deg[b]++;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (deg[i] != 1) {
            cnt++;
        }
    }
    cout << cnt - 1 << ' ' << (n - cnt) / (cnt - 1) << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        lcborz();
    }

    return 0;
}