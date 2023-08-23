#include<iostream>

using namespace std;

int b[3000];

int main()
{
    int i, j, k, l, m, n;
    cin >> n >> m;
    char** c = new char* [n];
    for (int i = 0; i < n; i++)
    {
        c[i] = new char[m];
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == '1')   b[j]++;
        }
    for (i = 0; i < n; i++)
    {
        bool ans = true;
        for (j = 0; j < m; j++)
        {
            if (c[i][j] == '1' && b[j] <= 1)
            {
                ans = false; break;
            }
        }
        if (ans)
        {
            cout << "YES"; return 0;
        }
    }
    cout << "NO";

    for (int i = 0; i < n; i++)
    {
        delete[] c[i];
    }
    delete[] c; 

    return 0;
}