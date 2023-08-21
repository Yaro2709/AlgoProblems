#include<iostream>

using namespace std;

int a[100001];

int main()
{
    int n, k, mx = 0, ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
    {
        bool x;
        cin >> x;
        if (x) { ans += a[i]; a[i] = 0; }
        if (i > 0) a[i] += a[i - 1];
        if (i - k < 0) mx = max(mx, a[i]);
        else mx = max(mx, a[i] - a[i - k]);
    }
    cout << mx + ans;

    return 0;
}