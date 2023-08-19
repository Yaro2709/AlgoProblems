#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i * a <= c; ++i) {
        if ((c - i * a) % b == 0)
            return cout << "Yes", 0;
    }
    cout << "No";

    return 0;
}