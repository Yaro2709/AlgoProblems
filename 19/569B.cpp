#include<iostream>

using namespace std;

int main()
{
    int n, m = 1;
    int a[100000], c[100001] = { 0 };
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ++c[a[i]];
    }
    while (c[m]) ++m;
    for (int i = 0; i < n; ++i) {
        if (c[a[i]] > 1 || a[i] > n) {
            --c[a[i]];
            a[i] = m;
            ++c[a[i]];
            while (c[m]) ++m;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}