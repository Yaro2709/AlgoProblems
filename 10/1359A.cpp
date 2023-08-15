#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t)
    {
        t--;
        long long int n, m, k;
        cin >> n >> m >> k;
        long long int x = n / k;
        if (k == 1)
            cout << m << '\n';
        else
            cout << min(x, m) - (m - min(x, m) + k - 2) / (k - 1) << "\n";
    }

    return 0;
}