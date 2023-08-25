#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, f = 0, e = 0, h;
        cin >> n;
        ll i;
        ll k = n;
        vector<ll> v;
        for (i = 2; i < sqrt(n) + 1; i++)
        {
            f = 0;

            while (k % i == 0)
            {
                f++;
                k /= i;
            }
            if (f > e)
            {
                e = f;
                h = i;
            }
        }
        while (n % h == 0)
        {
            v.push_back(h);
            n /= h;
        }
        if (v.size() == 0)
            v.push_back(1);

        cout << v.size() << endl;
        for (i = 0; i < v.size() - 1; i++)
            cout << v[i] << " ";
        cout << v[v.size() - 1] * n << endl;
    }

    return 0;
}