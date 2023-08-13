#include <iostream>

using namespace std;

const int N = 2e5 + 10;
int a[N];

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        for (int i = 0; i < n; i++)cin >> a[i];
        int ans = 0;
        if (n == 1) { cout << ans << endl; continue; }
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i - 1] - a[i]);
            ans = max(ans, a[i] - a[0]);
            ans = max(ans, a[n - 1] - a[i]);
        }
        cout << ans << endl;
    }

    return 0;
}