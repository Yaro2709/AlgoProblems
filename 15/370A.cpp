#include<iostream>

using namespace std;

int main() {
    int a[4];
    for (auto& i : a)cin >> i;
    if (a[0] == a[2] || a[1] == a[3])cout << "1 ";
    else cout << "2 ";
    if ((a[0] & 1) ^ (a[1] & 1) != (a[2] & 1) ^ (a[3] & 1))
        cout << "0 ";
    else if (abs(a[0] - a[2]) == abs(a[1] - a[3]))
        cout << "1 ";
    else cout << "2 ";
    cout << max(abs(a[0] - a[2]), abs(a[1] - a[3]));

    return 0;
}