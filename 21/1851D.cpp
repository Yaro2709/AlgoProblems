#include<iostream>

using namespace std;

using ll = long long;

ll a[200007];
bool vis[200007];

bool solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) vis[i] = 0;
    for (int i = 1; i <= n - 1; i++) cin >> a[i];
    ll bad = 0;
    for (int i = 1; i <= n - 1; i++) {
        ll d = a[i] - a[i - 1];
        if (d > n || vis[d]) {
            if (bad) return false;
            bad = d;
        }
        else vis[d] = 1;
    }
    if (bad) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) sum += i;
        }
        if (sum != bad) return false;
    }
    cout << "YES" << '\n';

    return true;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        if (!solve()) cout << "NO" << '\n';
    }
    return 0;
}