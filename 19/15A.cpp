#include<iostream>
#include<algorithm>

using namespace std;

double a[3002]; int ans, j;

int main()
{
    int n, t, x;
    double y;
    cin >> n >> t;
    while (n--)
    {
        cin >> x >> y;
        a[j++] = x - (y / 2);
        a[j++] = x + (y / 2);
    }
    sort(a, a + j);
    for (int i = 1; i < j; i += 2)
    {
        (a[i + 1] - a[i] == t) ? ans++ : (a[i + 1] - a[i] > t) ? ans += 2 : ans = ans;
    }
    cout << ans + 2 << endl;

    return 0;
}