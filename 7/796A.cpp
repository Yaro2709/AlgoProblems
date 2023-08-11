#include<iostream>

using namespace std;

int main()
{
    int n, k, m, a[111], d = 1111;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= k && a[i] && abs(m - 1 - i) <= d)
            d = abs(m - 1 - i);
    }

    cout << d * 10 << endl;

    return 0;
}