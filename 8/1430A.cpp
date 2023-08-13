#include <iostream>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll rem = n % 3;
        if (rem == 0) cout << n / 3 << " 0 0\n";
        else if (rem == 1 && n >= 7) cout << (n - 7) / 3 << " 0 1\n";
        else if (rem == 2 && n >= 5) cout << (n - 5) / 3 << " 1 0\n";
        else cout << "-1\n";
    }

    return 0;
}