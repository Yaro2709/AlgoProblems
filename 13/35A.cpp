#include <iostream>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int x; cin >> x;
    int c[4];
    c[1] = 1; c[2] = 2; c[3] = 3;
    for (int i = 0; i < 3; ++i) {
        int a, b; cin >> a >> b;
        swap(c[a], c[b]);
    }
    cout << c[x];
    return 0;
}