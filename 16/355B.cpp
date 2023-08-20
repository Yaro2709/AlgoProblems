#include<iostream>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long n, m;
    cin >> n >> m;

    long long *arr = new long long[n];
    long long ans = 0;

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];

        ans += min(a * arr[i], b);
    }

    long long res = min(ans, c);

    long long *x = new long long[m];
    ans = 0;

    for (long long i = 0; i < m; i++)
    {
        cin >> x[i];

        ans += min(x[i] * a, b);

    }

    long long value = min(ans, c);

    cout << min(value + res, d);

    delete[] arr;
    delete[] x;
    
    return 0;
}