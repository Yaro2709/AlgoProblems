#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[10000];
        for (int i = 0; i < n; i++)cin >> a[i];
        long long int cost = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            a[i] += a[i + 1];
            cost = max(cost, a[i]);
        }
        cout << cost << endl;
    }

    return 0;
}