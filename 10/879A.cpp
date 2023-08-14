#include <iostream>

using namespace std;

int main() {
    int n, s, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a > s)s = a;
        else s = s + b - (s - a) % b;
    }
    cout << s;

    return 0;
}