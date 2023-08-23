#include<iostream>

using namespace std;

int main()
{
    long long n, m, i, a[10010], l, x, r, count;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    while (m--)
    {
        cin >> l >> r >> x;
        count = x - l;
        for (i = l; i <= r; i++)
            if (a[i] < a[x])
                count--;
        if (count == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}