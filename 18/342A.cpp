#include<iostream>

using namespace std;

int f[9];

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        f[x]++;
    }
    if (f[7] != 0 || f[5] != 0 || f[1] != n / 3 || f[4] > f[2] || f[3] > f[6] || f[2] - f[4] != f[6] - f[3])
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < f[4]; i++)
    {
        cout << 1 << " " << 2 << " " << 4 << endl;
    }
    for (int i = 0; i < f[2] - f[4]; i++)
    {
        cout << 1 << " " << 2 << " " << 6 << endl;
    }for (int i = 0; i < f[3]; i++)
    {
        cout << 1 << " " << 3 << " " << 6 << endl;
    }

    return 0;
}