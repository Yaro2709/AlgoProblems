#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k;
    cin >> k;
    if (k == 0)
    {
        cout << '0' << endl;
        return 0;
    }
    int a[12];
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    sort(a, a + 12);
    int cnt = 0;
    int sum = 0;
    for (int i = 11; i >= 0; i--)
    {
        sum += a[i];
        cnt++;
        if (sum >= k)
            break;
    }
    if (sum < k)
        cout << "-1" << endl;
    else cout << cnt << endl;

    return 0;
}