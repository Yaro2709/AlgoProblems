#include <iostream>

using namespace std;

int a[150];

void solve() 
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int cnt = 0;
    for (int i = 1; i <= k; i++) {
        if (a[i] > k) {
            cnt++;
        }
    }

    cout << cnt << endl;
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