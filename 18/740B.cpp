#include<iostream>

using namespace std;

int arr[102];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int here, ans;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        here = 0;
        for (int i = l; i <= r; i++)
            here += arr[i];
        ans += max(0, here);
    }
    cout << ans << endl;
    return 0;
}