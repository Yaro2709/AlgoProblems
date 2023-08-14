#include <iostream>

using namespace std;

int main() {

    int t, a, b, c;
    int i = 0, j = 0, k = 0;
    cin >> t;
    for (int g = 0; g < t; g++) {
        cin >> a >> b >> c;
        i += a;
        j += b;
        k += c;
    }
    if (i == 0 && j == 0 && k == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}