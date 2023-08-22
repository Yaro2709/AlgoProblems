#include<iostream>

using namespace std;

#define ll long long int

int main()
{
    ll n, i, ans = 1;
    cin >> n;
    ll *a = new ll[n + 1];
    for (i = 1; i <= n; i++)
        cin >> a[i];
    ll j = n;
    for (i = n; i >= 1; i--)
    {
        if (i < j)
            ans += 1;
        j = min(j, i - a[i]);
    }
    cout << ans;

    delete[] a;

    return 0;
}