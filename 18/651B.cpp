#include<iostream>

using namespace std;

int a[1005];

int main() {
    int n, x, q = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q = max(q, ++a[x]);
    }
    cout << n - q;

    return 0;
}