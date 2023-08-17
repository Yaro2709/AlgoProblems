#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 0;
    while (k * (k + 1) / 2 <= n) k++;
    k--;
    n -= k * (k + 1) / 2;
    cout << k << '\n';
    for (int i = 0; i < k - 1; i++) cout << i + 1 << ' ';
    cout << k + n;

    return 0;
}