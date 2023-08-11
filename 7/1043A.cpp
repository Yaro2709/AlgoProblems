#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, s = 0, m = -1;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
        m = max(m, a[i]);
    }
    int r = (2 * s + n) / n;
    cout << max(m, r) << endl;

    return 0;
}