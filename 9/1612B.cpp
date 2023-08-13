#include<iostream>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (a <= n / 2 && b >= n / 2 + 1 || b == n / 2 && a == n / 2 + 1)
        {
            cout << a << " ";
            for (ll i = n; i > 0; i--)
            {
                if (i != a && i != b)
                {
                    cout << i << " ";
                }
            }
            cout << b << " " << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}