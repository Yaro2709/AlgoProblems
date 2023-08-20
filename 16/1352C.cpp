#include<iostream>

using namespace std;

#define ll long long int

int main()
{
    ll t; cin >> t;
    while (t--)
    {
        ll n, k, b; cin >> n >> k;
        ll a = k / (n - 1);

        if (k % (n - 1) == 0)
            b = a * n - 1;
        else 
            b = a * n + k % (n - 1);

        cout << b << endl;

    }
    return 0;
}