#include<iostream>

using namespace std;

int main()
{
    long long int n, m, i = 1, a = 0;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        a += (m + i % 5) / 5;
    }
    cout << a;

    return 0;
}