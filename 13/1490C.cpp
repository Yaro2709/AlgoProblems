#include<iostream>
#include<math.h>

using namespace std;

void solve() {
    long long int x; 
    cin >> x;
    for (long long int a = 1; a * a * a < x; a++) {
        long long int b = round(pow(x - a * a * a, 1.0 / 3));
        if (a * a * a + b * b * b == x) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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