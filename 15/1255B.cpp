#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        if (n == 2 || m < n)
        {
            cout << "-1";
        }
        else
        {
            cout << 2 * sum << "\n";
            for (int i = 1; i < n; i++)
            {
                cout << i << " " << i + 1 << "\n";
            }
            cout << n << " 1";
        }
        cout << "\n";
    }
    return 0;
}