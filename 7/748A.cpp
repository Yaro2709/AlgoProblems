#include<iostream>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    cout << (k - 1) / (2 * m) + 1 << " ";
    k -= ((k - 1) / (2 * m)) * 2 * m;
    cout << (k - 1) / 2 + 1 << " ";
    if (k % 2 == 0)
        cout << 'R';
    else
        cout << 'L';
    return 0;
}