#include <iostream>
#include <math.h>

using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = sqrt(n / 2);
        ll y = sqrt(n / 4);
        if (x * x * 2 == n || y * y * 4 == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}