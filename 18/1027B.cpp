#include<iostream>

using namespace std;

#define ll long long int

int main()
{
    ll n, q;
    cin >> n >> q;
    ll r = (n * n + 1) / 2;
    for (int x = 0; x < q; x++)
    {
        int a, b;
        cin >> a >> b;
        ll s = (a - 1) * n + b;
        if ((a + b) % 2 == 0)
        {
            cout << (s + 1) / 2 << endl;
        }
        else
        {
            cout << (r + (s + 1) / 2) << endl;
        }
    }
    return 0;
}