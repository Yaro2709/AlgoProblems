#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int ai = 5000, k = 0;
    string s[3] = { "maybe","unrated","rated" };
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        if (a != b) {
            k = 2;
            break;
        }
        if (a > ai) {
            k = 1;
        }
        ai = a;
    }
    cout << s[k];

    return 0;
}