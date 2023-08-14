#include <iostream>

using namespace std;

const int N = 1e5 + 5;

int main()
{
    int n, s;
    cin >> n >> s;
    int a[N], b[N];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    if (a[0] && a[s - 1]) return cout << "YES" << endl, 0;
    if (b[s - 1] != 1 || !a[0]) return cout << "NO" << endl, 0;
    for (int i = s; i < n; i++)
        if (a[i] == 1 && b[i] == 1) return cout << "YES" << endl, 0;
    cout << "NO" << endl;

    return 0;
}