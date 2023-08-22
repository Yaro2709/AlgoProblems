#include<iostream>

using namespace std;

int main()
{
    int n, a[1001], t[1001], i, b = 1, k = 0, r = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        t[i] = 0;
    }
    for (i = 0; k < n; i += b)
    {
        if ((k >= a[i]) && (t[i] == 0))
        {
            k++;
            t[i] = 1;
            if (k == n) { cout << r; return 0; }
        }
        if (i + 1 == n) { b = -1; r++; }
        if ((i == 0) && (b == -1)) { b = 1; r++; }
    }
    cout << r - 1;
    return 0;
}