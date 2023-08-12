#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, a[10], m;
    cin >> n;
    for (i = 0; i < n; i++)cin >> a[i];
    sort(a, a + n);
    if (n & 1)m = (n - 1) / 2;
    else m = (n / 2) - 1;
    cout << a[m] << endl;
    return 0;
}