#include<iostream>

using namespace std;

#define N 500000
long long a[N], b[N], aa[N], bb[N];

int main()
{
    long long m, n, k;
    cin >> m >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        long long p, x, l;
        cin >> p >> x >> l;
        if (p == 1) { a[x] = l; aa[x] = i; }
        else { b[x] = l; bb[x] = i; }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            if (a[i] == 0 && b[j] == 0) cout << 0 << " ";
            else
                if (aa[i] > bb[j]) cout << a[i] << " ";
                else cout << b[j] << " ";
        cout << "\n";
    }

    return 0;
}