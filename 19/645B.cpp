#include<iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n;
    cin >> k;
    if (n <= 1) cout << '0';
    else if (k >= n / 2) cout << (n * n - n) / 2;
    else
    {
        long long res = 0;
        for (long long i = 1; i <= k * 2; i += 2)
            res += 2 * (n - i) - 1;
        cout << res;
    }
    return 0;
}