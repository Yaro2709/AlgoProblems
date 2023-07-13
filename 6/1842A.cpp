#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int long long a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        int long long x; 
        cin >> x; 
        a += x;
    }
    for (int i = 0; i < m; i++) {
        int long long x; 
        cin >> x; 
        b += x;
    }
    cout << (a > b ? "Tsondu" : a == b ? "Draw" : "Tenzing") << endl;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}