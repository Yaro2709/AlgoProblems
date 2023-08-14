#include <iostream>

using namespace std;

bool has[1010];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        has[t] = 1;
    }
    for (int i = 1; i <= 1000; i++)
    {
        if (has[i - 1] && has[i] && has[i + 1])
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}