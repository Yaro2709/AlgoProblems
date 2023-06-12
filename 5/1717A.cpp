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
        long long ans = 2 * (n / 3 + n / 2) + n;
        cout << ans << endl;
    }

    return 0;
}