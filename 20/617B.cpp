#include<iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int res, pre;
    for (long long int i = 1; i <= n; i++)
    {
        long long int a;
        cin >> a;
        if (a == 1) res *= (i - pre), pre = i;
        if (res == 0 && a == 1) res = 1;
    }
    cout << res;

    return 0;
}