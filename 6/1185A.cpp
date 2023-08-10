#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[3], d;
    cin >> a[0] >> a[1] >> a[2] >> d;
    sort(a, a + 3);

    int ans = max(0, d - (a[1] - a[0])) + max(0, d - (a[2] - a[1]));
    cout << ans;

    return 0;
}