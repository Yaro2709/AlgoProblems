#include<iostream>
#include <math.h>

using namespace std;

long double x, y, vb, vs;

long double get(long double k)
{
    long double o = k / vb + sqrtl((x - k) * ((x - k)) + (y) * (y)) / vs;
    return o;
}

int main()
{
    int n;
    cin >> n >> vb >> vs;
    long double *arr = new long double[n + 5];
    for (int i = 0; i < n; i++) cin >> arr[i];
    long double opt = 1e12;
    int ans;
    cin >> x >> y;
    for (int i = 1; i < n; i++)
    {
        if (opt >= get(arr[i]))
        {
            opt = get(arr[i]);
            ans = i + 1;
        }
    }
    cout << ans << endl;

    delete[] arr;

    return 0;
}