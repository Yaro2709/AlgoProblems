#include<iostream>

using namespace std;

int main()
{
    int l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;
    for (int i = l; i <= r; i++) {
        if (i / k >= x && i / k <= y && i % k == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}