#include<iostream>

using namespace std;

int main() {
    int n, m, mn, mx;
    cin >> n >> m;
    if (!n && m)
        return cout << "Impossible", 0;
    if (n < m) {
        mn = n + m - n;
    }
    else {
        mn = n;
    }
    mx = n + max(0, m - 1);
    cout << mn << ' ' << mx;

    return 0;
}