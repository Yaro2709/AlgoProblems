#include<iostream>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll x, s = 0;
        cin >> x;
        for (ll i = 1; i * (i + 1) / 2 <= x; i = 2 * i + 1) {
            x -= i * (i + 1) / 2;
            s++;
        }
        cout << s << endl;
    }
    return 0;
}