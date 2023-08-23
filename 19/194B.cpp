#include<iostream>

using namespace std;

#define ll long long int

long long int gcd(long long int a, long long int b)
{
    return b ? gcd(b, a % b) : a;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = (n + 1) * 2 + (n - 1) * 2;
        cout << ans / gcd(ans, n + 1) + 1 << '\n';
    }
    return 0;
}