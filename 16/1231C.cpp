#include<iostream>

using namespace std;

int main()
{
    int n, m, s = 0;
    cin >> n >> m;
    bool flag = true;
    int** a = new int* [n]; 
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (a[i][j] == 0)
            {
                a[i][j] = min(a[i][j + 1], a[i + 1][j]) - 1;
            }
            s += a[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (a[i][j] >= min(a[i][j + 1], a[i + 1][j]))
            {
                flag = false;
            }

        }
    }
    for (int i = 0; i < n - 1; i++)
        if (a[i][m - 1] >= a[i + 1][m - 1])
            flag = false;
    for (int j = 0; j < m - 1; j++)
        if (a[n - 1][j] >= a[n - 1][j + 1])
            flag = false;
    if (flag)
        cout << s;
    else
        cout << -1;

    for (int i = 0; i < n; i++)
    {
        delete[] a[i]; 
    }
    delete[] a;

    return 0;
}