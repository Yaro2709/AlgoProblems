#include <iostream>

using namespace std;

int a[6], sum = 0;

bool Try(int i, int t, int cnt) {
    if (i == 6) return cnt == 3 && sum == 2 * t;
    else return Try(i + 1, t, cnt) || Try(i + 1, t + a[i], cnt + 1);
}

int main() {
    for (int i = 0; i < 6; i++)
        cin >> a[i], sum += a[i];
    cout << (Try(0, 0, 0) ? "YES" : "NO");

    return 0;
}