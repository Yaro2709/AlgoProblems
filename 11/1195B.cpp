#include <iostream>
#include <math.h>

using namespace std;

#define ll long long int

int main()
{
    ll n, k;
    cin >> n >> k;
    ll n1 = n;
    n = 2 * (n + k) + 1;
    ll p = sqrt(n) - 1;
    cout << n1 - p;
    return 0;
}