#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long *a = new long long[n + 1];
        long long *b = new long long[m + 1]; 
        long long i, j, k, s = 0;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        for (i = 1; i <= m; i++)
            cin >> b[i];

        sort(a + 1, a + n + 1);
        sort(b + 1, b + m + 1);
        j = 1;
        for (i = n; i > 0; i--)
        {
            if (a[i] >= j)
            {
                s += b[j];
                j++;
            }
            else
                s += b[a[i]];
        }
        cout << s << "\n";

        delete[] a;
        delete[] b;
    }
    return 0;
}