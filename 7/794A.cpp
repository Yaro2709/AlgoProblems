#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c, n, x, kq;
    cin >> a >> b >> c >> n;
    for (long long int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == a) kq++;
        else if (x > b && x < c) kq++;
    }
    cout << kq;

    return 0;
}