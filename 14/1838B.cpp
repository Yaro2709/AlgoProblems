#include<iostream>

using namespace std;

const int N = 1e6 + 10;
int a[N];

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[x] = i;
    }

    if (a[n] > max(a[1], a[2]))cout << a[n] << " " << max(a[1], a[2]) << endl;
    else if (a[n] < min(a[1], a[2]))cout << a[n] << " " << min(a[1], a[2]) << endl;
    else cout << a[1] << " " << a[2] << endl;

}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)solve();

    return 0;
}