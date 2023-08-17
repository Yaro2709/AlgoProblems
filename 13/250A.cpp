#include<iostream>

using namespace std;

int main()
{
    int n, f = 1;
    int a[101], b[101];
    int ng = 0;
    cin >> n;
    for (int i = 0; i <= n; i++) b[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            ng++;
            if (ng > 2)
            {
                f++;
                ng = 1;
            }
        }
        b[f]++;
    }

    cout << f << '\n';
    for (int i = 1; i <= f; i++)
    {
        if (i > 1) cout << " ";
        cout << b[i];
    }
    cout << '\n';

    return 0;
}