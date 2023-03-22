#include <iostream>

using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;

    ll n, m, x;
    while (t--)
    {
        cin >> n >> m >> x;
        ll r = (x - 1) % n;
        ll c = (x - 1) / n;
        cout << ((r * m) + c + 1) << endl;
    }

    return 0;
}