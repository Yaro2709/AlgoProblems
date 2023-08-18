#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int *a = new int[m + 1];
    int *b = new int[m + 1];
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a + 1, a + m + 1);
    sort(b + 1, b + m + 1);
    int mx = 0, mn = 0, c = 1;
    for (int i = 1; i <= n; i++)
    {
        mx = mx + a[m];
        a[m] = a[m] - 1;
        sort(a + 1, a + m + 1);
        mn = mn + b[c];
        b[c] = b[c] - 1;
        if (b[c] == 0)
        {
            c++;
        }
    }
    cout << mx << " " << mn << endl;

    delete[] a;
    delete[] b;

    return 0;
}