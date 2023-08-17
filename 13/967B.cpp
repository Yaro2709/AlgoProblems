#include<iostream>
#include<algorithm>

using namespace std;

void solve() {
    int n; 
    cin >> n;
    int a, b; 
    cin >> a >> b;
    int* s = new int[n];
    int fst; 
    cin >> fst;
    int sum = fst;
    for (int i = 1; i < n; i++) {
        cin >> s[i];
        sum += s[i];
    }
    sort(s + 1, s + n);
    int ans = 0;
    for (int i = n - 1; i >= 1; i--) {
        if (1ll * sum * b <= 1ll * fst * a)break;
        ans++;
        sum -= s[i];
    }
    cout << ans;

    delete[] s;
}

int main() {
    solve();
    return 0;
}