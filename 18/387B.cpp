#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    vector<int> b(m);
    for (int& x : b) cin >> x;

    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (b[j] >= a[i]) ++i;
        ++j;
    }

    cout << n - i;

    return 0;
}