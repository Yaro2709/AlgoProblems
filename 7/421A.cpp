#include <iostream>

using namespace std;

int main()
{
    int n, c, b, t;
    cin >> n >> b >> c;
    int *a = new int[n + 1];
    for (int i = 1; i <= n; i++) a[i] = 0;
    for (int i = 1; i <= b; i++)
    {
        cin >> t;
        if (a[t] == 0) a[t] = 1;
    }
    for (int i = 1; i <= c; i++)
    {
        cin >> t;
        if (a[t] == 0) a[t] = 2;
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";

    delete[] a;

    return 0;
}