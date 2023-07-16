#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    int f[18];
    f[0] = f[1] = 1;
    for (int i = 2; i <= 17; i++)       f[i] = f[i - 1] + f[i - 2];
    char a[10001];
    for (int i = 1; i <= 10000; i++)    a[i] = 'o';
    for (int i = 0; i <= 17; i++)       a[f[i]] = 'O';
    for (int i = 1; i <= n; i++)        cout << a[i];

    return 0;
}