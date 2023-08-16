#include <iostream>

using namespace std;

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

int main()
{
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    if (x > y) swap(x, y), swap(a, b);

    cout << max(min(n - a * (x - 1) - b * (y - 1), a + b), 0);
    cout << " ";
    cout << (n <= a * x ? n / x : a + (n - a * x) / y);

    return 0;
}