#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    long long int w, h, x, y;
    cin >> w >> h >> x >> y;
    long long int g = gcd(x, y);

    x /= g;
    y /= g;
    cout << min((w / x), (h / y)) << endl;

    return 0;
}