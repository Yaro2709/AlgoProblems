#include <iostream>

using namespace std;

int main()
{
    long long int i, j, k = 0, l, m, n, sum = 0, div = 0, time, brk, t;
    cin >> n >> time >> brk;
    for (i = 0; i < n; i++)
    {
        cin >> t >> l;
        div = (t - k) / brk;
        k = t + l;
        sum += div;
    }
    div = (time - k) / brk;

    cout << sum + div;

    return 0;
}