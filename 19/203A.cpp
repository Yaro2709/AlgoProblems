#include<iostream>

using namespace std;

int main() {
    int i, j;
    int x, t, a, b, A, B;
    cin >> x >> t >> a >> b >> A >> B;
    for (i = 0; i <= t; ++i) {
        for (j = 0; j <= t; ++j) {
            if ((i == t ? 0 : max(0, a - A * i)) + (j == t ? 0 : max(0, b - B * j)) == x) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}