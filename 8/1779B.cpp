#include <iostream>

using namespace std;

void solve() {
    int n, x = 1; 
    cin >> n;
    if (n == 3) { 
        cout << "NO\n"; 
        return; 
    }
    
    cout << "YES\n";

    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            cout << x << " "; x *= (-1);
        }
    }
    else {
        int k = (n - 1) / 2;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                cout << k - 1 << " ";
            else
                cout << -k << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int t; 
    cin >> t;
    while (t--)solve();

    return 0;
}