#include<iostream>
#include<algorithm>

using namespace std;

int a[5001];

void solve() {
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    if (a[1] != 1)
        flag = false;
    for (int i = 2, s = 1; i <= n; ++i) {
        if (a[i] > s)
            flag = false;
        s += a[i];
    }
    cout << (flag ? "YES" : "NO") << endl;
}

int main() {
    int T; 
    cin >> T;
    while (T--) solve();

    return 0;
}