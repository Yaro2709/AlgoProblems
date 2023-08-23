#include<iostream>

using namespace std;

long long x[200000], nm[200000];

int main()
{   
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        long long c, t;
        cin >> c >> t;
        x[i] = x[i - 1] + (c * t);
    }
    int in = 1;
    for (int i = 1; i <= m; i++)
    {
        cin >> nm[i];
        for (int j = in; j <= n; j++)
        {
            if (nm[i] <= x[j]) { cout << j << endl; break; }
            else in++;
        }
    }

    return 0;
}