#include<iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if (n % 2 == 1) {
        cout << n / 2 << " " << n / 2 << " " << 1 << endl;
    }
    else if (n % 4 == 0) {
        cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
    }
    else {
        cout << n / 2 - 1 << " " << n / 2 - 1 << " " << 2 << endl;
    }
}
int main() 
{
    long long int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}