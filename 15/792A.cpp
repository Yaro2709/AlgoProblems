#include<iostream>
#include<algorithm>

using namespace std;

long long int a[200005], b[200005];

int main()
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int mx = a[n - 1] - a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] < mx)
            mx = (a[i] - a[i - 1]);
    }
    int x = 0;
    for (int i = 1; i < n; i++)   if (a[i] - a[i - 1] == mx) x++;
    cout << mx << " " << x << endl;

    return 0;
}