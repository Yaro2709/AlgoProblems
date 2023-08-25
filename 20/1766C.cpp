#include<iostream>

using namespace std;

const int N = 1e6 + 5;

int n;
char a[2][N];

void inp()
{
    cin >> n;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
}

bool check(int row)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[row][i] != 'B')
            return false;
        if (a[row ^ 1][i] == 'B')
            row ^= 1;
    }
    return true;
}

void process()
{
    if (check(0) || check(1))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inp();
        process();
    }
    return 0;
}