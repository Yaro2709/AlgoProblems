#include <iostream>

using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        long long int sum = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> x, sum += x;
        }
        sum %= n;
        cout << sum * (n - sum) << endl;
    }

    return 0;
}