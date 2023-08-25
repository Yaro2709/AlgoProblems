#include<iostream>

using namespace std;

#define ll long long

int main()
{
    ll n, d; 
    cin >> n >> d;
    ll* a = new ll[n] ;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }ll ans = 0; ll m; int k = 0;
    for (ll j = 0; j < n - 2; j++)
    {
        while (k < n && a[k] - a[j] <= d)
        {
            k++;
        }
        ans += ((k - j - 1) * (k - j - 2)) / 2;
    }
    cout << ans;

    delete[] a;

    return 0;
}