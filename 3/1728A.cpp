#include <iostream>

using namespace std;

void action() {
    int x, max = 0, index = 0;
    cin >> x;
    for (int i = 0; i < x; ++i) {
        int m;
        cin >> m;
        if (m >= max) {
            max = m;
            index = i + 1;
        }
    }
    cout << index << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        action();
    }
}