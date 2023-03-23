#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = min(a, b);

    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans = ans * i;
    }

    cout << ans << endl;

    return 0;
}