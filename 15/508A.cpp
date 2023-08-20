#include<iostream>

using namespace std;

int a[1002][1002];

int main()
{
    int n, m, k, kk;
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++)
    {
        int ii, jj;
        cin >> ii >> jj;
        a[ii][jj] = 1;
        if (kk == 0) {
            if (a[ii][jj] && a[ii - 1][jj] && a[ii - 1][jj - 1] && a[ii][jj - 1])
                kk = i; else
                if (a[ii][jj] && a[ii + 1][jj] && a[ii + 1][jj + 1] && a[ii][jj + 1])
                    kk = i; else
                    if (a[ii][jj] && a[ii][jj - 1] && a[ii + 1][jj - 1] && a[ii + 1][jj])
                        kk = i; else
                        if (a[ii][jj] && a[ii - 1][jj] && a[ii - 1][jj + 1] && a[ii][jj + 1])
                            kk = i;
        }
    }
    cout << kk;

    return 0;
}