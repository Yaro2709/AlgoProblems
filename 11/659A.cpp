#include <iostream>

using namespace std;

int main()
{
    int n, m, b;
    cin >> n >> m >> b;
    cout << (m + b + 200 * n - 1) % n + 1;
    return 0;
}