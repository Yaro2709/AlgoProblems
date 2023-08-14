#include <iostream>

using namespace std;

int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    for (int i = 1; i <= min(n, k); i++)
    {
        if (!(k % i) && k / i <= n) cnt++;
    }
    cout << cnt;

    return 0;
}