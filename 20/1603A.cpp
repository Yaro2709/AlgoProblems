#include<iostream>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long *a = new long long[n + 2];
        for (int i = 2; i < n + 2; i++)cin >> a[i];
        bool flag = true;
        long long f = 2;
        for (long long i = 2; i < min(n + 2, 24ll); i++)
        {
            if (a[i] % f == 0)flag = false;
            long long g = gcd(f, (i + 1ll));
            f = i * f + f;
            f = f / g;
        }
        if (flag)cout << "Yes\n";
        else cout << "No\n";

        delete[] a;
    }

    return 0;
}