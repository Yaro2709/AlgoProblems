#include<iostream>

using namespace std;

int main()
{
    long long n, m, a, b, coun = 0;
    cin >> n >> m >> a >> b;
    if (b < m * a) {
        if (n > m) {
            long long x = n / m;
            n -= x * m;
            coun += b * x;
        }
        if (n * a < b)
            coun += n * a;
        else coun += b;
    }
    else coun = n * a;
    cout << coun;

    return 0;
}