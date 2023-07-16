#include <iostream>

using namespace std;

int main() {

    int x, y, z = 0;
    cin >> x >> y >> z;
    if ((x - z) > y && (y - z) < x) {
        cout << "+\n";
    }
    else if ((y - z) > x && (x - z) < y) {
        cout << "-\n";
    }
    else if (z == 0) {
        cout << "0\n";
    }
    else {
        cout << "?\n";
    }

    return 0;
}