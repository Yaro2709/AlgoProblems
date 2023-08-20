#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool *a = new bool[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool *b = new bool[n];
    for (int i = 0; i < n; i++)
        b[i] = a[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                b[k] = 1 - a[k];
            }
            int p = 0;
            for (int t = 0; t < n; t++)
            {
                if (b[t] == 1)
                    p++;
            }
            ans = max(ans, p);
            for (int t = 0; t < n; t++)
                b[t] = a[t];
        }
    }
    cout << ans << endl;

    delete[] a;
    delete[] b;

    return 0;
}