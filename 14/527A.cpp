#include<iostream>

using namespace std;

typedef long long ll;

ll a, b;

ll gcd(ll a, ll b)
{
    if (!b)
        return 0;
    return gcd(b, a % b) + a / b;
}

int main()
{
    cin >> a >> b;
    cout << gcd(a, b);

    return 0;
}