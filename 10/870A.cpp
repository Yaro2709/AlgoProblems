#include <iostream>
#include <algorithm>

using namespace std;

int a[1000], b[1000];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + m);
    sort(b, b + n);
    for (int j = 0; j < max(n, m); j++)
    {
        for (int i = 0; i < max(m, n); i++)
            if (a[j] == b[i])
            {
                cout << a[j];
                return 0;
            }
    }
    if (a[0] < b[0])
    {
        cout << a[0] << b[0];
    }
    else
    {
        cout << b[0] << a[0];
    }

    return 0;
}