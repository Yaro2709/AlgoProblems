#include<iostream>

using namespace std;

#define N 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, ans = 0, p = 1;
        cin >> n >> k;
        while (k)
        {
            if (k & 1)ans = (ans + p) % N;
            p = (p * n) % N;
            k >>= 1;
        }
        cout << ans << endl;
    }

    return 0;
}