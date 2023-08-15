#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, val = 0, cat = 0;
        cin >> n >> k;

        ll *a = new ll[k];
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        sort(a, a + k);

        ll i = k - 1;
        while (a[i] > cat && i >= 0)
        {
            ll r = n - a[i];
            cat += r;
            val++;
            i--;
        }
        cout << val << "\n";

        delete[] a;
    }

    return 0;
}