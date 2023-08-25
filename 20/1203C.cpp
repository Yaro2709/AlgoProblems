#include<iostream>
#include<math.h>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    return b ? gcd(b, a % b) : a;
}

void solve()
{
    long long n, x, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x, ans = gcd(ans, x);
    int count = 0;

    for (long long i = 1; i <= sqrt(ans); i++)
    {
        if (ans % i) continue;
        if (i * i == ans) count++;
        else count += 2;
    }
    cout << count;
}

int main()
{
    int t = 1;
    while (t--) solve();

    return 0;
}