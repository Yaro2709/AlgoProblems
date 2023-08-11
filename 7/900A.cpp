#include<iostream>

using namespace std;

int main() {
    int n, plusX = 0, minusX = 0;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x > 0)  plusX++;
        else        minusX++;
    }
    cout << ((minusX < 2 || plusX < 2) ? "Yes" : "No");

    return 0;
}